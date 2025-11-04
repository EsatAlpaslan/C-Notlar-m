# C-Notlar-m





•C++ dilinde değişken ismi sayı ile başlayamaz ama sayı ile bitebilir.Özel karakterle başlayamaz ama özel karakterle bitebilir.

Doğru :                                  Yanlış:
* Sayi5    kalem$                        5Sayi     $kalem



•C++ dili büyük küçük harfe duyarlı bir dildir. Sayi  ile sayi farklı algılanır.


*****************************************************

#include <iostream>

int main()
{
	int sayi = 5;
	int sayi2 = 10;
	int sonuc;

	sonuc = sayi + sayi2;
	std::cout << sonuc;
}
*******************************************************

*Bir harfi yazmak için 8 bit gerekir.
*8 bit= 1 byte
*int 4 byte lik alan kaplar
*Her bir hücre 1 byte yer tutabilir

char   1byte     -127 to 127  ord 0 to 255
int    4bytes    -2147483648 to 2147483648
float  4bytes     
double 8bytes


***********************************************************************

int main()
{
	 char d[] = "merhaba";

	std::cout << d;
}

(çıktısı merhaba olur)

************************************************************************

*signet eksili sayılar için  unsignet ise pozitifler(işaretsiz sayılar) için kullanılır


int main()
{
	signed int s = -1;
	unsigned int u = 1;
	if (s < u) {
		std::cout << "Kucuk";
}
	else {
		std::cout << "Kucuk degil";
	}
	/*burada 1i -1 olarak algıladığı içinküçük değildir diyor.Böyle sorun bazen yaşanıyormuş*/
}

**************************************************************************************************

unsignet short x{65635};
std::cout << "x degeri: "<< x << '\n';

x= 65536;
std::cout<<"x yeni deger:"<< x <<'\n';

x=65537; 
std::cout << "x son deger: " << x << '\n';

/* çıktısı unsignet short max 65535b aldığı için max değer +1 alıp girilen sayıya bölüp kalanı girer ve bu da

x degeri:65535
x yeni deger: 0
x son deger : 1      çıktısını bize verir


*************************************************************************************************************************


unsigned int x{3};
unsigned int y{5};

std::cout<< x-y<< '\n';

/* iki veri de unsigned yani işaretsiz tam sayı olduğu için sonucunun da işaretsiz bir tam sayının içerisinde tutmaya çalışıyor ve bambaşka farklı bir sonuç çıkartıyor*/

************************************************************************************************************************

9.8787878787980000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

C++ gösterimi sıfırdan önceki haneler +12e4 olarak gösterilir

örn:  9.878787878798 x 10 üzeri 80 c++ karşılığı 5.9736e40


************************************************************************************************************************

 1 byte  01000001 =A=65 
 2 byte  1100001110100111=ç= 231  (soldan ilk kaç 1 varsa bellekte kaç byte yer kaplayacağını bize gösterir.Burada mesela 2 tane olduğu için pc okurken 2 tane 8 bitlik kısmı okuduktan sonra devamı benim değil diyerek bırakır)
 3 byte 111000111000000110001100=  =12364





 ******************************************************************************************


                        C ÖRNEKLER

						
 #include <stdio.h>

int main()
{
   int sayi,toplam=0,kalan;
   printf("bir sayi giriniz\n");
   scanf("%d",&sayi);
   while (sayi != 0)
   {
       kalan = sayi % 10;
       toplam= toplam +kalan;
       sayi= sayi/ 10;
   }
   printf("basamak toplami = %d\n",toplam);
    return 0;
}

(Basamak sayısı toplamını verir)

*******************************************************************************************




















