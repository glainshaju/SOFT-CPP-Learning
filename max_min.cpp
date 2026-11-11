#include<iostream>
using namespace std;
int main()
{
int arr[5]={10,20,15,35,25};
int n = 5;
int max = arr[0];
int min = arr[0];
for(int i = 1;i<n;i++)
 {
  if(arr[i] > max) max =arr[i];
  if(arr[i] < min) min = arr[i];
 }
 cout<<"max is "<<max<<endl;
 cout<<"min is "<<min;
return 0;
}