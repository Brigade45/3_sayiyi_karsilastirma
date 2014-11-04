#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c, x,y;
	printf("3 sayi giriniz:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (b > a) // b>a
	{
			if (b > c) // b>c , b>a
			{
				x = b;
				if (a > c) // b>a>c
				{
					y = c;
				}
				else // b>c>a
				{
					y = a;
				}
			}
			else
			{
				x = c;
				y = a;
			}
	}
			else if (a > c) // a>c , a>b
	{
				x = a;
				if (b > c) // a>b>c
			{
				y = c;
			}
				else
			{
				y = b;
			}
	}
			else // b<a , a<c
	{
				x = c;
				y = b;
	}
	printf("buyuk sayi %d dir \n", x);
	printf("kucuk sayi %d dir \n", y);
	_getch();
}
