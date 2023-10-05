//reverse of a strig
#include<iostream>
 using namespace std;
   int main(){
       string str;
       string str_rev;
       cin>> str;
       for ( int i= str.size(); i>=0; --i){
         str_rev.push_back(str[i]);
       }
       cout<<str_rev;

   return 0;






   }


