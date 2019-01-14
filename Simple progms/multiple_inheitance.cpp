//multiple inheritance-> A class can be derived from more than one parents source code 
#include<iostream>
using namespace std;
class Area
{
	public:
		float area_calc(float l,float b)
		{
			return l*b;
		}
};
class perimeter
{
	public:
		float peri_calc(float l,float b)
		{
			return 2*(l+b);
		}
};
class rectangle:private Area,private perimeter
{
	private:
		float length,breadth;
	public:
		rectangle():length(0.0),breadth(0.0){}
        void get_data()
        {
        	cout<<"Enterlength:";
        	cin>>length;
        	cout<<"Enter breadth:";
        	cin>>breadth;
		}
		float area_calc()
		{
			return Area::area_calc(length,breadth);
		}
		float peri_calc()
		{
			return perimeter::peri_calc(length,breadth);
		}
};
int main()
{
	rectangle r;
	r.get_data();
	cout<<"Area="<<r.area_calc();
	cout<<"\nperimeter="<<r.peri_calc();
	getchar();
	return 0;
}
