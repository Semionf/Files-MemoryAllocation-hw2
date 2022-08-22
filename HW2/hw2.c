#include <stdio.h>

#pragma warning(disable : 4996)

void printNumOfChars();
void printNumOfAstrix();
void printNumOfLines();
int main()
{
	printNumOfChars();
	printNumOfAstrix();
	printNumOfLines();
}

void printNumOfChars()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\HW2\\HW2_1.txt", "r");
	char ch = 0;
	int counter = 0;
	if (!f)
	{
		printf("File cannot be opened");
		exit(1);
	}
	ch = fgetc(f);
	while (ch != EOF)
	{
		ch = fgetc(f);
		counter++;
	}
	fclose(f);
	printf("This file has %d chars",counter);
}

void printNumOfAstrix()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\HW2\\HW2_1.txt", "r");
	int count = 0;
	char ch = 0;
	if (!f)
	{
		printf("File didn't open!");
		exit(1);
	}
	while (ch != EOF)
	{
		ch = fgetc(f);
		if (ch == '*')
		{
			count++;
		}
	}
	fclose(f);
	printf("The number of astrix is %d", count);
}

void printNumOfLines()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\HW2\\HW2_2.txt", "r");
	char ch = 0;
	int count = 1;
	if (!f)
	{
		printf("File didn't open");
		exit(1);
	}
	while (ch != EOF)
	{
		ch = fgetc(f);
		if (ch == '\n')
		{
			count++;
		}
	}
	fclose(f);
	printf("The File has %d lines",count);
}