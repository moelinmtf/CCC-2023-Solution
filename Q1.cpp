#include <bits/stdc++.h>
using namespace std;
int main(){
	int p,c,f;
	cin>>p;
	cin>>c;
	f=50*p-10*c;
	if(p>c){
		f=f+500;
	}
	cout<<f;
	return 0;
}
