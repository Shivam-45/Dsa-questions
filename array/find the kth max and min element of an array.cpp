//Find the "Kth" max and min element of an array
//O(n)

#include <iostream>
using namespace std;

int main()
{
    int size,k;
    cout<<"Enter size and the value of k\n";
    cin>>size>>k;
    int arr[size];
    for (int i=0;i<size;i++)
        cin>>arr[i];

    for (int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    cout<<k<<"th min and max elements are "<<arr[k-1]<<
    " and "<<arr[size-k]<<" resp.\n";

    return 0;
}
