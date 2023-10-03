#include<bits/stdc++.h>
  using namespace std;
    int main(){
           int num;
           cin>>num;
            int sum=0;
            int i=0;
           while(num!=0){
               int lastDigit=num%10;
                  sum=sum+lastDigit* pow(2, i);
                  num/=10;
                  i++;
               }
           cout<<sum;

        return 0;
    }