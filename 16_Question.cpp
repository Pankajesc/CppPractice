#include<bits/stdc++.h>
   using namespace std;
      int main(){
        int data;
        cin>>data;
            int rev=0;
         while(data !=0){
              int lastDigit=data%10;
                  rev=rev*10+lastDigit;
                  data/=10;
         }
          cout<<rev;
        return 0;
      }