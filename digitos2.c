#include <stdio.h>

/*int numDig(int num)
{
	int count=0;	

	while(num>0)
	{
		num=num/10;
		++count;
	}
	return count;
}*/

int numDig(int num)
{
	if(num==0)
	{
		return 0;
	}else
	{
		return 1 + numDig(num/10);
	}
}


int main()
{
	int num;

	printf("Entre com um número: ");
	scanf("%d", &num);

	printf("O número de dígitos é: %d", numDig(num));

}
