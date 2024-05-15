#include<iostream>
using namespace std;

int sqrtInteger(int n){// 7 0 to 7
	int s=0;
	int e=n;
     long long int mid=s+(e-s)/2; //0+7/2=3
     long long int ans=-1;
	while(s<=e){
	long long int square=mid*mid;
		if(square==n){
			return mid;
		}
		if(square<n){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

double morePrecision(int n,int precision,int tempSol){
	cout<<"hi";
	int factor=1;
	int ans=tempSol;
	for(int i=0;i<precision;i++){
		factor=factor/10;
		for(double j=tempSol;j*j<n;j=j+factor){
			ans=j;
			
		}
	}
	
	return ans;
}

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int tempSol=sqrtInteger(n);
	int ans=morePrecision(n,3,tempSol);
	cout<<"The sqrt of given integer is: "<<ans<<endl;
	
}
