#include<bits/stdc++.h>
using namespace std;



int lcs(string str1,string str2,int n,int m,vector<vector<int>> dp){
    if (n==0|| m==0)return 0;
    if(str1[n-1]==str2[m-1]){
        return dp[n][m]=1+lcs(str1,str2,n-1,m-1,dp);
    }
    return dp[m][n]=max(lcs(str1,str2,n,m-1,dp),lcs(str1,str2,n-1,m,dp));

}

int main(){

    string str1="ABCDGH";
    string str2="ABEDFHR";

    int n=str1.size();
    int m=str2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));// all cells as

    cout<<lcs(str1,str2,n,m,dp)<<endl;

}