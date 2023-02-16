#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,num;
	num=0;
	cin>>n;
	int c[2][n];
	bool b[2][n];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>c[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			if(c[i][j]==1){
				num=num+3;
			}
			if(c[i][j]==1&&c[i][j+1]==1&&c[i+1][j]){
				num=num-4;
			}
			else if(c[i][j]==1&&c[i][j+1]==1){
				num=num-2;
			}
			
		}
	}
	cout<<num;
	return 0;
}

