#include<iostream>
#include<algorithm>
using namespace std;
void largestelement(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"maxm"<<max;
    sort(arr,arr+n);
    cout<<"second largest"<<arr[1];

}

int main()
{
    int arr[]={3,5,3413,543,75,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    largestelement(arr,n);

}