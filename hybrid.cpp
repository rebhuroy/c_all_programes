#include<iostream.h>
class b1
{
public:
void f(){cout<<"b1";}
};
class d1_1stle: virtual public b1
{};
class d2_1stle:virtual public b1
{};
class d3_2ndle:public d1_1stle,public d2_1stle
{};
void main()
{
 d3_2ndle t;
 t.f();
}

