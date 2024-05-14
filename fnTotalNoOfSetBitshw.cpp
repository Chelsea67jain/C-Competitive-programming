#include<iostream>
using namespace std;

int setBits(int n){
	int count=0;
	 while(n!=0){
	 	  if(n&1){
	 	  	count++;
	 	  
		   }
		   n=n>>1;
		  
	 }
	 cout<<count<<endl;
	 return count;

}




int main(){
	int a,b;
	cin>>a>>b;
int total=setBits(a)+setBits(b);
	cout<<"Total no of set bits are:"<<total<<endl;
}

