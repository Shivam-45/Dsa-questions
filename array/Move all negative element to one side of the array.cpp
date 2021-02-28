//Move all negative element to one side of the array.

#include <iostream>
using namespace std;

int main ()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
        cin>>arr[i];

    int point=0;
    for (int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[point++]);
        }
    }

    for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return 0;
}
