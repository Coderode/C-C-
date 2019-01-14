#include<iostream>
using namespace std;
float sum(float,float);
float div(float,float);
float sub(float,float);
float mul(float,float);
int main()
{
	float num1,num2;
	char ans,opr;
	cout<<"welcome to simple calculator(+,-,*,/)\n";
	do
	{
	cout<<"Enter operands\n";
	cout<<"num1=";
	cin>>num1;
	cout<<"num2=";
	cin>>num2;
	cout<<"Enter operator=";
	cin>>opr;
	switch(opr)
	{
		case '+':
			cout<<num1<<"+"<<num2<<"="<<sum(num1,num2)<<endl;
			break;
		case '-':
			cout<<num1<<"-"<<num2<<"="<<sub(num1,num2)<<endl;
			break;
		case '*':
			cout<<num1<<"*"<<num2<<"="<<mul(num1,num2)<<endl;
			break;
		case '/':
			cout<<num1<<"/"<<num2<<"="<<div(num1,num2)<<endl;
			break;
		default :
			cout<<"you entered wrong operator!\n";
			break;
		
	}
	cout<<"Do you want to continue? (y or n)\n";
	cin>>ans;
    }while(ans=='y' || ans=='Y');
    getchar();
    return 0;
}
float sum(float x,float y)
{
  return (x+y);	
}
float sub(float x,float y)
{
	return (x-y);
}
float mul(float x,float y)
{
	return (x*y);
}
float div(float x,float y)
{
	return (x/y);
}
