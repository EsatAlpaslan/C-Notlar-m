//sayının karesini alan program
#include<stdio.h>

int kare(int *P); //P yazmasak da olur
int main()
{
int sonuc;
int a;
printf("bir sayi giriniz :");
scanf("%d",&a);
sonuc=kare(&a);
printf("sayinin karesi : %d\n", sonuc);
return 0;
}
 
int kare(int *P)
{
return *P * *P;
}
