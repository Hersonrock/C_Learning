#include <stdio.h>

int main(int argc, char *argv[]){
    int numbers[4] ={ 0 }; 
    char names[4] = { 'a' };
    int i=0;
    for (i=0;i<4;i++){
        printf("numbers are: %d\n",numbers[i]);
    }
    
    for (i=0;i<4;i++){
        printf("names are:  %c\n",names[i]);
    }
    numbers[0]=1;
    numbers[1]=2;
    numbers[2]=3;
    numbers[4]=4;
    
    names[0]='H';
    names[1]='e';
    names[2]='r';
    names[3]='\0';

    for(i=0;i<4;i++){
        printf("numbers are %d\n",numbers[i]);
    }

    for(i=0;i<4;i++){
        printf("names are %c\n",names[i]);
    }

    printf("Complete name is = %s\n",names);
    
    char *another = "Hern";

    printf("another is= %s\n",another);
    for(i=0;i<5;i++){
        printf("another are %c\n",another[i]);
    }
       
   return 0;
}
