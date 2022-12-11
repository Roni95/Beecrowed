#include <iostream>

using namespace std;

int main()
{
    while(true){
        long long int n,m=0,j=0;
        cin>>n;
        if(n==0)
            return 0;
        while(n--){
            int value;
            cin>>value;
            if(value==0) m++;
            else j++;
        }
        cout<<"Mary won "<<m<<" times and John won "<<j<<" times"<<endl;
    }
    return 0;
}
