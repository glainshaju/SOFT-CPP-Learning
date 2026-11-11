#include<iostream>
using namespace std;
double add(double a ,double b){
  return a + b;
 }
 double subtract(double a , double b){
  return a-b;
 }
 double multiply (double a , double b){
  return a * b;
 }
 double divide(double a,double b){
    if (b==0)
    {
        cout<<"Cannot divide by Zero";
        return 0;
    }
  return a/b;
 }
int main()
{
    double a,b;
    char op;
    cin>>a>>op>>b;
    switch(op)
    {
        case'+': cout<<"5 + 6 is "<< add(5, 6)
                break; 
        case'-':cout<<"6 - 2 is "<< subtract(6,2)
                break;
        case'*':cout<<"5 x 6 is "<< multiply(5,6)
                break;
        case'/':cout<<"17 / 5 is "<< divide(17,5)
                break;
    }
}