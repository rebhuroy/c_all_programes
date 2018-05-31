#include<iostream.h>
#include<iomanip.h>
#define m 3
class a
{
protected:
int a[m][m],b[m][m],c[m][m];
public:
void fun()
{
cout<<"enter a mat";
for(int i=0;i<m;i++)
for(int j=0;j<m;j++)
cin>>a[i][j];
}
void fun1();
void fun2();
void f3()
{
cout<<"after add the ans is"<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<m;j++)
{
cout<<setw(3)<<c[i][j];
}
 cout<<"\n";  }
}
};
void a::fun1()
{
cout<<"enter b mat";
for(int i=0;i<m;i++)
for(int j=0;j<m;j++)
cin>>b[i][j];
}
void a::fun2()
{
for(int i=0;i<m;i++)
for(int j=0;j<m;j++)
c[i][j]=a[i][j]+b[i][j];

}
void main()
{
a y;
y.fun();
y.fun1();
y.fun2();
y.f3();
}
