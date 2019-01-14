#include<iostream>
using namespace std;

/*
int main()
{
	int n=30;
	int *p;
	p=&n;
	cout<<&n<<endl;  //address of n
	cout<<&p<<endl;   //address of p
	cout<<p<<endl;//address of n
	cout<<n<<endl; //value of n
	cout<<*p;     //value of n
	getchar();
}
*/
//swap two numbers without using third variable
int main()
{
	void swap(int*,int*);
	int a,b;
	cout<<"Enter two integers to swap:\na=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	swap(&a,&b);
	cout<<"After swapping:"<<endl;	
	cout<<"a="<<a<<"  b="<<b<<endl;
	getchar();
}
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
