#include<stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		//优化optimization
		int m = 1;//假设有序，不会进行以下程序，最终m=0不执行
		for (j = 0; j < sz - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				m = 0;
			}
		}
		if (m == 1)//m=0不执行直接跳出循环，减少计算量
			break;
	}
}
int main()
{
	//冒泡处理法
	int a = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	const int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr);这种情况我们只是传递了arr数组中第一个元素地址
	bubble_sort(arr, sz);//所以要把sz求好再加入
	while (a < sz)
	{
		printf("%d  ", arr[a]);
		a++;
	};
	return 0;
}