#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f4(char *usrn, int len);
int f5(char *usrn, int len);
int f6(char *usrn);

void generate_key(char *keygen, char *usrn);

/**
 * main - Entry point
 *
 * The main function of the key generator program.
 *
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	generate_key(keygen, argv[1]);

	printf("%s\n", keygen);

	return (0);
}

/**
 * f4 - Finds the biggest number.
 *
 * This function calculates the biggest number in the given username.
 *
 * @usrn: Username.
 * @len: Length of username.
 * Return: The biggest number.
 */

int f4(char *usrn, int len)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - Multiplies each char of username.
 *
 * This function multiplies each character of the given username.
 *
 * @usrn: Username.
 * @len: Length of username.
 * Return: Multiplied char.
 */

int f5(char *usrn, int len)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - Generates a random char.
 *
 * This function generates a random character based on the given username.
 *
 * @usrn: Username.
 * Return: A random char.
 */
int f6(char *usrn)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *usrn)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}


/**
 * generate_key - Generates a key based on the given username.
 *
 * This function generates a key based on the given username.
 *
 * @keygen: The generated key.
 * @usrn: The username.
 */
void generate_key(char *keygen, char *usrn)
{
	int len = strlen(usrn);
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	int tmp = 0;
	int i;

	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	for (i = 0; usrn[i]; i++)
	{
		tmp += usrn[i];
	}
	keygen[1] = ((char *)alph)[(tmp ^ 79) & 63];
	/* ----------- f3 ----------- */
	tmp = 1;
	for (i = 0; usrn[i]; i++)
	{
		tmp *= usrn[i];
	}
	keygen[2] = ((char *)alph)[(tmp ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(usrn, len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(usrn, len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(usrn)];
	keygen[6] = '\0';
}
