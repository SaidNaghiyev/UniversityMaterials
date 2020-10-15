#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"enter 3 number"<<endl;
	cin>>a>>b>>c;
	cout<<max(a,max(b,c))<<endl;
	return 0;
}


