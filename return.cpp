#include<iostream>
using namespace std;
int add(int a ,int b){
  return a + b;
 }
 double square(double x){
  return x * x;
 }
 bool isEven(int n){
  return n % 2 == 0;
 }
 int findMax(int a, int b){
  return (a > b) ? a : b;
 }
 int factorial(int n){
    int r = 1;
    for(int i = 1; i <= n; i++){
        r =r * i;}
    return r;
}
int main()
{
    cout<< add(5, 6) << endl;
    cout<< square(6) << endl;
    cout<< isEven(5) << endl;
    cout<< findMax(5, 6) << endl;
    cout<< factorial(5) << endl;
}