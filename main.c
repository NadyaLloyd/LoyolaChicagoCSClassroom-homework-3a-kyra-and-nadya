#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int flag; //we'll use this as an indicator
	char myString[255] = "\0"; //keep track of string
	char word[255] = "\0"; //keep track of word
	FILE *fp; //file pointer

	printf("Enter a string: "); //user input
	scanf("%s", myString); //read formatted data

	for (int i = 0; i < strlen(myString); i++)
	{ //Start setting up conditions
		myString[i] = tolower(myString[i]); //condition for lowercase acception
		if(!isalpha(myString[i]))
		{
			memmove(&myString[i], &myString[i + 1], strlen(myString) - i);
			i--;
		}

	}
	fclose(fp);
	return 0;
}


