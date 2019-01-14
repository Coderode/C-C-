//passing and returning object from function
//passing object to function
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
	    	cout<<"Enter real and imaginary number respectively:"<<endl;
	    	cin>>real>>imag;
		}
		void add(complex c1,complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
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
	c3.add(c1,c2);
	c3.display();
	getchar();
	return 0;
}
