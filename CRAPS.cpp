#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int puan=0,puanim,i,zar;
    srand(time(NULL));
    for(i=0;i<2;i++)
    {
        zar=rand()%6+1;
        printf("%3d",zar);
        puan+=zar;
    }
    printf("  puaniniz = %d\n",puan);
    puanim=puan;
    
    if(puan==7|| puan==11)
    {
        printf("\n  KAZANDINIZ :) ");
        return 0;
    }
    if(puan==2 || puan==3 || puan==12)
    {
        printf("\n  kaybettiniz  :( ");
        return 0;
    }
    while(true)
    {
        puan=0;
        for(i=0;i<2;i++)
        {
            zar=rand()%6+1;
            printf("%3d",zar);
            puan+=zar;
        }
        printf(" = %d\n",puan);
        if(puan==puanim)
        {
            printf("\n  KAZANDINIZ  :)  ");
            return 0;
        }
        else if(puan==7)
        {
            printf("\n  kaybettiniz  :(  ");
            return 0;
        }
    }
}
