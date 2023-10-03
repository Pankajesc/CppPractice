/*Andrew is a stock trader who trades in N selected stocks. He has 
calculated the relative stock price changes in the N stocks from the 
previous day stock prices*/
#include<bits/stdc++.h>
 using namespace std;
   int main(){
      int numOfStocks, valuek;
      cin>> numOfStocks >> valuek;
      int stock[106];
        for(int i=0; i<numOfStocks; i++){
             cin>>stock[i];
        }
         sort(stock, stock+numOfStocks);
         for(int i=0; i<numOfStocks; i++){
               cout<<stock[i]<<" ";
         }
         cout<<endl;
        cout<<stock[valuek-1];
    return 0;
   }