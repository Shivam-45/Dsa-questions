// Check if a string is a valid shuffle of two other strings
// Given two strings should be distinct.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s1,s2,result;
    cin>>s1>>s2>>result;

    if(result.length()!=(s1.length()+s2.length()))
        cout<<"No, not valid shuffle.";
    else {
        int f=0,i=0,j=0,k=0;
        while(k<result.length()){
            if(i<s1.length() && s1[i]==result[k]) i++;
            else if (j<s2.length() && s2[j]==result[k]) j++;
            else {
                cout<<"No";
                break;
            }
            k++;
        }
        if(i==s1.length() && j==s2.length()) cout<<"Yes";
    }

    return 0;
}
