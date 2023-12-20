#include <stdio.h>

float calculate_ba(float plate_appearances, float hits); //function to calculate batting average

int main(){

    float pa;   // number of plate appearances
    float hits; // number of hits
    float ba; // batting average

    printf("Enter number of Plate Appearances: \n");
    //scanf("%f", &pa);
    pa = 100; // for testing

    printf("Enter number of hits: \n");
    //scanf("%f", &hits);
    hits = 20; // for testing

    ba = calculate_ba(hits, pa);
    printf("%f", ba);

    return 0;
}