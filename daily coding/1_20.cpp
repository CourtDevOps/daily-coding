#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
//Find the sum of 1!+2!+3!+4!+...10!
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (n = 0; n <= 10; n++)
	{
		//find  the factorial of n
		ret = 1;//ÿ����һ���׳˶�Ҫʹret��Ϊ1��������for������
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}

	printf("%d", sum);
	return 0;
}

//�Ľ����׳˲��ô�ͷ��ʼ�㣬����3!������3*2!
int main()
{
	int ret = 1;
	int i = 1;
	int sum = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}


//print the expression of finding the factorial of n
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 1;

    printf("%d! = ", n);
    for (i = n; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf("*");
        }
    }
        
	return 0;
}
*/
int main()
{
	int i = 0;
	int arr[10] = {0};//��СΪ9
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;//Խ�磬�Ƿ������ڴ�
		printf("hehe\n");
	}
	return 0;
}

