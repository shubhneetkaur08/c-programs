#include<stdio.h>
int main ()
{
	int arr[5]={ 10 , 7 , 16 , 18 , 8 };
	int n=5;
	int i,j,temp;
	printf("\n original array:\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (arr[i]>arr[j+1])
			{
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
			}
		}
    printf("\n sorted array (bubble sort):	\n");
			for(i=0;i<n;i++)
			printf("%d", arr[i]);
			return 0;
				
}

