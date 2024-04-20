/* 
Logical operators: This operator can be applied to various conditions.
&&, ||, !
&&(Logical AND): returns true if both of the operands are true else false
||(Logical OR): returns true if one of the operands are true
!(Logical NOT): is a unary operator that negate the value of a condition
*/ 

#include <iostream>
using namespace std;

int main(){
      int age=18;
      bool isStudent=true;
      
    if(age>=18 && isStudent){
    	cout<<"You are eligible to give vote"<<endl;
	}
	else{
		cout<<"You are not eligible"<<endl;
	}
	
	int num=7;
	if(num<0 || num>10 ){
		cout<<"Number is outside the range of 0 to 10"<<endl;
	}
	else{
			cout<<"Number is between the range of 0 to 10"<<endl;
	}
	
	bool isLoggedIn=true;
	if(!isLoggedIn)
	{
		cout<<"Please login to buy the udemy course"<<endl;
	}
	else{
		cout<<"Successfully Logged In...";
	}
}


