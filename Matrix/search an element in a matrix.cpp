// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

#include <iostream>
using namespace std;

int main ()
{
    int n,m,target;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    cin>>target;
    int a=0,b=m-1;
    bool ans=false;
    while (a<n && b>=0){
        if(arr[a][b]==target){
            ans=true;
            break;
        }
        arr[a][b]>target ? b-- : a++ ;
    }
    if (ans==true)
        cout<<"\ntrue";
    else
        cout<<"\nfalse";

    return 0;
}
