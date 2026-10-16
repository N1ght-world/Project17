#include <stdio.h>
#include <locale.h>
#define D 2.54
#define P 2.32166

double x1, x2, y1_val, y2_val;
double d, d1;
int st();

int main()
{
	setlocale(LC_CTYPE, "RUS");
	st3();
	st2();
	st1();
	st();
}
int st1()
{
	int num, num2;
	puts("Vvedite chislo");
	scanf("%d", &num);
	printf("Vivelo %d\n", num);

	puts("Vvedite chislo nomer 2");
	scanf("%d", &num2);
	printf("Vivelo %d\n", num2);

	printf("%d\n", num + num2);
	printf("%d\n", num - num2);
	printf("%d\n", num * num2);
	printf("%d\n", num2 / num);
	return 0;
}

int st2()
{
	int dym, pulg;
	float result,res;
	puts("Vvesti znachenie:");
	scanf("%d", &dym);
	scanf("%d", &pulg);
	result = D * dym;
	res = P * pulg;
	printf("%d dyimov - eto %.1f sm\n", dym, result);
	printf("%d pulgadov - eto %.1f sm\n", pulg, res);
	return 0;
}

int st3()
{
	int a, b;
	puts("Vvedite chislo a\n");
	scanf("%d", &a);
	puts("Vvedite chislo b\n");
	scanf("%d", &b);
	printf("__________________________________\n");
	printf("|%7s   |%7s   |%7s   |\n", "a*b","a+b","a-b");
	printf("__________________________________\n");
	printf("|%5d*%-4d|%5d*%-4d|%5d*%-4d|\n",a,b,a,b,a,b);
	printf("__________________________________\n");
	printf("|%7d   |%7d   |%7d   |\n", a * b, a + b, a - b);
	return 0;
		
}

double x1, x2, y1_val, y2_val;
double d, d1;

int st()
{
	printf("Введите координату x1 первой точки: ");
	scanf("%lf", &x1);
	printf("Введите координату y1 первой точки: ");
	scanf("%lf", &y1_val);

	printf("Введите координату x2 второй точки: ");
	scanf("%lf", &x2);
	printf("Введите координату y2 второй точки: ");
	scanf("%lf", &y2_val);

	d = pow((x2 - x1), 2) + pow((y2_val - y1_val), 2);
	d1 = sqrt(d);

	printf("Расстояние между точками: %.2f\n", d1);
	return 0;
}
