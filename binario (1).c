#include <stdio.h>

/*void bin(int n)
{
	while(n>0)
	{
		printf("%d ", n%2);
		n = n/2;
	}
}*/

void bin(int n)
{
	if(n==0)
	{
		return;	
	}

	bin(n/2);
	printf("%d ",n%2);
}

int main()
{
	int num;

	printf("Digite o número: ");
	scanf("%d", &num);

	printf("%d em binário é: ", num);
	bin(num);

}