/*myInitialize() fonksiyonuna ait prototip a�a��daki gibidir:
void myInitialize(int *param1, const const int rows, const int
columns);
myInitialize() fonksiyonu, �rows� adet sat�ra ve "columns" adet s�tuna
sahip iki boyutlu "param1" dizisinin her bir eleman�n�, elaman�n sat�r ve
s�tun indislerinin �arp�m�yla ba�lat�r.
\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_
:::::::::::::: �RNEK :::::::::::::::::::::
---------main2.c DOSYASININ ��ER���:-----------
#include <stdio.h>
void myInitialize(int *param1, const const int rows, const int columns);
int main ()
{
int myArray[5][5];
int index1, index2;
myInitialize(&myArray[0][0], 5, 5);
printf("GUNCELLENMIS DIZI:\n");
for(index1 = 0; index1 < 5; index1++){
for(index2 = 0; index2 < 5; index2++){
 printf("%d\t", myArray[index1][index2]);
}
printf("\n");
}
return 0;
}
---------DO�RU �IKTI:-----
GUNCELLENMIS DIZI:
0 0 0 0 0
0 1 2 3 4
0 2 4 6 8
0 3 6 9 12
0 4 8 12 16*/

#include <stdio.h>
void myInitialize(int *param1,  const int rows, const int columns);
int main ()
{
int myArray[5][5];
int index1, index2;
myInitialize(&myArray, 5, 5);
printf("GUNCELLENMIS DIZI:\n");
for(index1 = 0; index1 < 5; index1++){
for(index2 = 0; index2 < 5; index2++){
 printf("%d\t", myArray[index1][index2]);
}
printf("\n");
}
return 0;
}

void myInitialize(int *param1,  const int rows, const int columns)
{
    int a = 0;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            *(param1+a) = i *j;
            a++;
        }
    }
}
