#include<iostream.h>
class a
{
public:
int f(int ,int );
};
int a::f(int x,int y)
{
if(x>y)
return x;
else
return y;
}
void main()
{
a v;
int s,p;
//v.f(10,20);
cin>>s>>p;
cout<<v.f(s,p);
}


