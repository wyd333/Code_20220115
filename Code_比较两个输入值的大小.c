#include<stdio.h>
//�Ƚ���������С�ĺ���

//�ⷨһ����if else
int Max(int x,int y)
{
	if(x>=y){
		
		return x;
	}else {
		return y;
	}
}
//int����һ��Ҫ�з���ֵreturn
int main()
{
	int num1 = 0;
	int num2 = 0;
	int ans = 0;
	printf("�����������ԱȽϴ�С>:");
	scanf("%d%d",&num1,&num2);
	ans = Max(num1,num2);
	printf("%d\n",ans);
	
	return 0;
}

//�ⷨ����������������
/*int Max(int x,int y)
{
	int ans = (x>=y ? x : y);
	return ans;
}
////////////////////
int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	printf("�������������ԱȽϴ�С>:");
	scanf("%d%d",&num1,&num2);
	max = Max(num1,num2);
	printf("max=%d\n",max);
	
	return 0;
}*/


//�ⷨ�����ú�������
/*#define MAX(x,y) (x>=y ? x : y)

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
}*/
