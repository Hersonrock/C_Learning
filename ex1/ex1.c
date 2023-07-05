#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    // this is also a comment
    printf("You are %d miles away.\n", distance);
    //here I will be making a set of outputs to test the utility of argc "Argument count" and argv "Argument Vector"
    //argc will count the arguments the program was run with, including the program name
    //argv will hold in the array the arguments, where argv[0] is the program name 
    printf("The number of arguments is %d\n", argc);
    for(int i=0;i<argc;i++){
        printf("Argument %d: %s\n",i,argv[i]);
    }

    return 0;
}
