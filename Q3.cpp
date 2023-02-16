#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,ser,sum,d[5];
	cin>>n;
	bool a[5][n];
	char p[5][n];
	for(int i=0;i<5;i++){
		for(int j=0;j<n;j++){
			cin>>p[i][j];
			
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<n;j++){
			if(p[i][j]=='Y'&&p[i][j+1]=='Y'){
				ser=i;
			}
			
			
	}
		cout<<ser<<",";
	}
    cout<<ser;
	
	return 0;
}
