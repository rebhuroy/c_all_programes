#include<iostream.h>
class  z
{
protected:
int a,b;
public:
  void p(int,int);
};
class y
{
public:
void s(int g=10,int h=17)
{
 cout<<"g*h:"<<g*h<<endl;
}};
class q:public z,public y
{
int l,k;
public:
  void c();
};
void z::p(int s,int f)
{
//int s,f;
a=s;
b=f;
}
void q::c()
{
cout<<"a:"<<a<<endl;
cout<<"b:"<<b<<endl;
}
void main()
{
q v;
v.p(20,23);
v.c();
v.s();
}

