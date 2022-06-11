#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int kap(int kapp);
int main()
{int i,x=1,y=1;
 srand ( time( 0 ) );
int j=0,flag=1;
int kapp=1,tavp=1;

printf(" CUVV !!!! ISTE BASLADILAR !!!\n");

    while (flag!=0){

  printf("Guncel skor tavsan: %d kaplumbaga: %d\n",x,y);


    if(x>=10)
    {
        printf("tavsan kazandi\n");
        flag=0;
        break;
    }

        if(y>=10)
    {
        printf("kaplumbaga kazandi\n");
        flag=0;
        break;
    }
    x=tav(tavp);
    y=kap(kapp);
}

    if(x==y)
        printf("AH !!!\n");
    return 0;
    }

int kap(int kapp)
{int i;
    i = 1 +rand() % 10;
if(kapp<=0)
    kapp=1;


    if (i<6&&i>0){
    printf("kaplumbaga kosuyor\n");
    kapp+=3;//ileri
    }

    if (i>=6 &&i<=7)
    {
    printf("kaplumbaga kayiyor\n");
    kapp-=6;
    }

     if(i>7&& i<11)
    {
    printf("kaplumbaga yuruyor\n");//ileri
    kapp+=1;
    }

    return kapp;
}

int tav(int tavp)
{int i;
if(tavp<=0)
    tavp=1;

    i = 1 +rand() % 10;

    if (i<=2&&i>0){
    printf("tavsan uyuyor\n");

    }

    if (i>2 &&i<=4)
    {
    printf("tavsan buyuk ileri zipliyor\n");
    tavp+=9;
    }

     if(i>4&& i<6)
    {
        printf("tavsan geri kayiyor\n");//ileri
        tavp-=12;
    }
    if(i>=6&&i<9)
    {
        printf("tavsan kucuk ileri zipliyor\n");
        tavp+=1;
    }
    if(i>=9 && i<=10)
    {
        printf("tavsan kucuk geri kayiyor\n");//ileri
        tavp-=2;
    }


    return tavp;
}


