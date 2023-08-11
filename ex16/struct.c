#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
	int height;
	int width;
};

struct Rectangle *Rectangle_create(int in_height, int in_width)
{
	struct Rectangle *out= malloc(sizeof(struct Rectangle));

	out->height=in_height;
	out->width=in_width;

	return out;
}

void Rectangle_destroy(struct Rectangle *in)
{
	free(in);
}

int main(int argc, char  *argv[])
{
	struct Rectangle box1; 
	box1.height=10;
	box1.width=12;
	
	printf("Using creation without pointers\n");
	printf("\tbox1 height: %d\n",box1.height);
	printf("\tbox1 width: %d\n",box1.width);
	
	struct Rectangle *ptr = &box1;

	printf("Pointer dereference\n");
	printf("\tbox1 height: %d\n",ptr->height);
	printf("\tbox1 width: %d\n",ptr->width);

	struct Rectangle *box2 = Rectangle_create(20,25);

	printf("Using creation,via pointers\n");
	printf("\tbox2 height: %d\n",box2->height);
	printf("\tbox2 width: %d\n",box2->width);
	Rectangle_destroy(box2);


	return 0;
}
