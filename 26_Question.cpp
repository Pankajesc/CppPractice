#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
      cin>>a[i];
    int p1=0, p2= n-1;
    
    while(p1 < p2){
        
        while(a[p1]%2 == 0 and p1<p2)
           p1++;
        
        while(a[p2]%2 != 0 and p1<p2)    
           p2--;
        
        if(p1 < p2){
            swap(a[p1], a[p2]);
            p1++;
            p2--;
        }
    }
    for(int i=0; i<n; i++)
     cout<<a[i]<<" ";
    return 0;
}