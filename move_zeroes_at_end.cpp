#include<iostream>
using namespace std;
void movezero(int arr[],int n)
{
    int temp[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp[k]=arr[i];
            k++;
        }
        
    }
    while(k<n)
        {
            temp[k]=0;
            k++;
        }
    cout<<"move zero at enf";
    for(int i=0;i<k;i++)
    {
        cout<<temp[i]<<" ";
    }

   
}
int main()
{
    int arr[]={1,0,3,0,2,0,0,7,4,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    movezero(arr,n);
    
}