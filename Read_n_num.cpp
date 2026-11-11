#include<iostream>
using namespace std;
int main()
{
int sum = 0 ;
int n = 5;
double avg;
int arr[5]={10,20,15,35,25};
for(int i=0;i<n;i++)
 {
    sum+=arr[i];
    avg = sum/n;
 }
 cout<<"sum is "<<sum<<endl;
 cout<<"average is "<<avg;
return 0;
}
