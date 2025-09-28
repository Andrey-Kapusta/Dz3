#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	int a, b;
	setlocale(LC_CTYPE, "RUS");
	printf("¬ведите ваш год рождени€ и год сейчас\n");
	scanf("%d %d", &a, &b);
	printf("_________________\n");
	printf("| %d-%d\t|\n", a, b);
	printf("_________________\n");
	printf("| %d\t\t|\n", b-a);

}