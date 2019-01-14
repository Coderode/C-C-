//sorting:selection sorting
#include<iostream>
using namespace std;
int min(int *,int,int);
int main()
{
	int *p,n,i,temp,loc;
	cout<<"Enter total numbers:\n";
	cin>>n;
	p=new int[n];
	cout<<"Enter values:\n";
	for(i=0; i<n; i++)
	{
		cin>>*(p+i);
	}
	for(i=0; i<n-1; i++)
	{
		temp=*(p+i);
		loc=min(p,i,n);
		*(p+i)=*(p+loc);
		*(p+loc)=temp;
	}
	cout<<"The sorted array is:\n";
	for(i=0; i<n; i++)
	{
		cout<<*(p+i)<<" ";
	}
	delete [] p;
	
	getchar();
	return 0;
}
int  min(int *p,int i,int n)
{
	int min,loc=i;
	min=*(p+i);
	for(int k=i+1; k<n; k++)
	{
	   if(*(p+k)<min)
	   {
	   min=*(p+k);
	   loc=k;
       }
	   	
	}
	return loc;
}
