#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int d;
		cin>>d;
		if(d>2 || d==1){
			int n[d];
			for(int j=0; j<d; j++){
				cin>>n[j];
			}
			int max=0;
			for(int j=0; j<d; j++){
				if(n[j]>max){
					max = n[j];
				}
			}
			int flag = 0;
			int z = 0;
			for(int j=0; j<d; j++){
				if(n[j]==max){
					flag++;
				}
			}
			for(int j=0; j<d; j++){
				if(n[j]==0){
					z++;
				}
			}
			if(flag>1 && max==1 && z>0){
				cout<<'N'<<'O';
			}
			else{
				cout<<'Y'<<'E'<<'S';
			}
			
			cout<<endl;
		}
		else{
			int n[d];
			for(int j=0; j<d; j++){
				cin>>n[j];
			}
			if(n[0]==0 && n[1]==0){
				cout<<'N'<<'O';
			}
			else{
				cout<<'Y'<<'E'<<'S';
			}
			cout<<endl;
		}
	}
}