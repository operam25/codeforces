#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n,m,a;
	cin>>n>>m>>a;
	cout<<(n>(n/a)*a?(n/a)+1:(n/a))*(m>(m/a)*a?(m/a)+1:(m/a));
}