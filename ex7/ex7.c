#include <stdio.h>

int main(int argc, char *agrv[]){
    
    int distance = 130;
    float weight = 12.302;
    double speed = 299792458;
    char middle = 'R';
    char name[] = "Herson";
    char last[] = "Rock";

    printf("The distance is %d\n", distance);
    printf("The weight of the dog is %f\n", weight);
    printf("The speed of light is %fm/s\n", speed);
    printf("My middle name starts with %c\n", middle);
    printf("My names are %s %c\n", name, middle);
    printf("My whole name is %s %c. %s\n", name, middle, last);

    return 0;
}
