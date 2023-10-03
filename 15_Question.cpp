#include<bits/stdc++.h>
   using namespace std;
     int main(){
        int N;
         cin>>N;
          int arr[N];
          for(int i=0; i<N; i++){
              cin>>arr[i];
          }
           int count=0;
          for(int i=0; i<N; i++){
            if(arr[i]<0){
                count++;
            }
          }
          cout<<count;
        return 0;
     }