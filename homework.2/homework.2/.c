#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�±�          0 1 2 3 4 5 6 7 8 9
//	//[]�±����ò�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d\n", arr[i]);
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	int arr[11] = { 0 };
//	printf("����10�����Ƚϣ�");
//	for ( i = 1; i <= 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j, k;
//	for (i = 1; i < 10; i++)
//	{
//		k = i;
//		int x;
//		for(j=i+1;j<=10;j++)
//			if (arr[j] < arr[k])k = j;
//			if (k != i)
//			{
//				x = arr[k]; arr[k] = arr[i]; arr[i] = x;
//			}
//		
//	}
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}