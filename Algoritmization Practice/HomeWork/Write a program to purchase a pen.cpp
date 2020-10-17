#include<iostream>
using namespace std;

char bl;

bool Buy(){
	cin>>bl;
	if(bl=='Y' || bl == 'y'){
		cout<<"Buy it now!!!"<<endl;
		cout<<"Go back home"<<endl;
		return true;
	}
	return false;
}

void Do(){
	cout<<endl;
	cout<<"program to purchase a pen"<<endl;
	cout<<"Get dressed and enter Y if you dressed: ";
	cin>>bl;
	if(bl != 'Y' && bl != 'y'){
		Do();
		return;
	}
	
	//Check money
	int _money = 0;
	do{
		cout<<"Check your wallet. How much do you have? "<<endl;
		cin>>_money;
	}while(_money<5);
	
	//Go to the shop
	do{
		cout<<"Go to the Shop. Did you arrive? Y/N"<<endl;
		cin>>bl;
	}while(bl!='y' && bl!='Y');
	
	//Ask your favorite pen
	cout<<"Ask for your favorite pen! Are they have this pen? Y/N"<<endl;
	if(Buy()){
		return;
	}
	
	//Ask for another pen
	cout<<"look for another pen. Did you find it? Y/N"<<endl;
	if(Buy()){
		return;
	}
	cout<<"Go back home!! and make your own pen!"<<endl;
}

int main(){
	Do();
	return 0;
}
