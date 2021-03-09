// Rotate matrix by 90 degree. O(n*n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=i;j<m;j++) {
            if(i!=j) {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m/2;j++){
            swap(arr[i][j],arr[i][m/2+1-j]);
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}
