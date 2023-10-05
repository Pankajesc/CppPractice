#include <iostream>
using namespace std;

class emp
{
private:
    int id;
    char name[20];
    float sal;
public:
    void getsal()
    {
        cout<<"employee id, name and sal";
        cin>>id>>name>>sal;

    }
    void gelpaisa(){
        cout<<id<<name<<sal;


    }
};
int main () {
    emp f;
    f.getsal();
    f.getpaisa();


}


     return 0;
}
