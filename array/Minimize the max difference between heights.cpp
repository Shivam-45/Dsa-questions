//Minimize the maximum difference between heights
//K = 2, N = 4
//Arr[] = {1, 5, 8, 10}
//5 ; {3, 3, 6, 8}
//Valid for positive numbers only.

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main ()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    int min_ele,max_ele;
    int result=arr[n-1]-arr[0];

    for (int i=0;i<n;i++){
        if(arr[i]-k>=0){
            min_ele=min(arr[0]+k,arr[i]-k);
            max_ele=max(arr[i-1]+k,arr[n-1]-k);
            result=min(result,max_ele-min_ele);
        }
    }

    cout<<result;
    return 0;
}
