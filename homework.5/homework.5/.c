#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
//int i = 0;
//int j = 0;
//int is_s_p(int arr[][50], int m, int n)
//{
//	
//	int count = 0;
//	for (; i < m; i++)
//	{
//		for (; j < n; j++)
//		{
//			//row max
//			int is = 0;
//			int k = 0;
//			for (k = 0; k < n; k++)
//			{
//				if (arr[i][j] < arr[i][k])
//				{
//					is = 1;
//				}
//			}
//			//col min
//			for (k = 0; k < m; k++)
//			{
//				if (arr[i][j] > arr[k][j])
//				{
//					is = 1;
//				}
//			}
//			// is asaddle return 1
//			if (!is)
//			{
//				return 1;
//			}
//		}
//		if (j == n)
//			j = 0;
//	}
//	return 0;
//}
//int main()
//{
//	//vs can't  int arr[m][n]={0};
//	int arr[50][50] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < m; a++)
//	{
//		for (b = 0; b < n; b++)
//		{
//			scanf("%d", &arr[a][b]);
//		}
//	}
//	int count = 0;
//	while (i < m)
//	{
//		//return 1 is true  a saddle
//		if (is_s_p(arr, m, n))
//		{
//			count++;
//			printf("A saddle point is arr[%d][%d]=%d\n", i, j, arr[i][j]);			
//		}
//		if (j < n - 1)
//			j++;
//		else
//			i++;
//	}
//	//if not print a saddle
//	if (!count)
//	{
//		printf("The saddle point is not exist\n");
//	}
//	return 0;
//}
//2.
//#include <string.h>
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[50] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

