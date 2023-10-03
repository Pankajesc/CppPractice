#include<bits/stdc++.h>
   using namespace std;
               int FindingSecurityKey(long int n){
                int a[10]={0};
                  while(n){
                       a[n%10]++;
                       n/=10;
                  }
                  int securityKey=0;
                  for(int i=0; i<10; i++){
                    if(a[i]>1){
                        securityKey++;
                    }
                  }
                  if(securityKey==0){
                    return -1;
                  }
                    return securityKey;
                    
               }
    int main(){
          long int n;
          cin>>n;
            int ans=FindingSecurityKey(n);
            cout<<ans;
    return 0;
    }