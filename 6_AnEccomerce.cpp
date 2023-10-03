//An e –commerce company is planning to give a special discount on all its 
//product to its customers for the Christmas holiday. The company 
//possesses data on its stock of N product types
#include<bits/stdc++.h>
  using namespace std;
      int main(){
        int NumberOfProducts, Discount, count=0;
        cin>> NumberOfProducts >> Discount;
        int order[106]={};
           for(int i=0; i<NumberOfProducts; i++){
            cin>>order[i];
                if(order[i]>0 && Discount%order[i]==0){
                    count++;
                }   
             }
             cout<<count;
        return 0;
      }