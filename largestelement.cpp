#include<iostream>
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
    cout<<"Maxm element"<<max<<endl;
}
int main()

{
    int arr[]={3,5,13,543,75,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    largestelement(arr,n);
    cout<<"The largest element of array:-";
}