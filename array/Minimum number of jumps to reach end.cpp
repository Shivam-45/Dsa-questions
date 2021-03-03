//N=11
//arr= 1 3 5 8 9 2 6 7 6 8 9
//Output: 3

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];

    /*
    jump is to count the jumps.
    step will take the maximum step it can take.
    maxReach is max reach from starting.
    */

    int jump=1,step=arr[0],maxR=arr[0];
    if (n==1) { cout<<"0"; return 0; }
    else if (arr[0]==0) { cout<<"-1"; return 0;}
    else
    {
    /*
        when we reach end of array return jump.
        max reach is maximum of arr[i]+i,maxR.
        step will decrease.

        at last step = max reach - i.
    */
        for (int i=1;i<n;i++)
        {
            if(i==n-1){ cout<<jump<<" "; return 0;}
            maxR=max(maxR,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxR){
                    cout<<"-1"; return 0;
                }
                step=maxR-i;
            }
        }
    }

    return 0;
}

