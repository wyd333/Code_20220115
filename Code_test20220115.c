#include<stdio.h>

/*int main()   //比较两个数的较大值
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	
	if(a>=b)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",b);
	}
	
	
	return 0;
}*/

//比较两个数大小的函数
/*int Max(int x,int y)
{
	if(x>=y){

		return x;
	}else {
		return y;
	}
}

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
}*/

//sizeof的简单应用
/*int main()
{
	int a = 3;
	int arr[] = {1,2,3,4,5};
	printf("%d\n",sizeof a);
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(arr));
	int m = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",m);
	
	return 0;
}*/

/*int main()
{
	int a = 0;//32bit
	// 00000000 00000000 00000000 00000000
	// 11111111 11111111 11111111 11111111
	//原码 补码 反码
	//负数在内存重存储的时候，存储的是二进制补码
	int b = ~a;
	printf("%d\n",b);// 输出为 -1
	//使用的、打印的是这个数的原码
	//求一个数本身的补码：符号位不变，按位取反再加一
	return 0;
}*/

//使用一下前置后置符++ --
//前置后置符是单目操作符
/*int main()
{
	int a = 0;
	int b = 0;
	printf("输入一个数>:");
	scanf("%d",&a);
	//b = ++a;先++再用值
	//b = a++;//输入10，输出11 10，先用值再++，先把10赋值给b，a再+1变成11
	//b = --a;先--再用值，输入10，a先-1变成9，再把9赋值给b，输出9 9
	//b = a--;先用值：a输入10，把10赋值给b；再--：a-1变成9，输出9 10
	printf("%d %d",a,b);
	
	
	return 0;
}*/

//强制类型转换符
//int main()
//{
//	int a =(int)3.14;//double 变成 int 
//	//int a = 3.14;整型和浮点型不匹配，使用一个（）强制转换浮点型为整型
//	return 0;
// }

//逻辑与&&和逻辑或||
/*int main()
{
	int a = 3;
	int b = 5;
	int c = a&&b;
	int d = a&b;
	int e = a||b;
	int f = a|b;
	
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	printf("e=%d\n",e);
	printf("f=%d\n",f);
	
	return 0;
}*/


/*void test()
{
	static int a = 1;
	a++;
	printf("%d\n",a);
	
	
}

int main()
{
	int i = 0;
	while(i<5)
	{
		test();
		i++;
	}
	//不加static 输出结果是5个2 
	//加static 输出结果是2 3 4 5 6 
	return 0;
}*/

//用#define 来定义宏
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
}*/

/*#define Add(x,y) (x+y)
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
}*/

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

//指针变量
//int main()
//{
//	int num = 10;
//	&num;
//	printf("%p\n",&num );
	
//	return 0;
//}
/*int sum(int a)//a是传入的
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	
	return(a+b+c);
}

int main()
{
	int i;
	int a = 2;
	for(int i=0;i<5;i++){
		printf("%d ",sum(a));
	}
	
	return 0;
}*/
int main()
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*));
	return 0;
}
