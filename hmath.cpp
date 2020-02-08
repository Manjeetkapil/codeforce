#include<iostream>
#include <string>

using namespace std;

int main(){
	string t;
	cin>>t;
	int one=0;
	int two=0;
	int three=0;
	for(int i=0; i<t.size(); i=i+2){
		if(t[i]=='1'){
			one++;
		}
		if(t[i]=='2'){
			two++;
		}
		if(t[i]=='3'){
			three++;
		}
	}
	if(three!=0){
		for(int i=0; i<one; i++){
			cout<<'1'<<'+';
		}
		for(int i=0; i<two; i++){
			cout<<'2'<<'+';
		}
		for(int i=0; i<three-1; i++){
			cout<<'3'<<'+';
		}
		cout<<'3';
	}
	if(three==0&&two==0){
		for(int i=0; i<one-1; i++){
			cout<<'1'<<'+';
		}
		cout<<'1';
	}
	if(three==0&&two!=0){
		for(int i=0; i<one; i++){
			cout<<'1'<<'+';
		}
		for(int i=0; i<two-1; i++){
			cout<<'2'<<'+';
		}
		cout<<'2';
	}
	return 0;
}