#include<cstdio>
int main()
{
	int a = 10;
	float b = 10.2;
	char c = 'A';
	double d = 101.111;
	char s[20];
	printf("\n%c \n%d \n%f \n%lf \n%s \n", c, a, b, d, "Vismaya");
	scanf("%c%d%f%lf%s",&c,&a,&b,&d,s);
	//fflush(stdin);
	scanf(" ");
	printf("\n %c \n%d \n%f \n%lf \n%s \n", c, a, b, d, s);
	return 0;
}