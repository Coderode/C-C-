//structure
#include<iostream>
using namespace std;

struct person
{
  char name[50];
  int age;
  float salary;	
};
person getData();
/*
//direct using structure
int main()
{
	person p1;
	cout<<"Enter full name:";
	cin.get(p1.name,50);
	cout<<"Enter age:";
	cin>>p1.age;
	cout<<"Enter salary:";
	cin>>p1.salary;
	cout<<"\nDisplaying information:"<<endl;
	cout<<"Name:"<<p1.name<<endl;
	cout<<"Age:"<<p1.age<<endl;
	cout<<"Salary:"<<p1.salary;
	return 0;
}*/
//passing structure to function in c++
//using functions
void displayData(person);
int main()
{
	person p;
	cout<<"Enter full name:";
	cin.get(p.name,50);
	cout<<"Enter age:";
	cin>>p.age;
	cout<<"Enter salary:";
	cin>>p.salary;
	displayData(p);
	fflush(stdin);
	p=getData();
	displayData(p);
	getchar();
	return 0;
}
void displayData(person p)
{
	cout<<"\nDisplaying information:"<<endl;
	cout<<"Name:"<<p.name<<endl;
	cout<<"age:"<<p.age<<endl;
	cout<<"salary:"<<p.salary;
}


//Returning structure from function in c++
person getData()
{
	person p;
	cout<<"\nEnter Full name:";
	cin.get(p.name,50);
	cout<<"Enter age:";
	cin>>p.age;
	cout<<"Enter salary:";
	cin>>p.salary;
	return p;
}

