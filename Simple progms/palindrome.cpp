using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
	int a,temp,rev=0;
	cout<<"enter a number:\n";
	cin>>a;
	temp=a;
	while(temp>0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
	}
	cout<<"the reverse of the number is:\n"<<rev<<endl;
	if(rev==a)
	cout<<"the number is palindrome\n";
	else
	cout<<"the number is not a palindrome";
	getch();
	return 0;
}
