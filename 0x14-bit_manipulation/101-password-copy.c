#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 100
/*
 * main - Entry point of the program
 * The program is used to brute force the password of a file named crackme3
 * @void: no input
 * Return: 0 upon succesfull execution
 */

int main(void)
{
	FILE *inputFile;
	char password[MAX_PASSWORD_LENGTH];
	char *newline;
	FILE *outputFile;

	inputFile = fopen("crackme3", "r");
	if (inputFile == NULL)
	{
		perror("Error opening input file");
		return (1);
	}

	if (fgets(password, MAX_PASSWORD_LENGTH, inputFile) == NULL)
	{
		perror("Error reading password from input file");
		fclose(inputFile);
		return (1);
	}
	fclose(inputFile);

	newline = strchr(password, '\n');
	if (newline != NULL)
	{
		*newline = '\0';
	}

	outputFile = fopen("101-password", "w");
	if (outputFile == NULL)
	{
		perror("Error opening output file");
		return (1);
	}
	fprintf(outputFile, "%s", password);
	fclose(outputFile);

	printf("The password is: %s\n", password);
	return (password);
}

