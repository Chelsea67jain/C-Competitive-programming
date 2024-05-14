#include<iostream>
using namespace std;

int main(){
	 int num=1;
	 char ch='1';
	switch(ch){
	  case 1: cout<<"First";
	  break;
	  case '1':switch(num){
	  case 1:cout<<"Number is: "<<num<<endl;
		break;
	  } 
	  break;
	  default: cout<<"It is a default case:"<<endl;	
	}
}
