#include<stdio.h>
//比较两个数大小的函数

//解法一：用if else
int Max(int x,int y)
{
	if(x>=y){
		
		return x;
	}else {
		return y;
	}
}
//int函数一定要有返回值return
int main()
{
	int num1 = 0;
	int num2 = 0;
	int ans = 0;
	printf("输入两个数以比较大小>:");
	scanf("%d%d",&num1,&num2);
	ans = Max(num1,num2);
	printf("%d\n",ans);
	
	return 0;
}

//解法二：用条件操作符
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
	printf("请输入两个数以比较大小>:");
	scanf("%d%d",&num1,&num2);
	max = Max(num1,num2);
	printf("max=%d\n",max);
	
	return 0;
}*/


//解法三，用宏来定义
/*#define MAX(x,y) (x>=y ? x : y)

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
}*/
