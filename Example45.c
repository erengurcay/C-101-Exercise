#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//Ilk 3 dakikasi 25 kurus olan ve sonrasinda her dakika basina 8 kurus ücret alan bir operatör firmasinda kullanicinin 
//telefonu kaç dakika kullandigina göre fatura sunan bir kod yaziniz.(fonksiyon kullanin)
	
	float islem(float t1){
		float sum;
		if(t1<=3){
			sum = t1*0.25;
			
			return sum;
		}
		else{
			sum = 0.75 + (t1-3)*0.08;
			
			return sum;
		}
	}
	int main(){
		float a;
		float sonuc;
		printf("Kac dakika telefonunla gorustunuz?\n");
		scanf("%f",&a);
		
		sonuc = islem(a);
		printf("%.2f",sonuc);
		}

