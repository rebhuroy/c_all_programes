#include<iostream.h>
class a_a
{
private:
int a;
protected:
int b;
public:
void s(int q,int en)
{
a=q;
b=en;
//cout<<b;
}
friend void f(a_a p)
{

cout<<p.a+p.b;
	}
};

void main()
	{
a_a e;
e.s(10,20);
f(e);
	}
