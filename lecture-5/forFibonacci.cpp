/* Fibonacci series: 0,1,1,2,3,5,8,13,...
sum of the starting two no.s is equal to 3rd
0+1=1
1+1=2
1+2=3
2+3=5
*/

#include<iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 int a=0,b=1;
 cout<<a<<" "<<b;
 for(int i=1;i<=n-2;i++){
 	int nextNumber=a+b;
 	cout<<" "<<nextNumber;
 	a=b;
 	b=nextNumber;
 }
 
 
}
