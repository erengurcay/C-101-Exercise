#include<stdio.h>
#include<math.h>

int main()
{
    int sayi, originalNumber, remainder, sonuc = 0, n = 0 ;

    printf("Bir tamsayi girin: ");
    scanf("%d", &sayi);

     originalNumber = sayi;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = sayi;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        sonuc += pow(remainder, n);
        originalNumber /= 10;
    }

    if(sonuc == sayi)
        printf("%d Armstrong Sayisidir.", sayi);
    else
        printf("%d Armstrong Sayisi degildir.", sayi);

    return 0;
}
