#include<stdio.h>
int A ,B;
void saisi(){
printf("veuillez saisir la valeur de A :");
scanf("%d" , &A);

printf("veuillez saisir la valeur de B :");
scanf("%d" , &B);
}
void signe() {
    if (A * B > 0) {
        printf("Les valeurs A et B ont le meme signe.\n");
    } else if (A * B < 0) {
        printf("Les valeurs A et B ont des signes differents.\n");
    } else {
        printf("Au moins une des deux valeurs est nulle.\n");
    }
}

int minimum() {
    if(A>B) {
        return B;
    }
    else {
        return A;
    }
}
int maximum(){
    if(A>B) {
        return A;
    }
    else {
        return B;
    }
}
int main(){

    int min,max;
    saisi();
    signe(A,B);
    

min=minimum(A ,B);
max=maximum(A ,B);

printf("la valeur minimal est: %d " , min);
printf("\n la valeur maximal est: %d " , max);


}