#include<bits/stdc++.h>
  using namespace std;
              
   int main(){
      int N;
      cin>>N;
       int sum=0;
          
          while(N!=0){
            int lastDigit=N%10;
             if(lastDigit==2 || lastDigit==3 ||lastDigit==5 ||lastDigit==7){
                 sum=sum+lastDigit;
             }
             N/=10;
          }

          cout<<sum;

    return 0;
   }