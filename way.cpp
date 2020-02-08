#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		char x[255];
		cin>>x;
		if(strlen(x)<=10)
			cout<<x<<endl;
		else
			cout<<x[0]<<strlen(x)-2<<x[strlen(x)-1]<<endl;
	}
}