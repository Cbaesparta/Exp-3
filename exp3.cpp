//Sai Sankar Jena
//23070123112
//EnTC B2
//Exp-3 operators
#include <iostream>
using namespace std;
int main()
{
    //arithmetic operators:
    int x,y,sum,sub,mult,divs,mod,inc,dcr;
    cout<<"enter the first number for arithmetic operation:";
    cin>>x;
    cout<<"enter the second number for arithmetic operation:";
    cin>>y;
    sum=x+y;
    cout<<"x+y="<<sum;
    sub=x-y;
    cout<<"\nx-y="<<sub;
    mult=x*y;
    cout<<"\nx*y="<<mult;
    divs=x/y;
    cout<<"\nx/y="<<divs;
    mod=x%y;
    cout<<"\nx%y="<<mod;
    cout<<"\nx++="<<++x;
    cout<<"\nx--="<<--x;
    //comparision operators:
    int w,z,eq,neq,geq,leq,g,l;
    cout<<"\nenter the first number for comparision:";
    cin>>w;
    cout<<"enter the second number for comparision:";
    cin>>z;
    eq=(w==z);
    cout<<"\n"<<eq;
   
    leq=(w<=z);
    cout<<"\n"<<leq;
   
    geq=(w>=z);
    cout<<"\n"<<geq;
   
    g=(w>z);
    cout<<"\n"<<g;
   
    l=(w<z);
    cout<<"\n"<<l;
   
    neq=(w!=z);
    cout<<"\n"<<neq;
   
     //logical operators:
    int j,k,a,o,n;
    cout<<"\nenter the first number for logical operation:";
    cin>>j;
    cout<<"enter the second number for logical operation:";
    cin>>k;
    cout<<"\n" << (x > 1 && x < 10);
    cout<<"\n" << (x > 1 || x < 10);
    cout <<"\n"<< (!(x > 1 && x < 10));
   
    //assignment operators:
        int s;
        cout<<"\nenter the first number for assignment:";
        cin>>s;
        cout<<"\n" <<s;
        s += 3;
        cout<<"\n"<< s;
        s -= 3;
        cout<<"\n"<<s;
        s *= 3;
        cout<<"\n"<<s;
        s /= 3;
        cout<<"\n"<<s;
        s %= 3;
        cout<<"\n"<<s;
        s &= 3;
        cout<<"\n"<<s;
        s |= 3;
        cout<<"\n"<<s;
        s ^= 3;
        cout<<"\n"<<s;
        s >>= 3;
        cout<<"\n"<<s;
        s <<= 3;
        cout<<"\n"<<s;
 

// bitwise operators
int f,v;
    cout<<"\nenter the first numberv for bitwise operation:";
    cin>>f;
    cout<<"enter the second number for bitwise operation:";
    cin>>v;
    cout << "f & v = " << (f & v) << endl;
    cout << "f | v = " << (f | v) << endl;
    cout << "f ^ v = " << (f ^ v) << endl;
    cout << "~(" << f << ") = " << (~f) << endl;
    cout << "~(" << v << ") = " << (~v) << endl;
    return 0;
}


