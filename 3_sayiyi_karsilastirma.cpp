#include<stdio.h>
#include<conio.h>
int sayi_sirala();
int main()
{
	sayi_sirala();
	_getch();
	return 0;
}

int sayi_sirala()
{
	int a, b, c, x, y, z;
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
				z = a;
			}
			else // b>c>a
			{
				y = a;
				z = c;
			}
		}
		else
		{
			z = b;
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
			z = b;
		}
		else
		{
			y = b;
			z = c;
		}
	}
	else // b<a , a<c
	{
		z = a;
		x = c;
		y = b;
	}
	printf("buyuk sayi %d dir. \n", x);
	printf("ortanca sayi %d dir. \n", z);
	printf("kucuk sayi %d dir. \n", y);
	return 0;
}
