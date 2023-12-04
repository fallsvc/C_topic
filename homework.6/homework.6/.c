#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
//void sort(double* t, int n)
//{
//	int i = 0;
//	int j = 0;
// // order small to big
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (*(t+j) > *(t + 1+j))
//			{
//				double tmp = *(t+j);
//				*(t+j) = *(t + 1+j);
//				*(t + 1+j) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	double arr[50] = { 0 };
//	double* p = arr;
//	int n = 0;
//	printf("How many numbers to sort:\n");
//	scanf("%d", &n);
//	printf("Input the numbers\n");
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", (p+i));
//	}
//	printf("\n");
// //for sorting
//	sort(p,n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}
//2.
//int main()
//{
//	char* arr[13] = {"\0","january","February","March","April","May","June",
//		"July","August","September","October","Novermber","December"};
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 0 && n <= 12)
//	{
//		printf("%s\n", *(arr+n));
//	}
//	return 0;
//}
//3.
//struct student
//{
//	char number[12];
//	char name[20];
//	char gender[10];
//	double scores[4];
//};
//double average(struct student* p)
//{
//	return ((*p).scores[0] + (*p).scores[1] + (*p).scores[2] + (*p).scores[3]) / 4;
//}
//int calcu(struct student* p)
//{
//	int i = 0;
//	double max = 0;
//	int n = 0;
//	for (i = 0; i < 6; i++)
//	{
//		if (average(p + i) > max)
//		{
//			max = average(p+i);
//			n = i;
//		}
//	}
//	return n;
//}
//int main()
//{
//	struct student data[6] = {
//		{"1812464514","zhang","male",{111.0,121.0,120.0,140.0}},
//		{"1421576247","wang","male",{110.0,102.0,140.0,100.0}},
//		{"1240724340","liu","male",{120.0,110.0,103.0,140.0}},
//		{"1247343546","li","female",{99.0,102.0,130.0,100.0}},
//		{"1427783377","chen","male",{88.0,96.0,102.0,140.0}},
//		{"1467335737","zhou","female",{70.0,120.0,130.0,102.0}}
//	}, * p = data;
//
//	int ret=calcu(data);
//	printf(" %s %s %s \n ", 
//		(*(p + ret)).number, 
//		(*(p + ret)).name,
//		(*(p + ret)).gender
//		  );
//	printf("scores:%.1lf %.1lf %.1lf %.1lf\n", 
//		(*(p + ret)).scores[0],
//		(*(p + ret)).scores[1],
//		(*(p + ret)).scores[2], 
//		(*(p + ret)).scores[3]
//	      );
//	return 0;
//}
// ////////////
//3.
//struct student
//{
//	char number[12];
//	char name[20];
//	char gender[10];
//	float scores[4];
//};
//float average(struct student* p,int m)
//{
//	//calculate the average value
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < m; i++)
//	{
//		sum += p->scores[i];
//	}
//	return sum/m;
//}
//int calcu(struct student* p,int m)
//{
//	int i = 0;
//	float max = 0;
//	int n = 0;
//	//determine the digit with the highest average value
//	for (i = 0; i < 6; i++)
//	{
//		if (average(p + i,m) > max)
//		{
//			max = average(p+i,m);
//			n = i;
//		}
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	//input the number of people and scores
//	printf("Input the number of people and scores:");
//	scanf("%d %d", &n,&m);
//	struct student data[50] = {0},* p = data;//p structure pointer
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %s", p->number, p->name, p->gender);
//		int j = 0;
//		//input scores
//		for (j = 0; j < m; j++)
//		{
//			scanf("%f", &(p->scores[j]));
//		}
//	}
//	printf("\n");
//	int ret=calcu(data,m);
//	//output the people with the highest average score
//	printf("%s %s %s  ", 
//		(p + ret)->number, 
//		(p + ret)->name,
//		(p + ret)->gender
//		  );
//	for (i = 0; i < m; i++)
//	{
//		printf("%.1f ", (p + ret)->scores[i]);
//	}
//	printf("\n");
//	return 0;
//}
//4.

//struct cars
//{
//	char name[20];
//	char model[20];
//	char color[20];
//	int price;
//};
//void sort_print(struct cars* p, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n-1 - i; j++)
//		{
//			if (((p+j)->price) > ((p+j+1)->price))
//			{
//				struct cars tmp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//	}
//	//output 
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %s %s %d\n", (p+i)->name, (p+i)->model, (p+i)->color, ((p+i)->price));
//	}
//}
//int main()
//{
//	printf("The number of the cars:");
//	int n = 0;
//	scanf("%d", &n);
//	struct car s[50] = { 0 }, *p = s;
//	int i = 0;
//	//input the data of the cars
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %s %d", (p+i)->name, (p+i)->model, (p+i)->color,&((p+i)->price));
//	}
//	sort_print(p, n);
//	return 0;
//}
// 
//5.
//#include <math.h>
//int main()
//{
//	char arr[100] = { 0 };
//	int a[100] = { 0 };
//
//	gets(arr);
//	char* p = arr;
//	int i = 0;
//	int k = 0;
//	//
//	while ((*(p+i)) != '\0')
//	{	
//		int sum = 0;
//		int j = 0;//j for j-digit number
//		//to find the characters of numbers
//		while((*(p+i))>='0'&&(*(p+i))<='9')
//		{
//			//memory  0
//			if (((*(p + i) - '0' )== 0)&&j==0)
//			{
//				a[k++] = 0;
//				break;
//			}
//			j++;
//			i++;
//		}
//		while (j > 0)
//		{
//			sum += (*(p + i - j)-'0') * pow(10, j-1);
//			j--;
//		}
//		if (sum)
//		{
//			a[k++] = sum;
//		}
//		i++;
//	}
//	printf("The output result is:there are %d integers\n", k);
//	printf("These numbers are:");
//	if (k)
//	{
//		for (i = 0; i < k-1; i++)
//		{
//			printf("a[%d]=%d,", i, a[i]);
//		}
//		//output The last integer
//		printf("a[%d]=%d", i, a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//6.
#include <string.h>
void bubbleSort(int* arr[], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(arr[j], arr[j + 1]) > 0)
			{
				char* tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int num_str = 0;
	
	char arr[100][100] = {0};
	scanf("%d", &num_str);
	getchar();
	int i = 0;
	//input strings
	for (i = 0; i < num_str-1; i++)
	{
		gets(arr[i]);
		getchar();
	}
	// 
	gets(arr[i]);
	//
	char* arr2[100] = { 0 };
	for (i = 0; i < num_str; i++)
	{
		arr2[i] = arr[i];
	}

	bubbleSort(arr2, num_str);

	for (i = 0; i < num_str; i++)
	{
		printf("%s\n", arr2[i]);
	}
	return 0;
}