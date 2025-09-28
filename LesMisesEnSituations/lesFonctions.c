#include<stdio.h>

void signe(int A, int B) {
    if (A * B > 0) {
        printf("Les valeurs A et B ont le meme signe.\n");
    } else if (A * B < 0) {
        printf("Les valeurs A et B ont des signes differents.\n");
    } else {
        printf("Au moins une des deux valeurs est nulle.\n");
    }
}

int minimum(int A , int B) {
    if(A>B) {
        return B;
    }
    else {
        return A;
    }
}
int maximum(int A , int B){
    if(A>B) {
        return A;
    }
    else {
        return B;
    }
}
int main(){
int max, min;
int A ,B;

printf("veuillez saisir la valeur de A :");
scanf("%d" , &A);

printf("veuillez saisir la valeur de B :");
scanf("%d" , &B);

signe(A,B);
min=minimum(A ,B);
max=maximum(A ,B);

printf("la valeur minimal est: %d " , min);
printf("\n la valeur maximal est: %d " , max);

return 0;
}