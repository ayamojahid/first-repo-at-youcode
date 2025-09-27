#include<stdio.h> 
int main() {
 int s;
 int n;
 int m;
 int l=0;
 int retenu=0;
 
     printf("entrer un nombre");
    scanf("%d" , &n );
    int origine=n;

    while (n>0){
    m=n/10;
    s=n%10;
    n=m; 
    retenu=retenu*10 +s;
    l=l+s;
  
    }
     

      if (origine==retenu){
        printf("%d est un  palindrome" , origine); }
        else{
     printf("%d est nest pas un palindrome" , origine);

        }
    return 0;
} 