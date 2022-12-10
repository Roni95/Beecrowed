#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s= a[0];
    int sol = 1;
    for(int i=1;i<n;i++){
        if(s>a[i]){
            s= a[i];
            sol = i+1;
        }
    }
    cout<<sol<<endl;
    return 0;
}
