#include <iostream>

using namespace std;

int main()
{int a,b,r,D,i;
    cout<<"Introduceti numarul a:";
    cin>>a;
    cout<<"Introduceti numarul b:";
    cin>>b;
    D=a;
    i=b;
    while(b>0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cout<<endl<<endl<<"CMMDC-ul este:"<<a<<endl<<"CMMMC-ul este:"<<D*i/a<<endl<<endl;
    return 0;
}
