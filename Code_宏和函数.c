#include<stdio.h>
#define MAX(x,y) (x>=y ? x : y)

int main()
{
	int num1 = 0;
	int num2 = 0;
	int ans = 0;
	printf("�����������ԱȽϴ�С>:");
	scanf("%d%d",&num1,&num2);
	ans = MAX(num1,num2);
	printf("%d\n",ans);
	
	return 0;
}
//���� ���������ļӷ�

/*int Add(int x,int y)
{
	int z = x+y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("��������������");
	scanf("%d%d",&num1,&num2);
	sum = Add(num1,num2);
	printf("����֮��Ϊ��%d\n",sum);
	
	return 0;
}

#define Add(x,y) (x+y)
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("��������������");
	scanf("%d%d",&num1,&num2);
	sum = Add(num1,num2);
	printf("����֮��Ϊ��%d\n",sum);
	
	return 0;
}
*/
