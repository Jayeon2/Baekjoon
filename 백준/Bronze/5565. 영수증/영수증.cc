#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int price;
	int book1;
	int book2;
	int book3;
	int book4;
	int book5;
	int book6;
	int book7;
	int book8;
	int book9;
	
	scanf("%d", &price);
	scanf("%d", &book1);
	scanf("%d", &book2);
	scanf("%d", &book3);
	scanf("%d", &book4);
	scanf("%d", &book5);
	scanf("%d", &book6);
	scanf("%d", &book7);
	scanf("%d", &book8);
	scanf("%d", &book9);

	printf("%d", price - (book1 + book2 + book3 + book4 + book5 + book6 + book7 + book8 + book9));

	return 0;
	
}