#include <iostream>
using namespace std;

struct student
{
    int stu_id;
    char sname[20];
    float marks;
    char grade;
   void get(){
     cout<<"enter stu information"<<endl;
      cout<<"enter stu id"<<endl;
      cin>>stu_id;
     cout<<"enter snamse"<<endl;
     cin>>sname;
     cout<<"enter stu marks"<<endl;
     cin >>marks;
     cout<<"enter stu grade"<<endl;
     cin>>grade;

    }
       void put(){
     cout<<"the below are stu information"<<endl;
     cout<<"enter stu id is "<<stu_id<<endl;
     cout<<"enter snamse is"<<sname<<endl;
     cout<<"enter stu marks is"<<marks<<endl;
       cout<<"enter stu grade is"<<grade<<endl;

}
};
int main() {
    student s;
    s.get();
    s.put();

    return 0;


}

