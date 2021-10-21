#include <iostream>
#include <stdlib.h>
//1����˳������ݽṹ
#define maxsize 50 
using namespace std;
typedef char elemtype;
typedef struct
 {	 elemtype data[maxsize];
	 int length;
 }sqList;
//2˳���Ļ����㷨P35-37�����㷨1-9
void initList(sqList * &L)//�½�˳���
{
	L=(sqList *)malloc(sizeof(sqList));
	L->length=0;
}
void destroyList(sqList * &L)//ɾ��˳���
{
	free(L);
}
bool listEmpty(sqList * L)//�ж�˳����Ƿ�Ϊ��
{
	return(L->length==0);
}
int listLength(sqList * L)//����˳�����
{
	return(L->length);
}
void dispList(sqList * L)//���˳���
{
	for(int i=0;i<L->length;i++)
	{
		cout<<L->data[i];
	}
	cout<<endl;
}
bool getElem(sqList * L,int i,elemtype &e)//��ȡ˳����е�i��Ԫ�ص�ֵ������e
{
	if(i<1||i>L->length)
		return false;
	e=L->data[i-1];
		return true;
}
int locateElem(sqList * L,elemtype e)//��λĳ��Ԫ��e��������δ֪
{
	int i=0;
	while(i<L->length&&L->data[i]!=e)
		i++;
	if(i>=L->length)
		return 0;
	else
		return i+1;
}
bool listInsert(sqList * &L,int i,elemtype e)//����Ԫ��e����i��Ԫ�غ�
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
bool listDelete(sqList * &L,int i,elemtype &e)//ɾ����i��Ԫ��
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

//3 ��д������
void main()
{
	sqList *L;
	elemtype e;
	int i;
    initList(L);	//(1����ʼ��˳���L
	listInsert(L,1,'a');	//(2)���β���a,b,c,d,eԪ��
    listInsert(L,2,'b');
	listInsert(L,3,'c');
	listInsert(L,4,'d');
	listInsert(L,5,'e');
   cout<<"���˳���L"<<endl;
   dispList(L);//(3)���˳���
   //c style: printf("l�ĳ���Ϊ��%d\n",listlength(l));
   cout<<"L�ĳ���Ϊ��"<<listLength(L)<<endl;//(4) �������
   if(listEmpty(L)==1)//(5)���Ƿ�Ϊ��
	   cout<<"�ձ�"<<endl;
   else
	   cout<<"�ǿձ�"<<endl;
   getElem(L,3,e);
   //c style:printf("������Ԫ���ǣ�%c\n",e);
   cout<<"������Ԫ���ǣ�"<<e<<endl;//��6�����������Ԫ��
   i=locateElem(L,'a');//(7)���Ԫ��a��λ��
   if(i!=0)
	   cout<<"a��λ��Ϊ���е�"<<i<<"��Ԫ��"<<endl;
   else
	   cout<<"a���ڱ���"<<endl;
   listInsert(L,4,'f');//(8)�ڵ��ĸ�Ԫ��λ�ò���f
   cout<<"���˳���L"<<endl;
   dispList(L);//(9)���˳���
   listDelete(L,3,e);//(10)ɾ��L�е�����Ԫ��
   cout<<"���˳���L"<<endl;
   dispList(L);//(11)���˳���
   destroyList(L);//(12)����˳���
   system("pause");
}
 //ʵ��ϰ�⣺����һ���ַ����������ַ������ַ����β��뵽˳����У�ͳ�Ƴ�Ԫ���ַ�������
