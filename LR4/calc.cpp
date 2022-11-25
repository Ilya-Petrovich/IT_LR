#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    
    cout<<"Введите первое число:"; cin>>n1;
    cout<<"Введите второе число:"; cin>>n2;
    cout<<"Введите третье число:"; cin>>n3;
    
    if ((n1>=0) and (n2>0) and (n1>n2) and (n3>=0))
    {
        cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
        cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
        cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
        cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
        cout<<float(n1)<<" / "<<float(n2)<<" = "<<float(n1)/float(n2)<<endl;
        cout<<n1<<" % "<<n2<<" = "<<n1%n2<<endl;
        cout<<n1<<" + "<<n2<<" * "<<n3<<" = "<<n1+n2*n3<<endl;
        cout<<"("<<n1<<" + "<<n2<<") * "<<n3<<" = "<<(n1+n2)*n3<<endl;
    }
    else
    {
        cout<<"Invalid data"<<endl;
    }

    return 0;
}