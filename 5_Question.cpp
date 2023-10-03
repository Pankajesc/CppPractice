//convert decimal to binary
#include<bits/stdc++.h>
  using namespace std;
           string DecimalToBinary(int num){
                 string str=" ";
                while(num!=0){
                    int remainder =num%2;
                        str=to_string(remainder)+str;
                        num=num/2;
                }
                return str;
           }
   int main(){
             int num;
             cin>>num;
             string strOutput=DecimalToBinary(num);
             cout<<strOutput;
    return 0;
   }