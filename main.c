#include <stdio.h>

int main()
{
	int flag; //we'll use this as an indicator
	char myString[] = " "; //keep track of string
	char word[] = " "; //keep track of word
	FILE *fp; //file pointer

	printf("Enter a string: "); //user input
	scanf("%s", myString); //read formatted data

	for (int i = 0; i < strlen(myString); i++)
	{ //Start setting up conditions
		myString[i] = tolower(myString[i]);
		if(!isalpha(myString[i]))
		{
			memmove(&myString[i], &myString[i + 1], strlen(myString) - i);
			i--;
		}
	}
}

