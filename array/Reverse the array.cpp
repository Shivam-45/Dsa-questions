//Reverse the array
//O(n/2)

#include <iostream>
using namespace std;

int main ()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
        cin>>arr[i];

    //swap first n/2 element with last n/2 elements.
    for (int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }

    for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return 0;
}
