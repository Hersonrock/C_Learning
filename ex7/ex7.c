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

    int bugs = 100;
    double bug_rate = 1.5;

    printf("You have %d bugs, at an imaginary rate of %f\n",bugs,bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The whole universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs/universe_of_defects;
    printf("That is only a %f portion of the universe.\n", part_of_universe);

    //This makes no sense, just a demo of something weird.
    
    char nul_byte='\0';
    int care_percentage = bugs *nul_byte;

    printf("Which means you should care %d%%.\n", care_percentage);

    return 0;
}
