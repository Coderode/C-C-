//constructors -> special type of member function that initialises the object automatically
#include<iostream>
using namespace std;
class Area
{
	private:   //variables and function can't be used outside of the class
		int length;
		int breadth;
	public:   //variables and functions can be used outside of the class
		Area():length(5),breadth(2){}  /*constructor-- or area(){ length=5; breadth=2; } name of function must be same as of class  (it is like initialisation of variables)*/
		void Getlength()
		{
			cout<<"Enter length and breadth respectively:";
			cin>>length>>breadth;
		}
		int areacalculation()
		{
			return (length*breadth);
		}
		void Displayarea(int temp)
		{
			cout<<"Area:"<<temp;
		}
		
};
int main()
{
	Area A1,A2;
	int temp;
	A1.Getlength();
	temp=A1.areacalculation();
	A1.Displayarea(temp);
	cout<<endl<<"Default area when value is not taken from user:"<<endl;
	temp=A2.areacalculation();
	A2.Displayarea(temp);
	getchar();
}

