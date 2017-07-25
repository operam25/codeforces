#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i = 0;
	string sa,sb;
	while(i<n){
		while(i<n && s[i] != '('){
			sa += s[i];
			i++;
		}
		sa += '_';
		i++;
		while(i<n && s[i] != ')'){
			sb += s[i];
			i++;
		}
		sb += '_';
		i++;
	}
	int x = sa.length(),len = 0;
	i = 0;
	while(i<x){
		int temp = 0;
		while(i<x && sa[i] != '_'){
			i++;
			temp++;
		}
		i++;
		if(temp > len)
			len = temp;
	}
	x = sb.length(),i = 0;
	int count = 0;
	while(i<x){
		int temp = 0;
		while(i<x && sb[i] != '_'){
			i++;
			temp++;
		}
		i++;
		if(temp > 0)
			count++;
	}
	cout<<len<<" "<<count;
}