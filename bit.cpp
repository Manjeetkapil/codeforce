#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	int x = 0;
	for(int i=0; i<t; i++){
		string k;
		cin>>k;
		if(k[2]=='+' || k[0]=='+'){
			x++;
		}
		if(k[2]=='-'|| k[0]=='-'){
			x--;
		}
	}
	cout<<x;
	return 0;
}