#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int button,apa,cafea,lapte,pah;
    double pa,pl,ras;
    apa = 255;
    cafea = 255;
    lapte = 255;
    pa = 500;
    pl = 500;
    ras = 500;

    printf("Va rugam selectati un tip de bautura!\n1.Cafea\n2.Cappucino\n3.Moccacino\n4.Latte Machiatto\n5.Americano\n");
    scanf("%d",&button);


    if((button <= 0) || (button >= 6))
    {
        printf("Invalid command");
    }
    else
    {

    switch(button){
    case 1:
        printf("Cafeaua dvs. se prepara!\n");
            apa = 30;
            cafea = 20;
            lapte = 10;
    break;
    case 2:
        printf("Cappucino dvs. se prepara!\n");
            apa=30;
            cafea=15;
            lapte=60;
    break;
    case 3:
        printf("Moccacino dvs. se prepara!\n");
            apa=30;
            cafea=10;
            lapte=20;
    break;
    case 4:
        printf("Latte Machiatto dvs. se prepara!\n");
            apa=20;
            cafea=10;
            lapte=30;
    break;
    default:
        printf("Americano dvs. se prepara!\n");
            apa=35;
            cafea=35;
            lapte = 0;
    break;
    }

    }

     printf("\nlapte: %d, cafea: %d , apa : %d",lapte,cafea,apa);

     printf("\nPahar:");
     scanf("%d", &pah);

    if(pah==1){
        pa = 100 * apa;
        pl = 150 * lapte;
        ras = 111 * cafea;
    }
    else{
        pa = 500;
        pl = 500;
        ras = 500;
    }
        if((pa!=500) && (pl!=500) && (ras!=500)){
            pa = pa / 1000;
            pl = pl / 1000;
            ras = ras / 1000;

            printf("pompa apa: %f s pompa lapte: %f s rasnita: %f s",pa, pl, ras);
        }
        else{
            printf("Eroare");
        }
    return 0;
}
