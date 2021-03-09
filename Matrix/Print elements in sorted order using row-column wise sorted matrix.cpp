//Print elements in sorted order using row-column wise sorted matrix.
//Time : O(n*n*log n)

// N = 3
// Matrix = 1 5 3 2 8 7 4 6 9
// Output = 1 2 3 4 5 6 7 8 9

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int sorted[n*n],p=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
            sorted[p++]=arr[i][j];
        }
    }
    sort(sorted,sorted+(n*n));

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr[i][j]=sorted[n*n-p--];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
