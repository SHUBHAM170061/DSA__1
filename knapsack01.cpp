// 0 1 knapsack recursive approach
#include <bits/stdc++.h>
using namespace std;

int knpsck(int w[],int v[],int n,int W){
    if(n==0 || W==0)return 0;
    
    if(w[n-1]>W)return knpsck(w,v,n-1,W);
    else 
    return max(v[n-1]+knpsck(w,v,n-1,W-w[n-1]),knpsck(w,v,n-1,W));
}



int main() {
    
int W=25;
int w[]={10,5,20,70,15};
int v[]={40,30,5,300,20};
int n=sizeof(w)/sizeof(w[0]);

cout<<knpsck(w,v,n,W)<<endl;

   

    return 0;
}
