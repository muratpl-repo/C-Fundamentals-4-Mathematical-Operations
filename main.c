#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Toplama   sayi++  sayi+=1     sayi=sayi+1;
    //Çýkarma   sayi--  sayi-=1     sayi=sayi-1;
    //Çarpma            sayi*=5     sayi=sayi*5;
    //Bölme             sayi/=5     sayi=sayi/5;
    //Mod alma          sayi%=5     sayi=sayi%5;




    int sayi1, sayi2, sayi3;
    sayi1 = 4;
    sayi2 = sayi1++;
    sayi3 = ++sayi1;

    // Sayi1=6
    // Sayi2=4
    // Sayi3=6


    printf("%d  %d  %d",sayi1,sayi2,sayi3);

    return 0;
}


