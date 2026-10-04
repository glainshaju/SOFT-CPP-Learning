#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the last number: ";
    cin>>a;
    cout<<"The Prime numbers are : ";
    for (int i = n; i <= a; i++) 
        { 
           if(i<=1) continue;
           int prime = 1;
     for(int j = 2; j*j<= i; j++)
    {
        if(i % j == 0)
        {
            prime = 0;
            break;
        }
    }
            if(prime == 1)
            {
                cout<<i<<" ";
            }
        }
    cout<<endl;
    return 0;
}