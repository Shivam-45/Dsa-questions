/* 2d array Spiral order printing

input : 5 6

1  5  9  7  11 10
4  6  8  12 14 16
15 19 17 13 20 0
-1 12 56 34 35 78
32 31 35 46 60 89

*/

#include <iostream>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)
            cin>>arr[i][j];
    }

    //spiral order print
    int rowstart=0,colstart=0,rowend=n-1,colend=m-1;

    while (rowstart<=rowend || colstart<=colend) {

        //for row start
        for (int col=colstart;col<=colend;col++)
            cout<<arr[rowstart][col]<<" ";
        rowstart++;

        //for col end
        for (int row=rowstart;row<=rowend;row++)
            cout<<arr[row][colend]<<" ";
        colend--;

        //for row end
        for (int col=colend;col>=colstart;col--)
            cout<<arr[rowend][col]<<" ";
        rowend--;

        //for col start
        for (int row=rowend;row>=rowstart;row--)
            cout<<arr[row][colstart]<<" ";
        colstart++;
    }

return 0;
}
