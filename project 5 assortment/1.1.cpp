
#include<stdio.h>
/*

Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5


Output:
Negative elements from an Array: -4, -3, -5


*/
main()
{
	int n;
	
	printf("Enter the array's size = ");
	scanf("%d",&n);
	
	int array[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&array[i]);
	}
		printf("Negative elements from a Array is = ");
	
	for(i=0;i<n;i++)
	{
		if(0>array[i])
		{
			printf("%d, ",array[i]);
		}
		
	}
}
