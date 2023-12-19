#include <stdio.h>

float calculate_ba(int plate_appearances, int hits); //function to calculate batting average

int main(){

    int pa;   // number of plate appearances
    int hits; // number of hits
    float ba;   // batting average

    printf("Enter number of Plate Appearances: \n");
    //scanf("%d", &pa);
    pa = 100;

    printf("Enter number of hits: \n");
    //scanf("%d", &hits);
    hits = 20;

    ba = calculate_ba(hits, pa);
    printf("%f", ba);

    return 0;
}