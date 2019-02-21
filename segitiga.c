#include<stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{

	float x, y, z;
	float a, b, c;


	printf("Masukkan panjang sisi sisi segitiga: "); scanf("%f %f %f", &x, &y, &z);


    x=roundf(100*x)/100;
    y=roundf(100*y)/100;
    z=roundf(100*z)/100;

	if (x >= y && x >= z)
	{
		a = x;
		b = y;
		c = z;
	} else if (y >= x && y >= z)
	{
		a = y;
		b = x;
		c = z;
	} else
	{
		a = z;
		b = x;
		c = y;
	}


	if (a*a == (b*b + c*c))
	{
		printf("Segitiga siku-siku.\n");
	} else if (a*a > (b*b + c*c))
	{
		printf("Segitiga tumpul.\n");
	} else if(a<=0||b<=0||c<=0){
        printf("tidak jadi segitiga");
	} else if(a==b&&b==c)
	{
        printf("segitiga sama sisi");
	} else if(a!=b&&a!=c&&b!=c)
	{
        printf("segitiga bebas");
    } else if(a==b&&a!=c)
    {
        printf("segita sama kaki");
    } else if(a==c&&a!=b)
    {
        printf("segita sama kaki");
    } else if(c==b&&a!=c)
    {
        printf("segita sama kaki");
    } else {
		printf("Segitiga lancip.\n");
	}

	return 0;
}
