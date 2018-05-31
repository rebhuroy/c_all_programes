#include<iostream.h>
#include<fstream.h>
void main()
{
ofstream o("h");
char a[10];
cin>>a;
o<<a;
o.close();
ifstream i("h");
cout<<a;
i>>a;
i.close();
}