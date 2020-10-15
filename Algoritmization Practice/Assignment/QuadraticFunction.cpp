//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
float a,b,c,x1,x2,realNum,imageNum,dis;

void printResult(int r){
	switch(r){
		
		case(0):
			cout<<"Roots are complex!"<<endl;
			cout<<"x1 = "<<realNum<<"+"<<imageNum<<"i"<<endl;
        	cout<<"x2 = "<<realNum<<"-"<<imageNum<<"i"<<endl;
			break;
			
		case(1):
			cout<<"x = "<<x1<<endl;
			cout<<endl;
			cout<<a<<"*"<<x1<<"^2";
			
			if(b>=0){
				cout<<"+";
			}
			cout<<b<<"*"<<x1;
			
			if(c>=0){
				cout<<"+";
			}
			cout<<c<<" = 0"<<endl;
			break;
			
		case(2):
			cout<<"x1 = "<<x1<<endl;
			cout<<"x2 = "<<x2<<endl;
			cout<<endl;
			cout<<a<<"*"<<x1<<"^2";
			
			if(b>=0){
				cout<<"+";
			}
			cout<<b<<"*"<<x1;
			
			if(c>=0){
				cout<<"+";
			}
			cout<<c<<" = 0"<<endl;
			
			cout<<endl;
			
			cout<<a<<"*"<<x2<<"^2";
			
			if(b>=0){
				cout<<"+";
			}
			cout<<b<<"*"<<x2;
			
			if(c>=0){
				cout<<"+";
			}
			cout<<c<<" = 0"<<endl;
			break;
	}
	return;
}

int main(){
	cout<<"ax^2 + bx + c = 0"<<endl;
	
	cout<<"a = ";
	cin>>a;
	
	cout<<"b = ";
	cin>>b;
	
	cout<<"c = ";
	cin>>c;
	
	dis = b*b - 4*a*c;//find Discriminant
	
	if(dis>0){  //Discriminant has 2 roots
		x1 = (-1*b + sqrt(dis))/(2*a);
		x2 = (-1*b - sqrt(dis))/(2*a);
		printResult(2);
	}
	else if(dis==0){  //Discriminant has 1 root
		x1 = (-1*b + sqrt(dis))/(2*a);
		printResult(1);
	}
	else{  //Discriminant has no real roots
		realNum = (-1*b)/(2*a);
		imageNum = sqrt(-1 * dis) / (2*a);
		printResult(0);
	}
	return 0;
}


