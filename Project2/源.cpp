#include<stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		//�Ż�optimization
		int m = 1;//�������򣬲���������³�������m=0��ִ��
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
		if (m == 1)//m=0��ִ��ֱ������ѭ�������ټ�����
			break;
	}
}
int main()
{
	//ð�ݴ���
	int a = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	const int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr);�����������ֻ�Ǵ�����arr�����е�һ��Ԫ�ص�ַ
	bubble_sort(arr, sz);//����Ҫ��sz����ټ���
	while (a < sz)
	{
		printf("%d  ", arr[a]);
		a++;
	};
	return 0;
}