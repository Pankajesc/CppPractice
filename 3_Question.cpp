//A data compression software utilizes various steps to compress a string of 
#include<bits/stdc++.h>
   using namespace std;
        int  countChar(string str){
                  int count=0;
                  for(int i=0; i<str.size(); i++){
                      for(int j=0; j<i; j++){
                        if(str[i]==str[j]){
                            count++;
                        }
                      }
                  }
                  return count;
        }
        
     int main(){
            string str="Alphaadida";
           int counti= countChar(str);
           int nonRepeatingCharNo=str.size()-counti;
           cout<<counti;
        return 0;
     }