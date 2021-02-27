// Given an array of size N containing only 0s, 1s, and 2s;
// sort the array in ascending order.

#include <iostream>
using namespace std;

int main ()
{
    int size;
    cin>>size;

    int arr[size];
    for (int i=0;i<size;i++)
        cin>>arr[i];

    int a=0,b=0,c=0; //for 0, 1 and 2 resp.
    for (int i=0;i<size;i++){
       if(arr[i]==0)
        a++;            //2
       if(arr[i]==1)
        b++;            //3
       if(arr[i]==2)
        c++;            //1
    }

    for (int i=0;i<a;i++){
        arr[i]=0;
    }
    for (int i=0;i<b;i++){
        arr[i+a]=1;
    }
    for (int i=0;i<c;i++){
        arr[i+a+b]=2;
    }

    for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return 0;
}
