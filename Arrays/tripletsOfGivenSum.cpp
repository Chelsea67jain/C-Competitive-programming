#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > findTriplets(vector<int>arr, int n, int K) {
	cout<<"hi";
	  vector<vector<int> > answer;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j;k<n;k++){
				
				if((arr[i]+arr[j]+arr[k])==K){
					   vector<int> temp;
					  cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
					   temp.push_back(arr[i]);
					   temp.push_back(arr[j]);
					   temp.push_back(arr[k]);
                      return answer.push_back(temp);
				  
				}
			}
		}
	}

}

int main()
{
vector<int> arr;
int n,k;
cin>>n;
for(int i=0;i<n;i++){
	cin>>arr[i];
}

cin>>k;

 findTriplets(arr,n,k);
 
}
