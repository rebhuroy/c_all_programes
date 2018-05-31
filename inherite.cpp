#include<iostream.h>
class b1
{
public:
b1()
{
cout<<"base";
}
};
class b2
{
public:
b2(){cout<<endl<<"base 1"<<endl;}
};
class de1:public b1,public b2
{
};
void main()
{
de1 ob;
//ob.f();
//ob.f1();
}