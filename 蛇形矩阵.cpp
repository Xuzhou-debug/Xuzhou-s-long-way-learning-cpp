#include<iostream>
 
using namespace std;
 
int a[10][10];
 
int main(){
 
	int n,s=0,v=0;
 	cin >> n;
 	for(int i=0;;i++){
 		for(int j = i; j < n - i; j++){
 			a[i][j]=++s;
 			v++;
 			}
 		for(int j = 1 + i; j < n - i; j++){
 			a[j][n-i-1]=++s;
 			v++;
 		}
 		for(int j = 1+i; j < n - i; j++){
 			a[n-i-1][n-j-1]=++s;
 			v++;
 		}
 		if(v==n*n) 
			break; 
		for(int j = 1 + i; j < n-1-i; j++){
 			a[n-j-1][i]=++s;
 			v++;
 		}
 	}
 	for(int i = 0; i < n; i++){
 		for(int j = 0; j < n; j++){
 			cout << a[i][j] << " ";
 	}
 	cout<<endl;
 	}
 	return 0;
 
}