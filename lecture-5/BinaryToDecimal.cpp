#include<iostream>
#include<math.h>
using namespace std;

int main(){
	 int n;
	 cin>>n;//1010
	 int digit,ans=0,i=0;
	 while(n!=0){
	 	 digit=n%10;//0 1 0 1
	 	  ans=ans+digit*pow(2,i);
	 	  n=n/10;
	 	  i++;
	 }
	 cout<<ans<<endl;
	 
}


