//Cyclically rotate the array by one O(n).

#include <iostream>
using namespace std;

int main ()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
        cin>>arr[i];

    int store=arr[size-1];
    for (int i=1;i<size;i++){
        arr[size-i]=arr[size-i-1];
    }
    arr[0]=store;

    for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return 0;
}
