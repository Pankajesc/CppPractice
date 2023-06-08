#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

      int myfun(int a, int b, int c , int d){
          if(a>b && a>c && a>d){
              return a;
          }
          else if (b>a && b>c && b>d){
              return b;
          }
          else if (c>a && c>b && c>d){
              return c;
          }
          else{
              return d;
          }
      }
      
int main() {
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
       int x= myfun(a, b, c, d);
        cout<<x;
    return 0;
}
