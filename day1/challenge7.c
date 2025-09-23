#include<stdio.h>
int main (void) {
    int m;
    int s;
    int mod1,mod2,mod3,mod4;
    printf("veuillez entre le montant: ");
    scanf("%d",&m);
    mod1=m/20;
    printf("Billets de 20$ : %d \n",mod1);
    mod1=m%20;
    mod2 = mod1 / 10;
     printf("Billets de 10$ :%d \n" ,mod2);
     mod2=mod1%10;
     mod3=mod2/5;
     printf("Billets de 5$ :%d \n " ,mod3);
     mod3=mod2%5;
     mod4=mod3/1;
          printf("Billets de 5$ :%d  " ,mod4);




    return 0;
}
