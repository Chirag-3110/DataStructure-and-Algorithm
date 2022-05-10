
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int count=0;
	string s;
	cin>>s;
	char selectedCharacter=s[0];
	for(int i=0;i<=s.length();i++){
		if(s[i]==selectedCharacter){
			count++;
		}
		else{
			if(count==1)
				cout<<s[i-1];
			else
				cout<<s[i-1]<<count;		
			count=0;
			selectedCharacter=s[i];
			count++;
		}
	}
}
