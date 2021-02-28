//Find the union and intersection of two sorted array.
// input :   5 4
//           2 4 5 6 12
//           4 6 7 12
// output :  6 ; 2 4 5 6 7 12
//           3 ; 4 6 12


//#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main ()
{
    int n,m;
    cout<<"Enter size 1 and size 2 : ";
    cin>>n>>m;
    set<int> s;

    int arr1[n],arr2[m];
    for (int i=0;i<n;i++){
        cin>>arr1[i];
        s.insert(arr1[i]);
    }
    for (int i=0;i<m;i++) {
        cin>>arr2[i];
        s.insert(arr2[i]);
    }
    cout<<s.size()<<endl;
    cout<<(n+m-s.size());

    return 0;
}
