//Inheritance-> to create new class(derived class) from a existing class (base class)
#include<iostream>
using namespace std;
class rectangle
{
	protected:   //con be accessible from derived class but not accessible from outside it
	     float length,breadth;
	public:
	    rectangle():length(0.0),breadth(0.0)
		{
			cout<<"Enter length:";
			cin>>length;
			cout<<"Enter breadth:";
			cin>>breadth;
		} 
	     
};
class Area:public rectangle   //derived class
{
	public:
		float calc()
		{
			return length*breadth;
		}
};
class perimeter:public rectangle  //derived class
{
	public:
		float calc()
		{
			return 2*(length+breadth);
		}
};
int main()
{
	cout<<"Enter data for first rectangle to find area:\n";
	Area a;
	cout<<"Area="<<a.calc()<<"square meter\n\n";
	cout<<"Enter data for second rectangle to find perimeter.\n";
	perimeter p;
	cout<<"\nperimeter="<<p.calc()<<"meter";
	getchar();
	return 0;
}
