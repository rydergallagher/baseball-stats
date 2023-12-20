#include <stdio.h>

float calculate_ba(float plate_appearances, float hits); //function to calculate batting average

float calculate_obp(float plate_appearances, float hits, float walks, float hitbypitches, float sacflies);

int main(){

    float pa;   // number of plate appearances
    float hits; // number of hits
    float walks; // number of walks
    float hbp; // number of hit by pitches
    float sflies; // number of sacrifice flies
    float ba; // batting average

    printf("Enter number of Plate Appearances: \n");
    scanf("%f", &pa);
    //pa = 100; // for testing

    printf("Enter number of hits: \n");
    scanf("%f", &hits);
    //hits = 20; // for testing

    printf("Enter number of walks: \n");
    scanf("%f", &walks);
    //walks = 10 // for testing

    printf("Enter number of hit by pitches: \n");
    scanf("%f", &hbp);
    //hbp = 5 // for testing

    printf("Enter number of sacrifice flies: \n");
    scanf("%f", &sflies);
    //sflies = 10 // for testing
    
    ba = calculate_ba(hits, pa);
    printf("The batting average is: \n");
    printf("%.3f", ba);
    printf("\n");

    return 0;
}