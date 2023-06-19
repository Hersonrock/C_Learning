#include<stdio.h>

enum Level {
    LOW=1,
    MEDIUM,
    HIGH
};

int main(int argc, char *argv[]){
    enum Level myVar = MEDIUM;

    switch (myVar){
    
    case 1:
        printf("LOW\n");
        break;
    case 2:
        printf("MEDIUM\n");
        break;
    case 3:
        printf("HIGH\n");
        break;    
    }
    return 0;
}
