//objects and class
#include<iostream>
using namespace std;
class temp   //class
{
	private:
		int data1;
		float data2;
	public:
		void int_data(int d)
		{
			data1=d;
			cout<<"number:"<<data1;
		}
		float float_data()
		{
			cout<<"\nEnter data:";
			cin>>data2;
			return data2;
		}
};
int main()
{
	temp obj1,obj2;  //objects 
	obj1.int_data(12);  //accessing function from class
	cout<<"You entered:"<<obj2.float_data();
	getchar();
	return 0;
}