// 3.
//#define ROW 5
//#define COL 5
//void construct_matrix(int a[ROW][COL], int b[ROW][COL], int c[ROW][COL], int e[ROW][COL])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			//diagonal element
//			if ((i == j) || (i + j == ROW - 1))
//			{
//				int max = a[i][j];
//				if (max < b[i][j])
//					max = b[i][j];
//				if (max < c[i][j])
//					max = c[i][j];
//				e[i][j] = max;
//			}
//			//other
//			else
//			{
//				e[i][j] = (a[i][j] + b[i][j] + c[i][j]) / 3;
//			}
//		}
//	}
//}
//void print_out(int e[ROW][COL])
//{
//	int i = 0;
//	int j = 0; 
//	printf("Output the e matrix\n");
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			printf("%d ", e[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a[ROW][COL] = { 0 };
//	int b[ROW][COL] = { 0 };
//	int c[ROW][COL] = { 0 };
//	int e[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0;
//	//input 
//	printf("Input a array elements:\n");
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("Input b array elements:\n");
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	printf("Input c array elements:\n");
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			scanf("%d", &c[i][j]);
//		}
//	}
//	construct_matrix(a, b, c, e);
//	print_out(e);
//	return 0;
//}
//4.
//int is_leap_y(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int days(int y, int m, int d,int arr[])
//{
//	int i = 0;
//	int sum = d-1;
//	for (i = 1; i < m; i++)
//	{
//		sum += arr[i];
//	}
//	if (is_leap_y(y))
//	{
//		sum++;
//	}
//	return sum;
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	// days
//	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	printf("Input the year,month and days e(2023 11 10):");
//	scanf("%d %d %d", &y, &m, &d);
//	//calculate
//	int sum=days(y, m, d,arr);
//	printf("have passed %d days(except today)\n",sum);
//	return 0;
//}
//5.
//void extract(int i, int n, char arr[])
//{
//	// Put characters into the array in reverse order
//	arr[i - 1] = (n % 10) + '0';
//	if((i-2) >= 0)
//		arr[i - 2] = '-';
//	i = i - 2;
//	if (n > 9)
//	{
//		n = n / 10;
//		extract(i,n, arr);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int c = 0;
//	char arr[50] = { 0 };
//	scanf("%d", &n);
//	
//	//calculate i Number of characters
//	if (n < 0)
//	{
//		n = -n;
//	}
//	else
//	{
//		i -= 1;
//	}
//	c = n;
//	while ((c % 10) != 0)
//	{
//		i += 2;
//		c = c / 10;
//	}
//	extract(i, n, arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//6.
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret =Fib(n);
//	printf("The %dth Fibonacci number is : %d", n,ret);
//	return 0;
//}
//7.
//(1)
//int sum = 0;
//int i = 0;
//void pow_s(int n, int arr[])
//{
//	if (n % 10 != 0)
//	{
//		int num = n % 10;
//		arr[i] = n % 10;
//		i++;
//		sum += num * num;
//		pow_s(n / 10, arr);
//	}
//}
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	printf("Input an integer :");
//	scanf("%d", &n);
//	pow_s(n, arr);
//	printf("The output result is: ");
//	while (i > 0)
//	{
//		i--;
//		printf("%d*%d", arr[i], arr[i]);
//		if (i != 0)
//			printf("+");
//
//	}
//	printf("=%d\n", sum);
//	return 0;
//}
//(2)
//int pow_s(int n,int*p)
//{
//	static int sum = 0;
//	if (n % 10)
//	{
//		int num = n % 10;
//		*(p++) = num;
//		sum += num * num;
//		pow_s(n/10, p);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	printf("Input an integer:");
//	scanf("%d", &n);
//	int sum=pow_s(n,arr);
//	int i = 0;
//	//calculate number of digits
//	while (n % 10)
//	{
//		i++;
//		n /= 10;
//	}
//	i--;
//	//print
//	while (i > 0)
//	{
//		printf("%d*%d+", arr[i], arr[i]);
//		i--;
//	}
//	printf("%d*%d=%d",arr[i],arr[i],sum);
//	return 0;
//}
//8.
int c1 = 0;
int c2 = 0;
//find the maximum in order
void find(int tmp[5][5])
{
	int i = 0;
	int j = 0;
	int max = tmp[0][0];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (tmp[i][j] > max)
			{
				max = tmp[i][j];
				c1 = i;
				c2 = j;
			}
		}
	}
	static int n = 1;
	printf("The maximum %dth number:arr[%d][%d]=%d\n", n++, c1, c2, max);
	tmp[c1][c2] = 0;
}
void find_big(int arr[5][5])
{ 
	int tmp[5][5] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			tmp[i][j] = arr[i][j];
		}
	}
	int tm = 0;
	//exchange  
	find(tmp);
	tm = arr[2][2];
	arr[2][2] = arr[c1][c2];
	arr[c1][c2] = tm;

	tm = tmp[2][2];
	tmp[2][2] = tmp[c1][c2];
	tmp[c1][c2] = tm;

	find(tmp);
	tm = arr[0][0];
	arr[0][0] = arr[c1][c2];
	arr[c1][c2] = tm;

	tm =tmp[0][0];
	tmp[0][0] = tmp[c1][c2];
	tmp[c1][c2] = tm;

	find(tmp);
	tm = arr[0][4];
	arr[0][4] = arr[c1][c2];
	arr[c1][c2] = tm;

	tm = tmp[0][4];
	tmp[0][4] = tmp[c1][c2];
	tmp[c1][c2] = tm;
	find(tmp);
	tm = arr[4][0];
	arr[4][0] = arr[c1][c2];
	arr[c1][c2] = tm;

	tm = tmp[4][0];
	tmp[4][0] = tmp[c1][c2];
	tmp[c1][c2] = tm;
	find(tmp);
	tm = arr[4][4];
	arr[4][4] = arr[c1][c2];
	arr[c1][c2] = tm;

	tm = tmp[4][4];
	tmp[4][4] = tmp[c1][c2];
	tmp[c1][c2] = tm;
}

void print(int arr[5][5])
{
	int i = 0;
	int j = 0;
	printf("The input array is: \n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[5][5] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//before
	print(arr);

	find_big(arr);
	//after
	print(arr);
	return 0;
}