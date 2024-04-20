#include <iostream>
using namespace std;

int main(){

    cout<<"Hello World!"<<endl;
    int a=12; // 4 bytes
    cout<<a<<endl;
       
    char c='a'; // 1 bytes
    cout<<c<<endl;
    
     bool b=true; // 1 bit
    cout<<b<<endl;
    
    float f=34.5; // 8 bytes
    cout<<f<<endl;
    
    double d=12.34; // 8 bytes
    cout<<d<<endl;
    
    int size=sizeof(f);
    cout<<size<<endl;// 4 as we know that interger stores 4 bytes
    // 1 byte=8 bites
    
   return 0;
}
