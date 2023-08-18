#include <stdio.h>
#include <stdlib.h>

void main() {
	int num;
	printf("Insert Number >> ");
	scanf_s("%d", &num);

	char** TwoDimArr = (char**)calloc(num, sizeof(char*));
	for (int i = 0; i < num; i++)
		TwoDimArr[i] = (char*)calloc(num, sizeof(char));

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i + j < (num - 1) / 2 ||
				(num - 1) * 2 - ((num - 1) / 2) < i + j ||
				i - j > (num - 1) / 2 ||
				i - j < -((num - 1) / 2))
				TwoDimArr[i][j] = ' ';
			else
				TwoDimArr[i][j] = '*';
		}
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			printf("%c", TwoDimArr[i][j]);

		free(TwoDimArr[i]);
		printf("\n");
	}
	free(TwoDimArr);
}
