#include<iostream>
using namespace std;
int main()
{
    int n, prime = 1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime == 1)
        cout<<"The number is prime."<<endl;
    else
        cout<<"The number is not prime."<<endl;
    return 0;
}