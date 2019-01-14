#include<iostream>
using namespace std;
int is_leap(int);
int main()
{
	int year,flag;
	char ans;
	do
	{
	cout<<"Enter the year:\n";
	cin>>year;
	flag=is_leap(year);
	if(flag)
	cout<<year<<" is a leap year\n";
	else
	cout<<year<<" is not a leap year\n";
	cout<<"Do you want to continue?(y or n)\n";
	cin>>ans;
    }while(ans=='y' || ans=='Y');
    getchar();
 	return 0;
	
}
int is_leap(int year)
{
	return (year%4==0 && (year%100!=0 || year%400==0));
}
