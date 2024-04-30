/*
  Bitwise operators: &,|, ~, ^, <<(left shift),>>(right shift)

*/

#include<iostream>
using namespace std;

int main(){
	int a=4,b=6;
	cout<<"a&b:"<< (a&b) <<endl;//4
	cout<<"a|b:"<<(a|b)<<endl;//6
	cout<<"~a:"<<(~a)<<endl;//-5
	cout<<"a^b:"<<(a^b)<<endl;//2
	
	cout<<(17>>1)<<endl;//8
	cout<<(17>>2)<<endl;//4
	
	cout<<(21<<1)<<endl;//42
	cout<<(21<<2)<<endl;//84
	
	
}

