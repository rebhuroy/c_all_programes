#include<iostream.h>
class a
{
protected:
int a_a;
public:
void f(int a_l){a_a=1+a_l;}
void s(){cout<<a_a;}
};
class de:public a
{
public:
de(){cout<<"de"<<endl;}
};
class de1:public de
{

};
	 class de2:public de
	 {
	 };

void main()
{
de2 q,i;
q.f(10);
q.s();}
