#include<stdio.h>
int main () {
    int note;
    int dizaines;
    printf("Entrez une note numérique");
    scanf("%d" ,&note);

   
      dizaines = note / 10;  
 
           if (
       note>100 || note <0

     )
     {printf("nombre doit etre entre 100 et 0 ");
    } 
    else 
    {
    switch ( dizaines) {
     case 10:
     case 9:
      printf("A\n");
        break;  

        case 8:
        printf("B \n");
        break;

        case 7:
        printf("C \n");
        break;

        case 6:
        printf("D \n");
        break;

          default :
          printf ("F\n");
          
    }
}
    return 0;
}
