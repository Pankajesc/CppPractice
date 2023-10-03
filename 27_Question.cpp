#include<bits/stdc++.h>
  using namespace std;
      int main(){
          int integer; 
          cin>>integer;
          int key;
          cin>>key; 
          
          int count=0;
          while(integer!=0){
              int lastDigit=integer%10;
              if(lastDigit==key)
              count++;
              integer/=10;

          }
           cout<<count;
               
        return 0;
      }