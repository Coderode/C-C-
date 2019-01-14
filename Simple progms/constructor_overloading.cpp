//constructor overloading same as function overloading-> same function name with different input and output arguments (output may be same) input arguments can't be same
#include<iostream>
using namespace std;
class Area
{
	private:   //variables and functions not used outside of the class
		int len;
		int bre;
	public:    //variables and functions can be used outside of the class
		Area():len(5),bre(2){}  //no argument
        Area(int l,int b):len(l),bre(b){}  //with two arguments
        void Getlength()
        {
        	cout<<"Enter length and breadth respectively:";
        	cin>>len>>bre;
		}
		int Areacalculation()
	     {
	     	return (len*bre);
		 }
		 void DisplayArea(int temp)
		 {
		 	cout<<"area:"<<temp<<endl;
		 }
		
};
int main()
{
	Area A1,A2(2,1);
	int temp;
	cout<<"Default area when no argument is passed:"<<endl;
	temp=A1.Areacalculation();
	A1.DisplayArea(temp);
	cout<<"Area when(2,1) is passed as argument:"<<endl;
	temp=A2.Areacalculation();
	A2.DisplayArea(temp);
	getchar();
	return 0;
}

/*
object initialization with another object of same type
int main()
{
Area A1,A2(2,1);
Area A3(A2);  or Area A3=A2;  //copies the content of A2 to A3
}
*/

