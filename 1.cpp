#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int sum=0;
		int a;
		int flag = 0;
		int b;
		int flag1 = 0;
		for(int j=0; j<n; j++){
			sum = sum + s[j];
		}
		if(sum%2==0 && s[n-1]%2!=0){
			cout<<s;
		}
		if(sum%2!=0 && s[n-1]%2!=0){
			for(int j=0; j<n-1; j++){
				if(s[j]%2!=0){
					a = j;
					flag++;
					break;
				}
			}
			if(flag>0){
				for(int j=0; j<a; j++){
					cout<<s[j];
				}
				for(int j=a+1; j<n; j++){
					cout<<s[j];
				}
			}
			else{
				cout<<'-'<<'1';
			}
		}
		if(sum%2==0 && s[n-1]%2==0){
			for(int j=n-1; j>=0; j--){
				if(s[j]%2!=0){
					a = j;
					flag++;
					break;
				}
			}
			if(flag>0){
				for(int j=0; j<a+1; j++){
					cout<<s[j];
				}
			}
			else{
				cout<<'-'<<'1';
			}
		}
		if(sum%2!=0 && s[n-1]%2==0){
			for(int j=n-1; j>=0; j--){
				if(s[j]%2!=0){
					a = j;
					flag++;
					break;
				}
			}
			for(int j=0; j<a-1; j++){
				if(s[j]%2!=0){
					b = j;
					flag1++;
					break;
				}
			}
			if(flag>0 && flag1>0){
				for(int j=0; j<b; j++){
					cout<<s[j];
				}
				for(int j=b+1; j<a+1; j++){
					cout<<s[j];
				}
			}
			else{
				cout<<'-'<<'1';
			}
		}
		cout<<endl;
	}
	return 0;
}