#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
	long long SHU;
	SHU=0;
	cin>>t;
	string P[t];
	for(int i=0;i<t;i++){
		cin>>P[i];
	}
	for(int i=0;i<t;i++){
		if(P[i]=="Poblano"){
			SHU=SHU+1500;
		}
		else if(P[i]=="Miraso"){
			SHU=SHU+6000;
		}
		else if(P[i]=="Serrano"){
			SHU=SHU+15500;
		}
		else if(P[i]=="Cayenne"){
			SHU=SHU+40000;
		}
		else if(P[i]=="Thai"){
			SHU=SHU+75000;
		}
		else if(P[i]=="Habanero"){
			SHU=SHU+125000;
		}
		
	}
	cout<<SHU;
	return 0;
}
