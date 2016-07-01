#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	// first, print them out raw
	printf("name each: %d %d %d %d\n", 
		numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each %c %c %c %c\n",
		name[9], name[1], name[2], name[3]);

	// setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	// setup the name
	name[0] = 'T';
	name[1] = 'e';
	name[2] = 'o';
	name[3] = '\0';


	// Then print them out initialized
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name: %c%c%c%c\n", name[0], name[1], name[2], name[3]);


	// print the name like a string
	printf("name: %s\n", name);

	// another way to use nmae
	char *another = "Carmen";
	
	printf("Another %s\n", another);

	printf("Another each:%c %c %c %c %c %c %c %c", 
		another[0], another[1], another[2], another[3],
		another[4], another[5], another[6], another[7]);

	return 0;


}
