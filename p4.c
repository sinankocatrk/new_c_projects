#include <stdio.h>
/*myStretch() fonksiyonu, “param1” dizisi içerisindeki elemanların aritmetik
ortalamasını bulduktan sonra ortalama değerden daha küçük değere sahip
elemanları 1 eksiğine, ortalamadan daha büyük değere sahip elemanları ise 1
fazlasına güncellemelidir. "param2", "param1" dizisi içerisindeki toplam
eleman sayısını ifade etmektedir.
:::::::::::::: ÖRNEK :::::::::::::::::::::
---------main1.c DOSYASININ İÇERİĞİ:-----------
#include <stdio.h>
void myShrink(int *param1, const int param2);
int main ()
{
int myArray[] = {2, 4, 2, 4, 2, 4};
int index;
myShrink(myArray, 6);
printf("GUNCELLENMIS DIZI: ");
for(index = 0; index < 6; index++){
 printf("%d\t", myArray[index]);
}
return 0;
}
----*/

void myStretch(int *param1, const int param2);
int main ()
{
int myArray[] = {2, 4, 2, 4, 2, 4};
int index;
myStretch(myArray, 6);
printf("GUNCELLENMIS DIZI: ");
for(index = 0; index < 6; index++){
 printf("%d\t", myArray[index]);
}
return 0;
}

void myStretch(int *param1, const int param2)
{int sum=0;
    for(int i=0;i<param2;i++)
    {
        sum+=param1[i];
    }
    int ort=sum/param2;

    for(int i=0;i<param2;i++)
    {
        if(param1[i]<ort)
            param1[i]--;
        if(param1[i]>ort)
            param1[i]++;
    }
}
