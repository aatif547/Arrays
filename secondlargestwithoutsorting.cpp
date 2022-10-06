#include<iostream>
using namespace std;
void secondlargest(int arr[],int n)
{
    int max=arr[0];
    int secondlargest;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
        
            secondlargest=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>secondlargest)
        {
            secondlargest=arr[i];
        }
    }
    if(secondlargest==max)
    {
        cout<<"no second largest";
    }
    else
    cout<<"Second Largest Element"<<secondlargest<<"largest"<<max;
    
    

}
int main()
{
    int arr[]={2,2,2,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    secondlargest(arr,n);
}