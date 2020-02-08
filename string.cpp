#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char x[255];
	cin>>x;
	for(int i=0; i<strlen(x); i++){
		if(x[i]=='a'||x[i]=='i'||x[i]=='o'||x[i]=='e'||x[i]=='y'||x[i]=='u'||x[i]=='A'||x[i]=='I'||x[i]=='O'||x[i]=='E'||x[i]=='Y'||x[i]=='U'){
			x[i] = ' ';
		}
	}
	for(int i=0;i<=strlen(x);i++) { 
      if(x[i]>=65 && x[i]<=90)
      {
		x[i]=x[i]+32;
      }
   }
    for(int i=0; i<strlen(x); i++){
   		if(x[i]>=97 && x[i]<=122){
   			cout<<"."<<x[i];
   		}
    }
    cout<<endl;
	return 0;
}