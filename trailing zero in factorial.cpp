//traliling zero in factorial

#include<iostream>
   using namespace std;
       int gcd(int a , int b){

           if(b==0){

            return a;
           }
          else{

            return gcd(b, a%b);
          }

       }
       int main() {
           int x= gcd(10, 6);
  cout <<x;
          return 0;
    }
