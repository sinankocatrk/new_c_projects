
/*myTranspose() fonksiyonuna ait prototip aþaðýdaki gibidir:
 void myTranspose(int param1[][3], const int rows, const int
columns, int param2[][2]);
myTranspose() fonksiyonu, “rows” adet satýra ve "columns" adet sütuna sahip
iki boyutlu "param1" dizisinin transpozunu "param2" dizisinde saklar.
\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_
:::::::::::::: ÖRNEK :::::::::::::::::::::
---------main3.c DOSYASININ ÝÇERÝÐÝ:-----------
#include <stdio.h>
void myTranspose(int param1[][3], const int rows, const int columns, int
param2[][2]);
int main ()
{
int myArray1[2][3] = {{1, 2, 3}, {0, -6, 7}};
int myArray2[3][2];
int index1, index2;
myTranspose(myArray1, 2, 3, myArray2);
printf("MATRIS TRANSPOZU:\n");
for(index1 = 0; index1 < 3; index1++){
for(index2 = 0; index2 < 2; index2++){
 printf("%d\t", myArray2[index1][index2]);
}
printf("\n");
}
return 0;
}
--------DOÐRU ÇIKTI:-----
MATRIS TRANSPOZU:
1 0
2 -6
3 7
*/
#include <stdio.h>
void myTranspose(int param1[][3], const int rows, const int columns, int param2[][2]);
int main ()
{
int myArray1[2][3] = {{1, 2, 3}, {0, -6, 7}};
int myArray2[3][2];
int index1, index2;
myTranspose(myArray1, 2, 3, myArray2);
int *ptr=myArray2;
printf("MATRIS TRANSPOZU:\n");
for(index1 = 0; index1 < 3; index1++){
for(index2 = 0; index2 < 2; index2++){
 printf("%d\t", *((ptr+index1)+index2));
}
printf("\n");
}
return 0;
}

void myTranspose(int param1[][3], const int rows, const int columns, int param2[][2]) // myTranspose(myArray1, 2, 3, myArray2);
{
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                param2[j][i]=param1[i][j];
            }
        }

}
