#include<iostream>
using namespace std;

int main(){
	int amount;
	cout<<"Enter the valid amount:"<<endl;
	cin>>amount;
	cout<<amount;
	int count_of_hundred_notes;
	int count_of_fifty_notes=0;
	int count_of_twenty_notes=0;
	int count_of_one_notes=012;
	int remainder=amount%100;
	
int total;

			count_of_hundred_notes=(amount-remainder)/100;
			if(remainder>0 ){
				count_of_fifty_notes=remainder/50;
	
     total=(count_of_hundred_notes*100)+(count_of_fifty_notes*50);// 1300
    
     if(total==amount){
     		count_of_twenty_notes=0;
     	count_of_one_notes=0;
	 }
	 else{
	 	count_of_twenty_notes=remainder/20;
	 	total=(count_of_hundred_notes*100)+(count_of_fifty_notes*50)+(count_of_twenty_notes*20);
	 	 count_of_one_notes=amount-total;
	 }
     
}

	
  
	
	  int num=1;
	  cout<<endl;
	  switch(num){
	  	case 1: cout<<"Number of hundred rupees notes are:"<< count_of_hundred_notes<<endl;
	  	cout<<"Number of fifty rupees notes are:"<< count_of_fifty_notes<<endl;
	  	cout<<"Number of twenty rupees notes are:"<< count_of_twenty_notes<<endl;
	  	cout<<"Number of one rupees notes are:"<< count_of_one_notes;
	  	break;	
	  }
	  
	  
	  
	  
	  
	  
	  
}


