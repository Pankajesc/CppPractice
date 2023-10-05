// convert integer to string and string to integer
#include<bits/stdc++.h>
using namespace std;
    int main(){
        int num=4215;
        string str=to_string(num);
        str+="1";
        cout<<str<<endl;
        cout<<str[1];// we can also access the value using indexes
        return 0;
    }