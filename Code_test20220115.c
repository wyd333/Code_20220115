#include<stdio.h>

/*int main()   //�Ƚ��������Ľϴ�ֵ
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

//�Ƚ���������С�ĺ���
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
	printf("�����������ԱȽϴ�С>:");
	scanf("%d%d",&num1,&num2);
	ans = Max(num1,num2);
	printf("%d\n",ans);
	
	return 0;
}*/

//sizeof�ļ�Ӧ��
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
	//ԭ�� ���� ����
	//�������ڴ��ش洢��ʱ�򣬴洢���Ƕ����Ʋ���
	int b = ~a;
	printf("%d\n",b);// ���Ϊ -1
	//ʹ�õġ���ӡ�����������ԭ��
	//��һ��������Ĳ��룺����λ���䣬��λȡ���ټ�һ
	return 0;
}*/

//ʹ��һ��ǰ�ú��÷�++ --
//ǰ�ú��÷��ǵ�Ŀ������
/*int main()
{
	int a = 0;
	int b = 0;
	printf("����һ����>:");
	scanf("%d",&a);
	//b = ++a;��++����ֵ
	//b = a++;//����10�����11 10������ֵ��++���Ȱ�10��ֵ��b��a��+1���11
	//b = --a;��--����ֵ������10��a��-1���9���ٰ�9��ֵ��b�����9 9
	//b = a--;����ֵ��a����10����10��ֵ��b����--��a-1���9�����9 10
	printf("%d %d",a,b);
	
	
	return 0;
}*/

//ǿ������ת����
//int main()
//{
//	int a =(int)3.14;//double ��� int 
//	//int a = 3.14;���ͺ͸����Ͳ�ƥ�䣬ʹ��һ������ǿ��ת��������Ϊ����
//	return 0;
// }

//�߼���&&���߼���||
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
	//����static ��������5��2 
	//��static ��������2 3 4 5 6 
	return 0;
}*/

//��#define �������
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
}*/

/*#define Add(x,y) (x+y)
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
}*/

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

//ָ�����
//int main()
//{
//	int num = 10;
//	&num;
//	printf("%p\n",&num );
	
//	return 0;
//}
/*int sum(int a)//a�Ǵ����
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
