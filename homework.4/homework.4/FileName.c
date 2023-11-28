#define _CRT_SECURE_NO_WARNINGS 1
//1.
#include <stdio.h>
//void buble(int arr[],int n)
//{
//	int i = 0;
//	int a = 0;
//	int j = 1;
// 
//	for (a= 0; a < n - 1; a++)
//	{
//		for (i = 0; i < n - 1;i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//		//打印结果
// 
//		printf("第%d遍排序的结果：",j );
//		for (i = 0; i < n; i++)
//		{
//			if (i < n - 1)
//				printf(" %d", arr[i]);
//			else
//				printf(" %d\n",arr[n-1]);
//		}
//		j++;
//	}	
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你有多少个数需要排序：");
//
//	scanf("%d", &n);
//	int arr[30000] = { 0 };  //VS不支持 int arr[n]={0};
//	printf("输入需要排列的数字（中间用空格隔开)");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	buble(arr, n);
//
//	return 0;
//}
//2.
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[20] = { 0 };
//	printf("Input an integer:");
//	scanf("%d", &n);
//	while ((n / 10) != 0)
//	{
//		arr[i] = n % 10;
//		n = n / 10;
//		i++;
//	}
//	arr[i] = n;
//	int left = 0;
//	int right = i;
//	int Sum = 0;
//	for (i = 0; i < (n / 2 + 1); i++)
//	{	Sum += pow(arr[left], 2) + pow(arr[right], 2);
//	int j = (pow(arr[left], 2) + pow(arr[right], 2));
//		printf("%d*%d+%d*%d=%d", arr[left], arr[left], arr[right], arr[right],j);
//		
//		printf(",Sum=%d\n", Sum);
//		left++;
//		right--;
//	}
//	printf("Summary=%d", Sum);
// return 0;
//}
//3.

