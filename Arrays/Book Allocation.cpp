#include <bits/stdc++.h> 
bool isPossible(vector<int> &pages,int n,int b,int mid){
   int studentCount=1;
   int pageSum=0;
   for(int i=0;i<n;i++){
	   if(pages[i]+pageSum<=mid){
        pageSum=pages[i]+pageSum;
	   }
	   else{
		   studentCount++;
		   if(studentCount>b || pages[i]>mid){
			   return false;
		   }
		   pageSum=pages[i];
	   }
   }
   return true;
}

int allocateBooks(vector<int> &pages, int n, int b)
{
	int s=0;
	int sum=0;
	for(int i=0;i<n;i++){
sum+=pages[i];
	}
	int e=sum;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(isPossible(pages,n,b,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
