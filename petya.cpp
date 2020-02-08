#include<iostream>

using namespace std;

int main(){
	string t;
	int tsum=0;
	string k;
	int ksum=0;
	cin>>t>>k;
	int c=0;
	for(int i=0;i<t.size();i++) { 
      if(t[i]>=65 && t[i]<=90)
      {
		t[i]=t[i]+32;
      }
   	}
   	for(int i=0;i<k.size();i++) { 
      if(k[i]>=65 && k[i]<=90)
      {
		k[i]=k[i]+32;
      }
   	}
   	for(int i=0; i<t.size(); i++){
   		if(t[i]>k[i]){
   			c++;
   			break;
   		}
   		if(t[i]<k[i]){
   			c--;
   			break;
   		}
   	}
   	cout<<c;
	return 0;
}