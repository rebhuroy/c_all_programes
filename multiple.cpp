#include<iostream.h>
class b1
{
public:
int a;
void f(int p=14)
{
a=p;
cout<<a<<"\n";
}
};
class b2
{
public:
int a1;
void f1(int q=12){a1=q;cout<<a1;}
};
class c:public b1,public b2
{
public:
void f2()
{
int y;
y=a1+a;
cout<<"\n"<<y;
}
};
void main()
{
c aw;
aw.f();
aw.f1();
aw.f2();
}
