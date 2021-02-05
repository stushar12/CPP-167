#include<bits/stdc++.h>
using namespace std;
	int bishu(int arr[],int n,int power)
	{   
	    sort(arr,arr+n);
        int sum[n+1];
        sum[0]=0;
        for(int i=0;i<n;i++)
        {
            sum[i+1]=arr[i]+sum[i];
        }
        int itr=upper_bound(arr,arr+n,power)-arr;
        return sum[itr];

    }
int main()
{
    int queries;
    cout<<"\nEnter the number of queries: ";
    cin>>queries;
    while(queries--)
    {
    int arr[]={1,2,3,4,5,6,7};
    int power;
    cout<<"\nEnter the power: ";
    cin>>power;
    int size=7;
    int c=bishu(arr,size,power);
    cout<<c<<endl;
    }
}