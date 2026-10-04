#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, digit, sum = 0, temp,count = 0;
    cout<<"Enter a number: ";
    cin>>n;
    temp = n;
    int num=n;
    while(num != 0)
    {
      count++;
        num = num / 10;
    }
    num=n;
    while(num != 0)
    {
        digit = num % 10;
        sum= sum + pow(digit, count);
        num = num/10;
    }
    if(sum == temp)
        cout<<temp<<" is an Armstrong number."<<endl;
    else
        cout<<temp<<" is not an Armstrong number."<<endl;
    return 0;
}