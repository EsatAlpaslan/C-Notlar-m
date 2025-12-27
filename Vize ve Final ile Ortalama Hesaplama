/*Öğrenci sayısı girilerek viz ve final notları alınan verilerle dersin ortalamasını hesaplayan kod */

#include <stdio.h>


    struct ogrenci
    {
        int vize;
        int final;
    };
    
    
    
    float ortalamaBul(struct ogrenci a)
    {
        return (a.vize*0.4)+(a.final*0.6);
    }
    
    
    int main()
    {
     struct ogrenci ortalama;
     int kisiSayi;
     printf("Lütfen girilecek öğrenci sayisini giriniz: \n");
     scanf("%d",&kisiSayi);
     for(int i=0;i<kisiSayi;i++)
     {
     printf("Lütfen ogrencinin vize notunu giriniz:\n");
     scanf("%d",&ortalama.vize);
     printf("Lütfen ogrencinin final notunu giriniz:\n");
     scanf("%d",&ortalama.final);
     printf("Ortalamanız:%f",ortalamaBul(ortalama));
     }
     return 0;
     
    }
