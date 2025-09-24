#include <stdio.h>
int main() {
    int h, m;
    int temps = h * 60 + m;
    printf("Entrez une heure (HH:MM) : ");
    scanf("%d:%d", &h, &m);

    int dep1 = 8 * 60 + 0;      
    int dep2 = 9 * 60 + 43;     
    int dep3 = 11 * 60 + 19;    
    int dep4 = 12 * 60 + 47; 
    int dep5 = 14 * 60 + 0;     
    int dep6 = 15 * 60 + 45;    
    int dep7 = 19 * 60 + 0;     
    int dep8 = 21 * 60 + 45;    

    if (temps >= dep1 && temps <= dep2) {
        printf("L'heure de départ la plus proche est 8h00 a.m., arrivant a 10h16 a.m\n");
    }

    else if (temps >= dep2 && temps <= dep3) {
        printf("L'heure de départ la plus proche est 9h43 a.m., arrivant a 11h52 a.m\n");
    }

    else if (temps >= dep3 && temps <= dep4) {
        printf("L'heure de départ la plus proche est 11h19 a.m., arrivant a 1h31 p.m\n");
    }

    else if (temps >= dep4 && temps <= dep5) {
        printf("L heure de départ la plus proche est 12h47 p.m., arrivant a 3h00 p.m\n");
    }

    else if (temps >= dep5 && temps <= dep6) {
        printf("L heure de départ la plus proche est 2h00 p.m., arrivant a 4h08 p.m\n");
    }
    else if (temps >= dep6 && temps <= dep7) {
        printf("L heure de départ la plus proche est 3h45 p.m., arrivant a 5h55 p.m\n");
    }
    else if (temps >= dep7 && temps <= dep8) {
        printf("L heure de départ la plus proche est 7h00 p.m., arrivant a 9h20 p.m\n");
    }
    else {
        printf("L heure de départ la plus proche est 9h45 p.m., arrivant a 11h58 p.m\n");
    }
    return 0;
}
