#include<iostream>

using namespace std;

int main(){
	string t;
	cin>>t;
	int zero=0;
	int one=0;
	for(int i=0;i<t.size(); i++){
		if(t[i]=='0'){
			zero++;
		}
		if(t[i]=='1'){
			zero=0;
		}
		if(zero==7){
			break;
		}
	}
	for(int i=0;i<t.size(); i++){
		if(t[i]=='1'){
			one++;
		}
		if(t[i]=='0'){
			one=0;
		}
		if(one==7){
			break;
		}
	}
	if(zero==7 || one==7){
		cout<<'Y'<<'E'<<'S';
	}
	else{
		cout<<'N'<<'O';
	}
	return 0;
}