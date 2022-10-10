#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int arr[],int low,int high)
{
    
    while(low<high)
    {
       swap(arr[low],arr[high]);
       low ++ ;
       high--;
    }


}
int leftrotate(int arr[],int n,int d)
{

       //123456789// 2
       //891234567//
      reverse(arr,0,d-1);
      reverse(arr,d,n-1);
      reverse(arr,0,n-1);
    

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    leftrotate(arr,n,d);
}