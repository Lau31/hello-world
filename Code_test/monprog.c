#include <stdio.h>

void AfficheMessage(char *message)
{
	puts(message);
}

int main()
{
	float x;
	int a;
	char s[50];

	printf("Saisissez un entier et un réel : ");
	scanf("%d %f", &a, &x);
	sprintf(s, "Vous avez tapé : a = %d x = %f", a, x);
	AfficheMessage(s);
	return 0;
}