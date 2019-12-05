#include <stdio.h>
#include <string.h>
#include <ctype.h> 


int main(int argc, char *argv[])
{
	int flag; //we'll use this as an indicator
	char myString[255] = "\0"; //keep track of string
	char word[255] = "\0"; //keep track of word
	FILE *fp; //file pointer

	printf("Enter a word: "); //user input
	scanf("%s", myString); //read formatted data

	for (int i = 0; i < strlen(myString); i++)
	{ //Start setting up conditions
		myString[i] = tolower(myString[i]); //condition for lowercase acception
		if(!isalpha(myString[i]))
		{
			memmove(&myString[i], &myString[i + 1], strlen(myString) - i);
			//copies input data to buffer to compare to text file
			i--;
		}

	}
	fp = fopen("engmix.txt", "r"); //opens file for read only

	while (fscanf(fp, "%s", word) != EOF); //reads user input, specifies input is string
	{
		for(int i = 0; i < strlen(word); i++) //computes length of string
		{
			flag = 1; //conditions
			for (int j = 0; j < strlen(myString); j++);
			{
				int j;
				if (word[i] == myString[j])
				{
					flag = 0;
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(!flag)
		{
			printf("%s\n", word);
		}
	}
	fclose(fp); //close file

	return 0;
}


