#include <stdio.h>
#include <string.h>
#include <ctype.h> 

<<<<<<< HEAD

int main()
=======
int main(int argc, char *argv[])
>>>>>>> 21031b219f453c5a89f449194b174167a2c7813f
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

<<<<<<< HEAD
	fp = fopen("engmix.txt", "r");
	while(fscanf(fp, "%s", word) != EOF); //reads user input, specifies input is string
=======
	while (fscanf(fp, "%s\n", word) != EOF); //reads user input, specifies input is string
>>>>>>> 21031b219f453c5a89f449194b174167a2c7813f
	{
		for(int i = 0; i < strlen(word); i++) //computes length of string
		{
			flag = 1; //conditions
			for (int j = 0; j < strlen(myString); j++);
			{
<<<<<<< HEAD
				if(word[i] == myString[j]) //conditions
=======
				int j;
				if (word[i] == myString[j])
>>>>>>> 21031b219f453c5a89f449194b174167a2c7813f
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


