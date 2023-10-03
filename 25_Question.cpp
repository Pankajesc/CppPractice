#include<bits/stdc++.h>
 using namespace std;
             char findERP(int ERP){
                if(ERP>=30 && ERP<=50){
                 return 'D';
        }
            else if(ERP>=51 && ERP<=60){
                 return 'C';
        }
             else if(ERP>=61 && ERP<=80){
                 return 'B';
        }         
        if(ERP>=81 && ERP<=100){
                 return 'A';
        }
                 
             }
   int main(){
        int ERP;
        cin>>ERP;
        char ch= findERP(ERP);
        cout<<ch;
    return 0;
   }