#include<stdio.h>
#include <math.h>
#include <stdlib.h>

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void perm(int list[],int k,int m)
{
	if(k == m)
	{
		for ( int i = 0; i<=m;i++ )
			printf("%d ",list[i]);
		printf("\n");

	}
	else
		for( int i = k; i<=m;i++ )
		{
			swap(list[k],list[i]);
			perm(list,k+1,m);
			swap(list[k],list[i]);
		}
}

int main()
{
	int num,count=0;
	int a[3] = {1,2,3};
	perm(a,0,2);



	system("pause");
	return 0;
}