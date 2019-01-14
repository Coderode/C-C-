//return object from function
#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int imag;
	public:
		complex():real(0),imag(0){}
		void read()
		{
			cout<<"Enter real and imag no. respectively:"<<endl;
			cin>>real>>imag;
		}
		complex add(complex c2)
		{
			complex temp;
			temp.real=real+c2.real;
			temp.imag=imag+c2.imag;
			return temp;
		}
		void display()
		{
			cout<<"sum="<<real<<"+"<<imag<<"i";
		}
};
int main()
{
	complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c1.add(c2);
	c3.display();
	getchar();
	return 0;
}
