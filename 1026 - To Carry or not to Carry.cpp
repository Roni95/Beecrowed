#include <iostream>

using namespace std;

int main()
{
    unsigned long long int a,b;
    while(cin>>a>>b){
        unsigned long long int c = a^b;
        cout<<c<<endl;
    }
    return 0;
}
