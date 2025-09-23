#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    int p;

    printf("Entrer une valeur pour x: ");
    scanf("%d", &x);
 
    p = ((((3 * x + 2) * x - 5)* x-1) *x+7)*x-6;
    

    printf("La valeur est p = %d\n", p);

    return 0;
}
