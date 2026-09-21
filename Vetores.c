#include <stdio.h>

int main()
{
	int n[5]={3,2,-1,0,4};

	printf("%p\n", n);

	for(int i=0;i<5;i++)
	{
		printf("n[%d]=%d e &n[%d]=%p\n",i,*(n+i),i,n+i);
	}

}