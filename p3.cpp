//c++ program to count number of ones in a given array
#include<iostream>
using namespace std;
int countones(bool arr[],int low,int high)
{
    if(high>=low)
    {
        int mid=low+(high-low)/2;
        if((mid==high||arr[mid+1]==0)&&(arr[mid]==1))
        return mid+1;
        if(arr[mid]==1)
        return countones(arr,(mid+1),high);
        return countones(arr,low,(mid-1));
    }
    return 0;
    }
int main()
{
    bool arr[]={1,1,1,1,0,0,0};
    int n=sizeof(arr);
    cout<<"count of 1's n given array : "<<countones(arr,0,n-1);
    return 0; 
}
