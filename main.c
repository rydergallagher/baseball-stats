#include <stdio.h>

int calculate_ba(int plate_appearances, int hits); //function to calculate batting average

int main(){

    int pa;   // number of plate appearances
    int hits; // number of hits
    int ba;   // batting average

    printf("Enter number of Plate Appearances: \n");
    scanf("%d", &pa);

    printf("Enter number of hits");
    scanf("%d", &hits);

    ba = calculate_ba(pa, hits);

    return 0;
}