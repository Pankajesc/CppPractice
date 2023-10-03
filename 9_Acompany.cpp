/*A company wishes to devise an order confirmation procedure. They plan to 
require an extra confirmation instead of simply auto-confirmation the order 
at the time it is placed*/
#include<bits/stdc++.h>
  using namespace std;
            int OTPVerification(int OrderId){
                     int prod=1;
                  while(OrderId!=0){
                      int lastDigit=OrderId%10;
                        prod=prod*lastDigit;
                          OrderId/=10;
                  }
                  return prod;
            }
    int main(){
            int OrderId;
            cin>>OrderId;
          int ans=  OTPVerification(OrderId);
          cout<<ans;
    }