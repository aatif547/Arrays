#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int pos)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==pos)
        {
            cout<<"The position "<<i;
        }
       
    }
    return -1;

}
int main()
{
    int arr[]={1,2,3,4,54,56,6,75,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos=54;
    linearsearch(arr,n,pos);
}