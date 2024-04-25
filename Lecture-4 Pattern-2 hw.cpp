/*  3 2 1  
    3 2 1 
    3 2 1   
   here n=3=row  j i.e column number starts with 1 
   so j will go from 1 to 3 i.e 1 to n so we simply have to print n-j+1
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
			cout<<n-j+1<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}
