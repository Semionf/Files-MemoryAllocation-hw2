#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

void printNumOfChars();
void printNumOfAstrix();
void printNumOfLines();
void memoryAlloc();
int main()
{
	//printNumOfChars();
	//printNumOfAstrix();
	//printNumOfLines();
	memoryAlloc();
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

void memoryAlloc()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\HW2\\HW2_3.txt", "r");
	char ch = 0;
	int iCount = 0, cCount = 0;
	int* intArr = 0;
	char* chArr = 0;
	int* intPtr;
	char* chPtr;
	int num;
	if (!f)
	{
		printf("Cannot open file");
		exit(1);
	}
	while (ch != EOF)
	{
		num = fgetc(f) - '0';
		ch = fgetc(f);
		if (ch != EOF)
		{
			if (ch == 'c')
			{
				cCount += num;
			}
			else {
				iCount += num;
			}
		}
	}
	intArr = malloc(iCount * sizeof(int));
	intPtr = intArr;
	chArr = malloc(cCount * sizeof(char));
	chPtr = chArr;

	for (int i = 0; i < iCount; i++)
	{
		scanf("%d", intArr);
		intArr++;
	}
	for (int i = 0; i < iCount; i++)
	{
		scanf("%c", chArr);
		chArr++;
	}
	free(chArr);
	free(intArr);
	fclose(f);
}