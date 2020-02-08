#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	int count = 0;
	for(int i=0; i<t; i++){
		int x = 0;
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1){
			x++;
		}
		if(b==1){
			x++;
		}
		if(c==1){
			x++;
		}
		if(x>1){
			count++;
		}
	}
	cout<<count;
}