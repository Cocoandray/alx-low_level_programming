#include<stdio.h>

/**
*main - program that prints the alphavet in lower case,followed by a new line
*Descriptiob: using the main function
*You can only use the putchar
*Return: 0
*/

int main(void)
{
	char ch;
	for (ch ='a'; ch <='z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
