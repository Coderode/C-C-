//enumeration
#include<iostream>
using namespace std; 

enum seasons{spring,summer,autumn,winter
};
enum season2{rainy=34,cold=4
};
 int main()
 {
 	seasons s;
 	season2 t;
 	s=spring;
 	cout<<"spring="<<s<<endl;  //\n=endl;
 	s=summer;
 	cout<<"summer="<<s<<endl;
 	s=autumn;
 	cout<<"autumn="<<s<<endl;
 	s=winter;
 	cout<<"winter="<<s<<endl;
 	
 	t=rainy;
 	cout<<"rainy="<<t<<endl;
 	getchar();
 	return 0;
 }
