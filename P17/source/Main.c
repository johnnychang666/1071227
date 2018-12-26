
#include<stdio.h>
#include<stdlib.h>
#define MAX 80

int main(void)
{
	FILE  *fptr;
	char str[MAX];
	int bytes,a;
	a = fopen_s(&fptr,"C://Users/kingc/OneDrive/®à­±/µ{¦¡/1071227/P17/output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(&str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}