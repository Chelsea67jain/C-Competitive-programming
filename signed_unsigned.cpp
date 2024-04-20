/* default int is signed i.e it can take both positive and negative number
 unsigned int can only take positive numbers from the range 0 to 2^31-1
*/
#include <iostream>
using namespace std;

int main(){
	 int a=123;
	 cout<<a<<endl;
	 unsigned b=-123;
	 cout<<b<<endl;/* we will have some garbage value here after taking the 2's complement
	 of 123 because the unsigned can only take positive value */
	 
	
	
}
