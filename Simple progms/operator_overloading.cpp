//operator overloading -> redefine the meaning of operator
#include<iostream>
using namespace std;
class temp
{
	private:
		int count;
	public:
		temp():count(5){}
		void operator++()
		{
			count=count+1;
		}
		void Display()
		{
			cout<<"count:"<<count;
		}
};
int main()
{
	temp t;
	++t;
	t.Display();
	getchar();
	return 0;
}


