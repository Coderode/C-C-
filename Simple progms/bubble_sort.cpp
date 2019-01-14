//sorting :bubble _sort
#include<iostream>
using namespace std;
void bubble_sort(int *, int);
int main()
{
	int *p,n,i;
	cout<<"Enter total numbers:\n";
	cin>>n;
	p=new int[n];
	cout<<"Enter values:\n";
	for(i=0; i<n; i++)
	{
		cin>>*(p+i);
	}
	bubble_sort(p,n);
	cout<<"The sorted array is:\n";
	for(i=0; i<n; i++)
	{
		cout<<*(p+i)<<" ";
	}
	delete [] p;
	getchar();
}
void bubble_sort(int *p,int n)
{
	int temp,i,round,flag;
	for(round=1; round<=n-1; round++)
	{
      flag=0;
	 for(i=0; i<=n-1-round; i++)
	 {
	 	if(*(p+i)>*(p+i+1))
	     {
		 	 temp=*(p+i);
	     	 *(p+i)=*(p+i+1);
	    	 *(p+i+1)=temp;
	    	 flag=1;
	     }	
	 }
	 if(flag==0)
	 break;
    }
}
