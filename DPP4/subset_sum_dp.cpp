#include<bits/stdc++.h>
using namespace std;

bool sub_sum(int arr[],int n,int sum,vector<vector<int>>dp){
int dp[sum+1][n+1];
for(int i=0;i<=sum;i++){
	 for(int j=0;j<=n;j++){
	    if(i==0){
	        dp[i][j]=1;
	            }
            
        else if(j==0){
	         dp[i][j]=0;
	            }
        else if(i>=arr[j-1]){
	        dp[i][j] = dp[i][j-1] | dp[i-arr[j-1]][j-1];
	            }
        else{
	        dp[i][j] = dp[i][j-1];
	            }
	    }
}
}
int main(){
int arr[]={5,6,9,7,5,3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<sub_sum(arr,n,sum,dp)<<endl;

	   
	

}