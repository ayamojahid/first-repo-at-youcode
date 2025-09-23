#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    int p;

    printf("Entrer une valeur pour x: ");
    scanf("%d", &x);

    p = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) -x*x + 7 * x - 6;

    printf("La valeur est p = %d\n", p);

    return 0;
}
