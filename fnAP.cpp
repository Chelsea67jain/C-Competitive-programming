#include<iostream>
using namespace std;
int calculateAP(int n){
   int ap=(3*n)+7;
   return ap;
}

int main(){
	int n;
	cin>>n;
	int a=calculateAP(n);
	cout<<"The arithmetic progression of a number is:"<<a<<endl;
	
}
