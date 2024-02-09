#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 100
/**
 * *get_password - function to get the password of the file crackme
 * @char *get_password(void) - function to convert the password into a string
 * Return: password
 */

char *get_password(void)
{
	FILE *inputFile;
	static char password[MAX_PASSWORD_LENGTH];
	char *newline;

	inputFile = fopen("crackme3", "r");
	if (inputFile == NULL)
	{
		perror("Error opening input file");
		exit(1);
	}

	if (fgets(password, MAX_PASSWORD_LENGTH, inputFile) == NULL)
	{
		perror("Error reading password from input file");
		fclose(inputFile);
		exit(1);
	}
	fclose(inputFile);

	newline = strchr(password, '\n');
	if (newline != NULL)
	{
		*newline = '\0';
	}
	return (password);
}

/**
 * *get_password - function to get the password of the file crackme
 * @main main- no input needed from the user
 * @char *get_password(void) - function to convert the password into a string
 * Return: password
 */

int main(void)
{
	char *password = get_password();
	FILE *outputFile;
	FILE *inputFile;
	char buffer[MAX_PASSWORD_LENGTH];

	outputFile = fopen("101-password", "w");
	if (outputFile == NULL)
	{
		perror("Error opening output file");
		return (1);
	}
	fprintf(outputFile, "%s", password);
	fclose(outputFile);

	inputFile = fopen("101-password", "r");
	if (inputFile == NULL)
	{
		perror("Error opening password file");
		return (1);
	}

	while (fgets(buffer, MAX_PASSWORD_LENGTH, inputFile) != NULL)
	{
		fputs(buffer, stdout);
	}

	fclose(inputFile);

	return (0);
}
