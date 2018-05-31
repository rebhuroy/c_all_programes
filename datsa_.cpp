#include<iostream.h>
class a
{
private:
int x;
public:
void f();
};
void a::f()
{
x=132;
cout<<x;}
void main()
{
a z;
z.f();}