// Kadane's Algorithm
// N = 5
// arr[] = {1,2,3,-2,5}
// 9

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >>arr[i];

    int currmax=arr[0],prevmax=arr[0];
    for (int i=1;i<n;i++){
        prevmax=max(arr[i]+prevmax,arr[i]);
        currmax=max(currmax,prevmax);
    }
    cout<<currmax;

    return 0;
}
