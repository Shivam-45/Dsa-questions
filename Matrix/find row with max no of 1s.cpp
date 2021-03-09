// Maximum number of 1s in a row-wise sorted array. O(n+m)

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            cin>>arr[i][j];
    }

    int j=m-1,ans=-1;
    for (int i=0;i<n;i++){
        while(j>=0){
            if(arr[i][j]==1){
                j--;
                ans=i;
            }
            else {
                break;
            }
        }
    }
    cout<<"ans"<<ans;

    return 0;
}
