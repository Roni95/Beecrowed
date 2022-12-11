#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int l= text.length();
    if(l<=140)
        cout<<"TWEET"<<endl;
    else
        cout<<"MUTE"<<endl;

    return 0;
}
