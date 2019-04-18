#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	char name[999];
	int age;
	char bday[999];
	char height[999];
	char weight[999];
}ako;


int main(int argc, char *argv[]) {

	printf("Enter Name: ");
	gets(ako.name);
	printf("Enter Birthday: ");
	gets(ako.bday);
	printf("Enter Height: ");
	gets(ako.height);
	printf("Enter Weight: ");
	gets(ako.weight);
	printf("Enter Age: ");
	scanf("%d", &ako.age);
	
	
	printf("\nMy Personal Information is: \n");
	
	printf("My Name is: %s\n", ako.name);
	printf("Age: %d\n",ako.age);		
	printf("Birthday: %s\n", ako.bday);
	printf("Height: %s\n", ako.height);
	printf("Weight: %s\n", ako.weight);
	
	return 0;
}


