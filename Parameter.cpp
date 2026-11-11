#include<iostream>
using namespace std;
class student {
    public:
        int rollNo;
        string name;
        student() {
            rollNo = 0;
            name = "not assigned";
            cout<<"student object created"<<endl;
        }
};
int main() {
    student s1;
    student s2;
    cout<<s1.rollNo<<" "<<s2.name<<endl;
    return 0;
}