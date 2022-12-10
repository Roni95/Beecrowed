#include <iostream>

using namespace std;

int main()
{
    while(true){
        int c,p;
        cin>>c>>p;
        if(p==0 && c==0)
            return 0;
        int r = p-c;
        if(r>100){
            r=r-100;
            if(r-50==0 || r-20==0 || r-10==0 || r-5==0 || r-2==0)
                cout<<"possible"<<endl;
            else
                cout<<"impossible"<<endl;
        }
        else if(r>50){
            r=r-50;
            if(r-20==0 || r-10==0 || r-5==0 || r-2==0)
                cout<<"possible"<<endl;
                else
                cout<<"impossible"<<endl;
        }
        else if(r>20){
            r=r-20;
            if(r-10==0 || r-5==0 || r-2==0)
                cout<<"possible"<<endl;
                else
                cout<<"impossible"<<endl;
        }
        else if(r>10){
            r=r-10;
            if(r-5==0 || r-2==0)
                cout<<"possible"<<endl;
                else
                cout<<"impossible"<<endl;
        }
        else if(r>5){
            r=r-5;
            if(r-2==0)
                cout<<"possible"<<endl;
            else
                cout<<"impossible"<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
