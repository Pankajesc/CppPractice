#include<bits/stdc++.h>
 using namespace std;
   //this is the for upper case
   string toUpperCase(string str){
    for(int i=0; i<str.size(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    return str;
   }
//for lower case 
       string toLowerCase(string str){
       for(int i=0; i<str.size(); i++){
           if(str[i]>='A' && str[i]<='Z'){
              str[i]+=32;
           }
       }
       return str;
       }

   int main(){
    string str="abc";
    string result=toUpperCase(str);
     cout<<result<<endl;
     string resultLower=toLowerCase(str);
     cout<<resultLower;
    return 0;
   }