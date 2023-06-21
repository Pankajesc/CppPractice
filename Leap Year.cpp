#include<iostream>
using namespace std;
int main ()
{
    int year;
    cin >>year;
    
    if(year%4==0){
        cout<<"this is leap year";
    }
    else{
        cout<<"this is not leap year";
        
    }
    
    return 0;
}
