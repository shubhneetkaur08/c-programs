#include<stdio.h>
int main()
{
	int arr[50],n,key,i;
	printf("enter number of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter element to search: ");
	scanf("%d", &key);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("element %d found at position %d\n", key,i+1);
			return 0;
		}
	}
	printf("element %d not found  in array\n", key);
	return 0;
	
	
	}
