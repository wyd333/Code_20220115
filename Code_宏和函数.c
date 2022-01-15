#include<stdio.h>
#define MAX(x,y) (x>=y ? x : y)

int main()
{
	int num1 = 0;
	int num2 = 0;
	int ans = 0;
	printf("输入两个数以比较大小>:");
	scanf("%d%d",&num1,&num2);
	ans = MAX(num1,num2);
	printf("%d\n",ans);
	
	return 0;
}
//函数 两输入数的加法

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
	printf("请输入两个数：");
	scanf("%d%d",&num1,&num2);
	sum = Add(num1,num2);
	printf("两数之和为：%d\n",sum);
	
	return 0;
}

#define Add(x,y) (x+y)
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个数：");
	scanf("%d%d",&num1,&num2);
	sum = Add(num1,num2);
	printf("两数之和为：%d\n",sum);
	
	return 0;
}
*/
