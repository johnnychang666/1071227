#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *enter, *extrace;
	char str[100];
	int cnt, a, b;
	a = fopen_s(&enter, "C://Users/kingc/OneDrive/桌面/程式/1071227/P18/in.txt", "r");
	b = fopen_s(&extrace, "C://Users/kingc/OneDrive/桌面/程式/1071227/P18/out.txt", "w");
	while (!feof(enter))
	{
		cnt = fscanf_s(enter, "%s", str, 100);
		if (cnt > 0) fprintf(extrace, "%s\n", str, 100);
	}
	fclose(enter);
	fclose(extrace);
	system("pause");
	return 0;
}