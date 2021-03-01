// Find the duplicate elements in an array range [1,n].
// nums = 1 3 4 2 2 ; Output: 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for (int i=0;i<n;i++)
        cin>>arr[i];

    for (int i=0;i<n;i++){
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }

    for (int i=0;i<n;i++){
    if (arr[i]/n>1){
        cout<<i<<endl;
        }
    }

    return 0;
}
