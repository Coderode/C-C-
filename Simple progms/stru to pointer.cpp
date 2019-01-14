//pointer to structure
#include<iostream>
using namespace std;
struct distance
{
	int feet;
	float inch;
};

int main()
{
  struct distance *ptr,d;
  ptr=&d;
  cout<<"Enter feet:";
  cin>>(*ptr).feet; //ptr->feet
  cout<<"Enter inch:"; 
  cin>>(*ptr).inch; // or ptr->inch
  cout<<"Displaying information:"<<endl;
  cout<<"Distance="<<(*ptr).feet<<" feet "<<(*ptr).inch<<" inches";
  getchar();
  return 0; 	
}

