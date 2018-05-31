#include<iostream.h>
template<class r>
r max(r q,r p,const int a=2)
{
float w;
cout<<q<<endl;
w=q+p+a;
cout<<w<<endl;
return w;
}
void main()
{
cout<<max(57.22,21.4);
}