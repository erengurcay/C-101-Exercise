#include<stdio.h>
#include<math.h>

int main()
{
	int saat,ucret;
	int eksaat,ekucret=0;
	int garantimaas,ekmaas=0;
	int total=0;
	
	printf("haftada kac saat calisiyosun?\n");
	scanf("%d",&saat);
	printf("saatlik ucreti gir(ilk 40 saat):\n");
	scanf("%d",&ucret);
	printf("40 saatin ?zerine kac saat calisiyosun?\n");
	scanf("%d",&eksaat);
	
	garantimaas= saat*ucret;
	printf("maas: %d \n",garantimaas);
	
	ekucret=ucret*1.5;
	printf("ek ucret: %d\n",ekucret);

	ekmaas=eksaat*ekucret;
	printf("ek maas: %d\n",ekmaas);
	
	total=ekmaas+garantimaas;
	printf("total maas: %d\n",total);
	return 0;
}
