#include<iostream>
using namespace std;
int main()
{
 int a =5;
 int & r =a;
 r = 9;
 cout<<a;
}