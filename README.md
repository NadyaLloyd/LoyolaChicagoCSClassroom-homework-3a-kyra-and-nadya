
The User will enter a word(String) and the program will read each individual letter of the
word and store them into an array. Once each letter is stored in the array, the program will
read from a text file(engmix.txt) containing a list of hundreds of words from the English
dictionary. From this list, the program will output a new list of words all made up of every
letter stored in the array. The main thing we need to make sure does not happen is that the
program prints out words that include all the letters from the input as well as extra letters,
we need the program to ignore all extra letters and only compare the words from the text file
with the letters stored in the array. The program should be able to ignore any special
characters or spaces in the user's input and read lowercase and uppercase letters the same.
The program should print any word that is made up of the same letters stored in the array
from the input, including words that might be shorter than the input.

Make
	gcc -Wall -std=c99 -o myProgram main.c
Clean
	rm myProgram
