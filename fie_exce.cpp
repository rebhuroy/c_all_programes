	 #include<iostream.h>
	 void main()
	 {
	 int a=-1,b=1,c,n=5,p;

	 c=b+a;
	 try
	 {
	 if(c==0)
	 throw( c);
	 else
	 cout<<n/c;
	 }
	 catch(int i)
	 {
	 cout<<"sorry";
	 }
	 }

