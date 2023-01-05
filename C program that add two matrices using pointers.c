//C program that add two matrices using pointers
#include<stdio.h>
#define rsize 2
#define csize 2
void addMatrices(int arr1, int arr2, int arr);
int main()
{
	int arr1[rsize][csize];
	int arr2[rsize][csize];
	int arr[rsize][csize];
	
	printf(" _______________________________________________\n");
	printf("\n C program that add two matrices using pointers\n");
	printf(" _______________________________________________\n");
	
	addMatrices(arr1, arr2, arr);
}

//function addMtrices
void addMatrices(int arr1, int arr2, int arr)
{
	int (*ptr1)[csize] = arr1;
	int (*ptr2)[csize] = arr2;
	int (*ptr)[csize] =  arr;
	
	//INPUT ARRAY1
	for(int i = 0; i < csize; i++)
	{
		for(int j = 0;j < csize; j++)
		{
		   printf("\n Enter the %d%d element of ARRAY1: ",i, j);
		   scanf("%d", *(ptr1+i)+j);
     	}
	}
	
	//INPUT ARRAY2
	printf("\n __________________________________\n\n");
	
	for(int i=0;i<csize;i++)
	{
		for(int j = 0; j < csize; j++)
		{
		   printf("\n Enter the %d%d element of ARRAY2: ",i, j);
		   scanf("%d", *(ptr2+i)+j);
     	}
	}
	
	//RESULTANT MATRIX
	printf("\n ___________________________________\n\n");
	printf(" Resultant Matrix:\n\n");
	
	for(int i = 0; i < csize; i++)
	{
		for(int j = 0; j < csize; j++)
		{
		   ptr[i][j] = ptr1[i][j] + ptr2[i][j];
		   printf(" %d  ", *(*(ptr+i)+j));
     	}
     	printf("\n");
    }
}