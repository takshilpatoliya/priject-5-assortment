#include<stdio.h>
/*


Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6


Output:
The largest element is: 9

*/
main()
{
	int r, c;
	
	printf("Enter the size of row = ");
	scanf("%d",&r);
	printf("Enter the size of column = ");
	scanf("%d",&c);
	
	int i, j, array[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	
	
	int z;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(array[i][j]>z)
			{
				z = array[i][j];
			}
		}
	}
	
	printf("The largest element is = %d",z);
	
}