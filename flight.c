#include <stdio.h>
/* (Havayolları rezervasyon Sistemi) Küçük bir havayolları Ģirketi, rezervasyon kayıtlarını
tutmak için yeni bir bilgisayar almıĢtır. Patron, size yeni sistemi C‘ de programlamanızı
söylemiĢtir. Havayolları bir uçağa sahiptir ve sizden bu uçağın bütün uçuĢlarının
rezervasyon kayıtlarını tutacak bir program istenmiĢtir.
Programınız aĢağıdaki menüyü içermelidir.
“Sigara içilen bölüm” için 1‟e basın.
“Sigara içilmeyen bölüm” için 2‟ye basın.
 Eğer kullanıcı 1‘e basarsa, programınız sigara içilen bölümden bir koltuğun
rezervasyonunu yapmalıdır.(1-5. koltuklar.) Eğer kullanıcı 2‘ye basarsa sigara içilmeyen
bölümün koltuklarından birinin rezervasyonu yapılmalıdır.(6-10. koltuklar). Daha sonra
programınız, müĢterinin hangi bölümden ve kaç numaralı koltuğa rezervasyon yaptırdığını
göstermelidir.
Programınızda tek belirteçli bir dizi kullanınız. Dizi elemanlarının ilk değerlerini, koltukların
boĢ olduğunu göstermek için 0 yapınız. Bir koltuğun rezervasyonu yapıldığında ilgili dizi
elemanını 1 yapınız.
Programınız kesinlikle aynı koltuğa iki rezervasyon yapmamalı. Eğer sigara içilen bölüm
dolduysa müĢterinin sigara içilmeyen bölümden rezervasyon yapmak isteyip istemediğini
sormalı(tam tersi durum içinde aynı iĢlemi yapmalı) . Eğer cevap evet ise uygun rezervasyon
yapılmalı. Eğer hayırsa ―Diğer uçuĢ 3 saat sonra‖ yazmalı

*/
int i=5;
int icen(int [], int);
int icmeyen(int [], int);
int main()
{   int koltuk[10] = {0},ilk;
    for(int i=0;i<10;i++)
{
        printf("%d. kullanici hosgeldiniz.sigara iciyor musunuz iciyorsaniz 1 icmiyorsanız 2 tuslayiniz\n",i+1);
    scanf("%d",&ilk);

    if(ilk==1){
    icen(koltuk,i);
    }

    else if(ilk==2){
    icmeyen(koltuk,i);
    }

    else
    {
        printf("yanlis giris yaptiniz\n");
        i--;
    }
}
 return 0;
}

int icen(int b[], int kisi)
{   int k,count=0,secenek,temp;
    for (k=0;k<5;k++){
    if(b[k]==1)
        count++;}

    if(count!=5){
    for (k=0;k<5;k++)
    {
        if(b[k]==0){
            b[k]=1;
            printf("%d. koltuk size ayrilmistir\n",k+1);
            break;
            }
    }
    }
    else{
     printf("koltuklar dolmus diger siniftan koltuk ister misiniz?\n istiyorsaniz 1 istemiyorsaniz 2");
        scanf("%d",&temp);
        if(temp==1){
        return  icmeyen(b,kisi);
                    }
              else if(temp==2)
              {
                  printf("Diger ucus 3 saat sonra\n");
              }
              else{
                printf("yanlis giris yaptiniz\n");
              }

        }
}

int icmeyen(int b[], int kisi)
{
   int k,count=0,secenek,temp;
    for (k=5;k<10;k++){
    if(b[k]==1)
        count++;}

    if(count!=5){
    for (k=5;k<10;k++)
    {
        if(b[k]==0){
            b[k]=1;
            printf("%d. koltuk size ayrilmistir\n",k+1);
            break;
            }
    }
    }
    else{
     printf("koltuklar dolmus diger siniftan koltuk ister misiniz?\n istiyorsaniz 1 istemiyorsaniz 2");
        scanf("%d",&temp);
        if(temp==1){
        return  icen(b,kisi);
                    }
              else if(temp==2)
              {
                  printf("Diger ucus 3 saat sonra");
              }
              else{
                printf("yanlis giris yaptiniz ");
              }

        }
}
