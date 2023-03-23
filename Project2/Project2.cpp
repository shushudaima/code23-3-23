// Project2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
//指针
//int main()
//{	
//	int a = 10;
//	int* p = &a;
//	//printf("%p\n", p);
//	//printf("%p\n", &a);
//	*p;//置换此地址的值
//	*p = 19;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* d = &ch;
//	*d = 'a';
//	printf("%d\n", sizeof(d));
//	//printf("%c", ch);
//
//	return 0;
//}
//指针在32中是4个字节 64个里面是8个字节

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
//电脑
//内存 16G
//硬盘 256G
//指针变量
//int main()
//{
//	//int a = 19;
//	//printf("%p\n", &a);
//	//int* p = &a;
//	//printf("%p\n", p);
//	//*p = 20;
//	//printf("%d\n", a);
//	double d = 3.14;
//	double* p = &d;
//	printf("%p\n", p);
//	printf("%d\n", sizeof(p));
//	return 0;
//}
//结构体
//char double int 
//复杂对象
//一个人 名字 身高 年龄 身份证号 书号
//描述复杂对象可以用一种结构体表示
//结构体是自己创造出来的一种类型
struct Book
{
	char name[20];//c语言程序设计
	short price;//55r
};
int main()
{
	struct Book b1 = { "c语言程序设计" ,55 };
	strcpy(b1.name,"C++");
	printf("%s\n", b1.name);
	//printf("书名：《%s》\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 39;
	//printf("打折后价格：%d元\n", b1.price);
	//struct Book* pb = &b1;
	//printf("《%s》\n", pb->name);
	//printf("%d元\n", pb->price);

	return 0;
}
