#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
	
	/*int ret = 0;
	char password[20] = { 0 };
	printf("���������� :>");
	scanf("%s",password);
	printf("��ȷ��(Y/N):>");
	getchar();
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else if (ret == 'N')
	{
		printf("ȷ��ʧ��");
	}*/

	/*int a = 0;
	int* p = (a = 2);
	printf("%p\n",p);*/
		
	/*1.����N�Ľ׳�*/


	/*while (1)
	{
		int num = 0;
		int sum = 1;
		int i;
		scanf("%d", &num);
		for (i = 1; i <= num; i++)
		{
			sum *= i;
		}
		printf("%d\n", sum);
	}*/

	int j = 1;
	int add = 0;
	while (j<11)
	{
		int num = j;
		int sum = 1;
		int i;
		for (i = 1; i <= num; i++)
		{
			sum *= i;
		}
		add += sum;
		j++;
	}
	printf("%d\n",add);
	return 0;
}