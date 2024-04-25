
/*  
i=1   1 
i=2   2 3
i=3   3 4 5 
i=4   4 5 6 7 
we can observe that the row starts with row number and the no. of column in each row
depends on the row number so for row=1 col=1  
for row=2 col=2 that is for row 2 we are going to have 2 columns
so for solving this type of problem we will take a value=row;

*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row=1;
    while(row<=n){
    	int col=1;
    	int value=row;
    	while(col<=row){
    		cout<<value<<" ";
    		value=value+1;
    		col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
	
	
}