int main()
{
	int n = 0;
	int m = 0;
	int arr[10][4] = { 0 };
	printf("input the size of array m*n:");

	scanf("%d*%d", &m, &n);
	printf("\n\n");
	int i = 0;
	int j = 0;
	printf("input the iterms of the array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The input array is:\n");
	for(i=0;i<m;i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//4.
//#include <string.h>
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[50] = { 0 };
//	//input two strings
//	scanf("%s %s", arr1,arr2);
//	int c = strlen(arr1);
//	int b = strlen(arr2);
//	int i = 0;
//	//connect the arrays
//	while (i < b)
//	{
//		arr1[c] = arr2[i];
//		c++;
//		i++;
//	}
//	//output 
//	printf("%s\n",arr1);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int arr[100][3] = { 0 };
//	printf("input row size(number of columns):");
//	scanf("%d", &m);
//	printf("input column size(number of rows):");
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		printf("input the iterms of row%d:",i);
//		
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("The array you input is:\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%-d  ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//    int is = 0;
//	int count = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			int k = 0;
//			is = 1;
//			//check if arr[i][j] is the max in its row
//			for (k = 0; k < n; k++)
//			{
//				if (arr[i][j] < arr[i][k])
//				{
//					is = 0;
//				}
//			}
//			//check if arr[i][j] is the min in its col
//			for (k = 0; k < m; k++)
//			{
//				if (arr[i][j] > arr[k][j])
//				{
//					is = 0;
//				}
//			}
//			if (is)
//			{
//				count++;
//				printf("The saddle point is found! Its position is: arr[%d][%d],and array[%d][%d]=%d\n", i, j, i, j, arr[i][j]);
//			}
//		}
//	}
//		if (!count)
//		{
//			printf("the saddle point does not exist\n");
//		}
//	return 0;
//}

//int main() 
//{
//    int m, n;
//
//    // Input the size of the array
//    printf("Enter the number of rows: ");
//    scanf("%d", &m);
//    printf("Enter the number of columns: ");
//    scanf("%d", &n);
//
//    // Input the 2D array
//    int arr[100][3]; //vs cant //int arr[m][n]
//    printf("Enter the elements of the array:\n");
//    for (int i = 0; i < m; ++i) 
//    {
//        for (int j = 0; j < n; ++j) 
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    // Find the saddle point
//    int i_s_p = 0;
//    for (int i = 0; i < m; ++i) 
//    {
//        for (int j = 0; j < n; ++j) 
//        {
//            int i_s_p = 1;
//
//            // Check if arr[i][j] is maximum in its row
//            for (int k = 0; k < n; ++k) 
//            {
//                if (arr[i][j] < arr[i][k]) 
//                {
//                    i_s_p = 0;
//                    break;
//                }
//            }
//
//            // Check if arr[i][j] is minimum in its column
//            for (int k = 0; k < m; ++k) 
//            {
//                if (arr[i][j] > arr[k][j]) 
//                {
//                    i_s_p = 0;
//                    break;
//                }
//            }
//
//            // If both conditions are satisfied, it's a saddle point
//            if (i_s_p) 
//            {
//                i_s_p = 1;
//                printf("Saddle point found at (%d, %d)\n", i + 1, j + 1);
//            }
//        }
//    }
//
//    // If no saddle point is found
//    if (!i_s_p) 
//    {
//        printf("Saddle point does not exist.\n");
//    }
//    return 0;
//}
//6.
//int main()
//{
//	int m;
//	int n;
//	printf("input the array size:(m*n):\n");
//	scanf("%d*%d", &m, &n);
//	int a[50][50] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("The input array is:\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int count = 0;
//	int c = 0;
//	int d = 0;
//	for (count = 1; count <=5; count++)
//	{
//		int max = a[0][0];
//		for (i = 0; i < m; i++)
//			{
//				for (j = 0; j < n; j++)
//				{
//					if (a[i][j] > max)
//					{
//						max = a[i][j];
//						c = i;
//						d = j;
//					}
//				}
//			}
//		printf("The maximum %dth number:a[%d][%d]=%d\n",count,c,d,max );
//		a[c][d] = 0;
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//
//void findMaxFive(int arr[][4], int m, int n);
//
//int main()
//{
//    int m = 3;  // Set the desired value for m
//    int n = 4;  // Set the desired value for n
//
//    int array[3][4] = 
//    {
//        {10, 8, 5, 3},
//        {15, 20, 25, 12},
//        {7, 18, 22, 30}
//    };
//
//    findMaxFive(array, m, n);
//
//    return 0;
//}
//
//void findMaxFive(int arr[][4], int m, int n) 
//{
//    int maxValues[5] = { 0 };
//    int maxIndices[5][2] = { 0 };
//
//    for (int i = 0; i < m; ++i)
//    {
//        for (int j = 0; j < n; ++j) 
//        {
//            int currentVal = arr[i][j];
//
//            for (int k = 0; k < 5; ++k)
//            {
//                if (currentVal > maxValues[k]) 
//                {
//                    for (int l = 4; l > k; --l) 
//                    {
//                        maxValues[l] = maxValues[l - 1];
//                        maxIndices[l][0] = maxIndices[l - 1][0];
//                        maxIndices[l][1] = maxIndices[l - 1][1];
//                    }
//                    maxValues[k] = currentVal;
//                    maxIndices[k][0] = i;
//                    maxIndices[k][1] = j;
//                    break;
//                }
//            }
//        }
//    }
//
//    printf("Five maximum elements and their positions:\n");
//    for (int i = 0; i < 5; ++i) 
//    {
//        printf("Value: %d, Position: (%d, %d)\n", maxValues[i], maxIndices[i][0], maxIndices[i][1]);
//    }
//}
//int main()
//{
//int m, n, i, j;
//int arr[100][100];
//scanf_s("%d*%d", &m, &n);
//printf("The input array is:\n");
//for (i = 0; i < m; i++) {
//	for (j = 0; j < n; j++) {
//		scanf_s("%d", &arr[i][j]);
//	}
//}
//n = 0;
//int cnt = 0;
//int i1, j1;
//for (n = 0; n < 5; n++) {
//	int max = arr[0][0];
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < m; j++) {
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//				i1 = i;
//				j1 = j;
//			}
//		}
//	}
//	cnt++;
//	printf("The maximum %dth number:a[%d][%d]=%d\n", cnt, i1, j1, arr[i1][j1]);
//	arr[i1][j1] = 0;
//}
//return 0;
