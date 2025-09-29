#include<stdio.h>
void bubbleSort(int T[],int n){
    int i , j , temp;
    for(i=0 ; i<n-1 ;i++) {
        for(j=0 ; j<n-i-1 ; j++) {
            if (T[j] >T[j+1]){
            temp=T[j];
            T[j]=T[j+1];
            T[j+1]=temp;
            }
        }
    }
  
}


int main() {
    int n;
    int i;
    printf("Combien de nombres voulez-vous entrer ?");
    scanf("%d" ,&n );
    int T[n];

    printf("Veuillez entrer les nombres");

    for(i=0 ; i<n ;i++){
        scanf("%d" , &T[i]);
    }

     printf("\nTableau avant tri :\n");
     for (i = 0; i < n; i++)
     {
        printf("%d",T[i]);
        
     }
    
     
 printf("\nTableau apres tri :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
