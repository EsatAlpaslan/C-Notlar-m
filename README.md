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





















