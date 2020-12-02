#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<string.h>
int main()
{
	char input[20] = {0};
	//shutdown -s -t 60
	//system()执行系统命令
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n请输入:");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串 strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//	
//	printf("黄家俊爱死王润丰了\n");
//	goto again;
//	printf("王润丰(＾－＾)V~(｡≧3≦)ﾉ⌒☆");
//	again:
//	printf("王润丰(＾－＾)V~(｡≧3≦)ﾉ⌒☆┗|｀O′|┛ 嗷~~");
//
//	return 0;
//}

//猜数字游戏
//#include<stdlib.h>
//void menu()
//{
//	printf("************猜数字游戏**************\n");
//	printf("**********1.play  0.exit************\n");
//	printf("************************************\n");
//}
//RAND_MAX//生成的数字是0~32767
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int i;
//	
//	//拿时间戳来设置随机数的生成起点
//	//time_t time(time_t* time)
//	//time_t
//	//srand((unsigned int)time(NULL));//放在主函数中访问一次就好了，不然生成数不够随机
//	ret = rand()%100;//生成随机数，不设置%100的话，生成的数字是0~32767，范围太大，想要范围在0~100之间，%100，余数为0~100
//	//printf("%d\n",ret);
////2.猜数字
//	while(1)
//	{
//		printf("猜数字：");
//		scanf("%d", &i);
//		if (i < ret)
//		{
//			printf("小了\n");
//		}
//		else if (i > ret)
//		{
//			printf("大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int choose;
//	srand((unsigned int)time(NULL));
//	do
//	{
//	menu();
//	printf("请选择：");
//	scanf("%d",&choose);
//	switch (choose)
//	{
//	case 1:
//		printf("开始游戏\n");
//		game();
//		break;
//	case 0:
//		printf("结束游戏\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	} while (choose);
//	
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k ;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;;
//		
//	while (1)
//		{
//			printf("请输入一个整数：");
//			scanf("%d", &k);
//				while (arr[mid] != k)
//				{
//					
//					if (arr[mid] > k)
//					{
//						right = mid - 1;
//					}
//					if (arr[mid] < k)
//					{
//						left = mid + 1;
//					}
//					mid = (left + right) / 2;
//					if (left > right)
//					{
//						printf("找不到了\n");
//					break;
//					}
//					else if(arr[mid]==k)
//					{
//						printf("找到了，下标是：%d\n", mid);
//					}
//				}
//				
//	
//			}	
//	return 0;
//}


//打印乘法口诀9*9
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//
//			//printf("%d*%d=%d  ", i, j, i * j);
//			//printf("%d*%d=%2d  ", i, j, i * j);//格式为右对齐
//			printf("%d*%d=%-2d  ", i, j, i * j);//格式为左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ",j,i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求十个数中的最大值
//改进
//int main()
//{
//	int arr[10] = { -5,-1,-4,-2,-8,-6,-9,-23,-13,-10 };
//	int max = arr[1];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//此代码有问题
//int main()
//{
//	int arr[10] = {5,1,4,2,8,6,9,23,13,10};
//	int max = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}


//分数求和
//int main()
//{
//	int i;
//	double sum = 0.0;
//	int flat = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flat * (1.0 / i);
//		flat = -flat;
//
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//
////int main()
////{
////	int i;
////	double sum = 0.0;
////	for (i = 1 ; i <= 100; i++)
////	{
////		if (i % 2 == 0)
////		{			
////			 sum = sum-(1.0 / i);
////		}
////		if (i % 2 != 0)
////		{
////			sum = sum + 1.0 / i;
////		}
////
////	}
////	printf("sum=%lf\n", sum);
////	return 0;
//}
//计算1`100之间出现9的个数
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	 if (i / 10 == 9)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("count=%d\n",count);
//	return 0;
//}

//#include<math.h>//sqrt()为数学库函数
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//	//1.试除法
//		//13 除了1和13外，2-12之间的数不能将13整除
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//break出所有的i，要进行筛选
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<math.h>//sqrt()为数学库函数
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//	//1.试除法
//		//13 除了1和13外，2-12之间的数不能将13整除
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//break出所有的i，要进行筛选
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i;
//	int count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//	//1.试除法
//		//13 除了1和13外，2-12之间的数不能将13整除
//		int j =0;
//		for ( j=2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//break出所有的i，要进行筛选
//		if (j==i)
//		{
//			count++;
//			printf("%d\n", i);
//		}		
//	}
//	printf("%d\n", count);
//	return 0;
//}

//判断1000~2000之间闰年
//判断方法一：能被4且不能被100 整除的是闰年
//判断方法一：能被400 整除的是闰年
//int main()
//{
//	int year,count=0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 400 == 0)
//		{
//			printf("%d\n",year);
//			count++;
//		}
//		else if (year % 4==0 && year % 100!=0)
//		{
//			printf("%d\n",year);
//			count++;
//		}
//	}
//	printf("共有%d年是闰年",count);
//	return 0;
//}
//int main()
//{
//	//辗转相除法
//	int i=0, j=0,k=0;
//	while (1)
//	{
//		printf("请输入两位整数：");
//		scanf("%d%d", &i, &j);
//		int tmp1 = i;
//		int tmp2 = j;
//		if (i < j)
//		{
//			int tmp = i;
//			i = j;
//			j = tmp;
//		
//		}
//		k = i % j;
//		while (k)
//		{
//			i = j;
//			j = k;
//			k = i % j;
//		}
//		printf("%d和%d的最大公约数是：%d\n", tmp1, tmp2, j);		
//	}	
//	return 0;
//}

//int main()
//{
//	int n = 100;
//	
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("从大到小输出：%d %d %d\n",a,b,c);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d",&a,&b,&c);
//
//	if (b > a && b > c)
//	{
//		if (c > a)
//		{
//			int tmp = a;
//			a = b;
//			b = c;
//			c = tmp;
//		}
//		else
//		{
//			int tmp = a;
//			a=b;
//			b = tmp;
//			
//		}
//	}
//	else if(a>b&&a>c)
//	{
//		if (c > b)
//		{
//			int tmp = b;
//			b = c;
//			c = tmp;
//		}
//	}
//		printf("从大到小输出：%d%d%d", a, b, c);
//
//	
//	return 0;
//}
//
//int main()
//{
//	int a, b, c;
//
//	while (1)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//
//		if (a > b && a > c)
//		{
//			printf("%d", a);
//
//			if (b > c)
//			{
//				printf("%d%d\n", b,c);
//			}
//			else
//				printf("%d%d\n", c,b);
//		}
//		else if (b > a && b > c)
//		{
//			printf("%d", b);
//			if (a > c)
//			{
//				printf("%d%d\n", a,c);
//			}
//			else
//				printf("%d%d\n", c,a);
//		}
//		else if (c > a && c > b)
//		{
//			printf("%d", b);
//			if (a > b)
//			{
//				printf("%d%d\n", a,b);
//			}
//			else
//				printf("%d%d\n", b,a);
//		}
//	}
//	
//		return 0;
//}