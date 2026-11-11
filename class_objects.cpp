#include<iostream>
using namespace std;
class student{
    public:
        int RollNo;
        string name;
        void display(){
            cout<<"Roll Number is : "<<RollNo<<endl<<"Student name : "<<name<<endl;
        }
    };
int main()
{
    student s1;
    student s2;
    s1.RollNo = 20;
    s1.name = "jithu";
    s2.RollNo = 10;
    s2.name = "faris";
    s1.display();
    s2.display();
 return 0;
}