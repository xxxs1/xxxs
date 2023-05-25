#include<stdio.h>
#define N 4//定义矩阵的行
#define M 4//定义矩阵的列
void XuanZuan(int arr[][M])
{
	int i, j;
	int tmp = 0;

	for (i = 0; i < N; i++)
	{
		for (j = i; j < M; j++)
		{
			tmp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = tmp;
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M / 2; j++)
		{
			tmp = arr[i][j];
			arr[i][j] = arr[i][M - j - 1];
			arr[i][M - j - 1] = tmp;
		}
	}
}


void PrintArr(int arr[][M])
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

}

void InitArr(int arr[][M])
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}

}
int main()
{

	
	int arr[N][M];
	InitArr(arr);//初始化数组
	XuanZuan(arr);//旋转数组
	PrintArr(arr);//打印数组

	return 0;
}