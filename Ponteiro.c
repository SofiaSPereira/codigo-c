#include <stdio.h>

void troca(long *x, long *y)
{

	long aux;
		
	aux = *x;
	*x = *y;
	*y = aux;

	printf("Dentro da função:\n");
	printf("x=%ld, &x=%p\n", *x,x);
	printf("y=%ld, &y=%p\n", *y,y);

}


int main()
{
	long x,y;
	long *p1, *p2;
	
	p1 = &x;
	p2 = &y;

	x= 10;
	y=15;

	
	printf("Antes da função:\n");
	printf("x=%ld, &x=%p, p1=%p, &p1=%p\n", x,&x,p1,&p1);
	printf("y=%ld, &y=%p, p2=%p, &p2=%p\n", y,&y,p2,&p2);

	troca(&x,&y);

	printf("Depois da função:\n");
	printf("x=%ld, &x=%p, p1=%p, &p1=%p\n", x,&x,p1,&p1);
	printf("y=%ld, &y=%p, p2=%p, &p2=%p\n", y,&y,p2,&p2);

}