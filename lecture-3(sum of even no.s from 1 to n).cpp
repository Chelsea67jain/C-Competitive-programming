#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0,number=2;
	while(number<=n){
		sum=sum+number;
		number=number+2;
	}
	cout<<sum<<endl;
}
