#include "stdafx.h"
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
void initList(sqList * &L)
{
	L=(sqList *)malloc(sizeof(sqList));
	L->length=0;
}
void destroyList(sqList * &L)
{
	free(L);
}
bool listEmpty(sqList * L)
{
	return(L->length==0);
}
int listLength(sqList * L)
{
	return(L->length);
}
void dispList(sqList * L)
{
	for(int i=0;i<L->length;i++)
	{
		cout<<L->data[i];
	}
	cout<<endl;
}
bool getElem(sqList * L,int i,elemtype &e)
{
	if(i<1||i>L->length)
		return false;
	e=L->data[i-1];
		return true;
}
int locateElem(sqList * L,elemtype e)
{
	int i=0;
	while(i<L->length&&L->data[i]!=e)
		i++;
	if(i>=L->length)
		return 0;
	else
		return i+1;
}
bool listInsert(sqList * &L,int i,elemtype e)
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
bool listDelete(sqList * &L,int i,elemtype &e)
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

	char txt[256];//输入字符串
	cin>>txt;
	int t=strlen(txt);//字符串转译成顺序表
	for(int k=0;k<t;k++)
	{
	listInsert(L,k+1,txt[k]);
	}
	int sum=0;
	for(int g=1;g<=t;g++)
	{
		getElem(L,g,e);
		if(e=='a'||e=='e'||e=='i'||e=='o'||e=='u')sum++;
	}
	cout<<sum;
	system("pause");
	destroyList(L);//(12)销毁顺序表
}
 //实验习题：输入一个字符串，将该字符串中字符依次插入到顺序表中，统计出元音字符个数。
