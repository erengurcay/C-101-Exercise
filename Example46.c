#include <stdio.h>
#include <GL/glut.h>

#define MAX_OBSERVATIONS 10
#define INTERPOLATION_POINTS 1000

typedef struct {
    float x;
    float y;
} Observation;

Observation observations[MAX_OBSERVATIONS];
float divided_differences[MAX_OBSERVATIONS][MAX_OBSERVATIONS];
int num_observations;
float f, k;

void calculate_divided_differences() {
    for (int i = 0; i < num_observations; i++) {
        divided_differences[i][0] = observations[i].y;
    }
    for (int j = 1; j < num_observations; j++) {
        for (int i = 0; i < num_observations - j; i++) {
            float denom = (observations[i + j].x - observations[i].x);
            if(denom != 0.0) {
                divided_differences[i][j] = (divided_differences[i + 1][j - 1] - divided_differences[i][j - 1]) / denom;
            }
        }
    }
}
float interpolate(float x) {
    float f = divided_differences[0][0];
    for (int i = 1; i < num_observations; i++) {
        float term = divided_differences[0][i];
        for (int j = 0; j < i; j++) {
            term *= (x - observations[j].x);
        }
        f += term;
    }
    return f;
}
void draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(-1000.0, 0.0);
    glVertex2f(1000.0, 0.0);
    glVertex2f(0.0, -1000.0);
    glVertex2f(0.0, 1000.0);
    glEnd();

   
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINE_STRIP);
    float range = observations[num_observations - 1].x - observations[0].x;
    for (int i = 0; i <= INTERPOLATION_POINTS; i++) {
        float x = observations[0].x + (i / (float)INTERPOLATION_POINTS) * range;
        float y = interpolate(x);
        glVertex2f(x, y);
    }
    glEnd();

   
    glPointSize(5.0);
    glColor3f(0.0, 0.0, 1.0); 
    for (int i = 0; i < num_observations; i++) {
        glBegin(GL_POINTS);
        glVertex2f(observations[i].x, observations[i].y);
        glEnd();
    }

    glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -1000.0, 1000.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    printf("\nEnter the number of observations:\n");
    scanf("%d", &num_observations);

    printf("\nEnter the different values of x and y:\n");
    for (int i = 0; i < num_observations; i++) {
        scanf("%f %f", &observations[i].x, &observations[i].y);
    }

    printf("\nEnter the value of 'k' in f(k) you want to evaluate:\n");
    scanf("%f", &k);

    calculate_divided_differences();
    f = interpolate(k);

    printf("\nf(%.2f) = %.2f", k, f);

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Interpolation");
    glutDisplayFunc(draw);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}

