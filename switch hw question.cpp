#include<iostream>
using namespace std;

int main(){
	int amount;
	cout<<"Enter the valid amount:"<<endl;
	cin>>amount;
	cout<<amount;
	int count_of_hundred_notes;
	int count_of_fifty_notes;
	int count_of_twenty_notes;
	int count_of_one_notes;
	int remainder=amount%100;
	
	count_of_hundred_notes=(amount-remainder)/100;
	count_of_fifty_notes=remainder/50;
	count_of_twenty_notes=remainder/20;
	count_of_one_notes=remainder/50;
	
	  int num=1;
	  
	  switch(num){
	  	case 1: cout<<"Number of hundred rupees notes are:"<< count_of_hundred_notes;
	  	cout<<"Number of fifty rupees notes are:"<< count_of_fifty_notes;
	  	cout<<"Number of twenty rupees notes are:"<< count_of_twenty_notes;
	  	cout<<"Number of one rupees notes are:"<< count_of_one_notes;
	  	break;	
	  }
	  
	  
	  
	  
	  
	  
	  
}


