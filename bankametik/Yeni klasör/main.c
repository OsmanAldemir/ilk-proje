#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   float kullanicibakiyesi=1250.0,kulllanicimiktari=0,limit=500.0;
 int islem;
 int i =1;
      printf("Merhaba Hosgeldiniz\n");
                    printf("para yatirma=1 para cekme=2 hesap bakiyesi goruntulemek icin:3 kart iadesi icin lutfen 4 e basiniz\n");
            scanf("%d",&islem);
              if(islem==1){
                printf("\t yatirmak istediginiz miktari girin");
                scanf("%f",&kulllanicimiktari);
                   if(kulllanicimiktari==0){//if in içine bir tane daha if yazdım
                        printf("\tlutfen belirtilen surede parayi girinz");
                        sleep(3);//programı 3 saniye uyutur
                        scanf("%f",&kulllanicimiktari);

                   }
                kullanicibakiyesi+=kulllanicimiktari;//kullanicibakiyesi=kullanicibakiyesi+kullanıcımiktari

                printf("\t isleminiz basariyla gerceklesti\n");
                printf("\t yeni bakiyeniz:%.2f",kullanicibakiyesi);

             }

             else if(islem==2){
                 printf("\t lutfen cekmek istediginiz miktari yaziniz\n");
                 scanf("%f",&kulllanicimiktari);
                  if(kullanicibakiyesi<kulllanicimiktari){
                  printf("\t Hesabinizda bu kadar para yoktur.Lutfen başka bir miktar giriniz\n");
                  }
                  else if(limit<kulllanicimiktari){
                      printf("\t gunluk limitinizi gectiniz\n");
                   }

                  else{
                    kullanicibakiyesi-=kulllanicimiktari;
                    printf("\t isleminiz basariyla gerceklesmistir\n");
                    printf("\t yeni bakiyeniz:%.2f",kullanicibakiyesi);
                  }


            }
              else if(islem==3){
                printf("\thesap bakiyeniz:%.2f\n",kullanicibakiyesi);


             }

            else if(islem==4){
             printf("\t kartiniz iade edilmistir");

            }

            else{
                printf("\t yanlis bir islem girdiniz");
            }








    return 0;
}


