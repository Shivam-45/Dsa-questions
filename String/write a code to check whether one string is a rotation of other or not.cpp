#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string str3=str1+str1;

    if(str1.length()!=str2.length()){
        cout<<"false";
    }
    else if (str3.find(str2)!=string ::npos){
        cout<<"true";
    }
    return 0;
}
