#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int a,count = 0;
	  a=fopen_s(&fptr,"C://Users/kingc/OneDrive/�ୱ/�{��/1071227/P14/welcome.txt", "r");
	if (a == 0)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else printf("Opening file failed!!\n");
	system("pause");
	return 0;
}