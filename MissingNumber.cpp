#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,0,4,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
     int sum=0;
    for(int i=0;i<n;i++)
    {
       
        sum+=arr[i];
    }
    int nat=0;
    nat=(n*(n+1))/2;
    int missing=0;
    missing=(nat-sum);
    cout<<"Missing number "<<missing;
    
}