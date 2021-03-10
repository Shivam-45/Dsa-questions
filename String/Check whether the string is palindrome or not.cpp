#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int a=1;
    for (int i=0;i<str.length()/2;i++){
        if(str[i]!=str[str.length()-i-1]){
            a=0;
            break;
        }
    }
    cout<<a<<endl;

    return 0;
}
