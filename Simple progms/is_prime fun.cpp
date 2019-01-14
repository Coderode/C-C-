#include<iostream>
using namespace std;
int is_prime(int);
int main()
{
	int n1;
	char ans;
	do
	{
	cout<<"Enter a number to check for prime or not:\n";
	cin>>n1;
	is_prime(n1);
	cout<<"Do you want to continue?(y or n)\n";
	cin>>ans;
    }while(ans=='y' || ans=='Y');
    getchar();
	return 0;
}
int is_prime(int num)
{
	for(int i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
		cout<<"The Number is not prime\n";
		return 0;
	    }
	}
	cout<<"The Number is prime\n";
	return 1;
}
