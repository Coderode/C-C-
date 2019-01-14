#include<iostream>
using namespace std;
//display prime numbers between two numbers
int is_prime(int);
int main()
{
	int n1,n2;
	char ans;
	do
	{
	cout<<"Enter two numbers to find prime numbers between them:\n";
	cin>>n1>>n2;
	for(int i=n1+1; i<n2; i++)
	{
		if(is_prime(i))
		cout<<i<<" ";
	} 
	cout<<"\nDo you want to continue? (y or n)\n";
	cin>>ans;
    }while(ans=='y' or ans=='Y');
     getchar();
     return 0;		
}
int is_prime(int num)
{	
    for(int i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}

