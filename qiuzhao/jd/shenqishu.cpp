#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
const int N=2010;
const int mod=1e9+7;
int dig[10];
int dp[44];
int work(int x){
  int cnt=0,sum=0;
  while(x){
    dig[cnt++]=x%10; x/=10;
    sum+=dig[cnt-1];
  }
  if(sum%2) return 0;
  sum/=2;
  memset(dp,0,sizeof(dp));
  dp[0]=1;
  for(int i=0;i<cnt;i++){
    for(int j=sum;j>=dig[i];j--){
      if(dp[j-dig[i]]) dp[j]=1;
    }
  }
  return dp[sum];
}
int main(){
  int l,r;
  scanf("%d%d",&l,&r);
  int ans=0;
  for(int i=l;i<=r;i++){
    ans+=work(i);
  }
  printf("%d\n",ans);
}
