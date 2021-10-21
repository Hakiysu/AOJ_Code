#include <iostream>
#include <stdlib.h>
//1定义顺序表数据结构
#define maxsize 50 
using namespace std;
typedef char elemtype;
typedef struct
 {	 elemtype data[maxsize];
	 int length;
 }sqList;
//2顺序表的基本算法P35-37基本算法1-9
void initList(sqList * &L)//新建顺序表
{
	L=(sqList *)malloc(sizeof(sqList));
	L->length=0;
}
void destroyList(sqList * &L)//删除顺序表
{
	free(L);
}
bool listEmpty(sqList * L)//判断顺序表是否为空
{
	return(L->length==0);
}
int listLength(sqList * L)//返回顺序表长度
{
	return(L->length);
}
void dispList(sqList * L)//输出顺序表
{
	for(int i=0;i<L->length;i++)
	{
		cout<<L->data[i];
	}
	cout<<endl;
}
bool getElem(sqList * L,int i,elemtype &e)//获取顺序表中第i个元素的值并赋给e
{
	if(i<1||i>L->length)
		return false;
	e=L->data[i-1];
		return true;
}
int locateElem(sqList * L,elemtype e)//定位某个元素e，返回其未知
{
	int i=0;
	while(i<L->length&&L->data[i]!=e)
		i++;
	if(i>=L->length)
		return 0;
	else
		return i+1;
}
bool listInsert(sqList * &L,int i,elemtype e)//插入元素e到第i个元素后
{
	int j;
	if(i<1||i>L->length+1||L->length==maxsize)
		return false;
	i--;
	for(j=L->length;j>i;j--)
		L->data[j]=L->data[j-1];
	L->data[i]=e;
	L->length++;
	return true;
}
bool listDelete(sqList * &L,int i,elemtype &e)//删除第i个元素
{
	int j;
	if(i<1||i>L->length)
		return false;
	i--;
	e=L->data[i];
	for(j=i;j<L->length-1;j++)
		L->data[j]=L->data[j+1];
	L->length--;
	return true;
}

//3 编写主函数
void main()
{
	sqList *L;
	elemtype e;
	int i;
    initList(L);	//(1）初始化顺序表L
	listInsert(L,1,'a');	//(2)依次插入a,b,c,d,e元素
    listInsert(L,2,'b');
	listInsert(L,3,'c');
	listInsert(L,4,'d');
	listInsert(L,5,'e');
   cout<<"输出顺序表L"<<endl;
   dispList(L);//(3)输出顺序表
   //c style: printf("l的长度为：%d\n",listlength(l));
   cout<<"L的长度为："<<listLength(L)<<endl;//(4) 输出长度
   if(listEmpty(L)==1)//(5)表是否为空
	   cout<<"空表"<<endl;
   else
	   cout<<"非空表"<<endl;
   getElem(L,3,e);
   //c style:printf("第三个元素是：%c\n",e);
   cout<<"第三个元素是："<<e<<endl;//（6）输出第三个元素
   i=locateElem(L,'a');//(7)输出元素a的位置
   if(i!=0)
	   cout<<"a的位置为表中第"<<i<<"个元素"<<endl;
   else
	   cout<<"a不在表中"<<endl;
   listInsert(L,4,'f');//(8)在第四个元素位置插入f
   cout<<"输出顺序表L"<<endl;
   dispList(L);//(9)输出顺序表
   listDelete(L,3,e);//(10)删除L中第三个元素
   cout<<"输出顺序表L"<<endl;
   dispList(L);//(11)输出顺序表
   destroyList(L);//(12)销毁顺序表
   system("pause");
}
 //实验习题：输入一个字符串，将该字符串中字符依次插入到顺序表中，统计出元音字符个数。
