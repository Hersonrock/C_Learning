#include<stdio.h>
#include<stdlib.h>

struct Box
{
	int height;
	int width;
};

struct Box *Out_box(int in_height, int in_width)
{
	
	struct Box *out = malloc(sizeof(struct Box));
	out->height=in_height;
	out->width=in_width;

	return out;
}

int main(int argc, char *argv[]){

	printf("argc= %d\n",argc);
	if (argc == 3){
		struct Box *box1 = Out_box(atoi(argv[1]),atoi(argv[2]));
		
		printf("box1 height: %d\n", box1->height);
		printf("box1 width: %d\n", box1->width);

		// 0 is false
		if(box1->height)
			printf("box1 is height not 0\n");

		if(box1->width)
			printf("box1 is width not 0\n");
	} else {
		printf("ERROR: invalid arguments\n");
		printf("Usage: {height} {width}\n");
	}

	return 0;
}
