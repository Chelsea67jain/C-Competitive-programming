/*  1 2 3 
    1 2 3  
    1 2 3  
   here n=3=row  j i.e column number starts with 1 and we simply have to print the value of j
   so j will go from 1 to 3 i.e 1 to n
    */

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1;// i is row number
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<j<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}
