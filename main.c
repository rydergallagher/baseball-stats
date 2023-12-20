#include <stdio.h>

float calculate_hits(float singles, float doubles, float triples, float hrs); // function to calculate hits

float calculate_ba(float hits, float plate_appearances); // function to calculate batting average

float calculate_obp(float plate_appearances, float hits, float walks, float hitbypitches, float sacflies); // function to calculate on base percentage

float calculate_slg(float singles, float doubles, float triples, float hrs); // function to calculate slugging percentage

int main(){

    float pa;   // number of plate appearances
    float singles; // number of hits ruled singles
    float doubles; // number of hits ruled doubles
    float triples; // number of hits ruled triples
    float hrs;  // number of homeruns
    float hits; // number of hits
    float walks; // number of walks
    float hbp; // number of hit by pitches
    float sflies; // number of sacrifice flies
    float ba; // batting average
    float obp; // on base percentage
    float slg; // slugging percentage

    printf("Enter number of Plate Appearances: \n");
    scanf("%f", &pa);
    //pa = 100; // for testing

    printf("Enter number of singles: \n");
    scanf("%f", &singles);
    //singles = 10 // for testing

    printf("Enter number of doubles: \n");
    scanf("%f", &doubles);
    //doubles = 5 // for testing

    printf("Enter number of triples: \n");
    scanf("%f", &triples);
    //triples = 3 // for testing

    printf("Enter number of homeruns: \n");
    scanf("%f", &hrs);
    //hrs = 5 // for testing

    // printf("Enter number of hits: \n");
    // scanf("%f", &hits);
    // //hits = 20; // for testing

    printf("Enter number of walks: \n");
    scanf("%f", &walks);
    //walks = 10 // for testing

    printf("Enter number of hit by pitches: \n");
    scanf("%f", &hbp);
    //hbp = 5 // for testing

    printf("Enter number of sacrifice flies: \n");
    scanf("%f", &sflies);
    //sflies = 10 // for testing

    hits = calculate_hits(singles, doubles, triples, hrs);
    printf("The number of hits is: \n");
    printf("%.3f", hits);
    printf("\n");

    ba = calculate_ba(hits, pa);
    printf("The batting average is: \n");
    printf("%.3f", ba);
    printf("\n");

    obp = calculate_obp(pa, hits, walks, hbp, sflies);
    printf("The on base percentage is: \n");
    printf("%.3f", obp);
    printf("\n");

    slg = calculate_slg(singles, doubles, triples, hrs);
    printf("The slugging percentage is: \n");
    printf("%.3f", slg);
    printf("\n");
    
    return 0;
}