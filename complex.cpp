#include<iostream>
using namespace std;

class Complex{
    float a,b;
    public:
    Complex(){
        a=0;b=0;
    }

    Complex operator+(Complex c){
        Complex z;
        z.a=a+c.a;
        z.b=b+c.b;
        // cout << z;
        return z;
    }
    Complex operator-(Complex c){
        Complex z;
        z.a=a-c.a;
        z.b=b-c.b;
        cout << z;
    }
    Complex operator*(Complex c){
        Complex z;
        z.a=a*c.a-b*c.b;
        z.b=a*c.b+b*c.a;
        cout << z;
    }

    friend ostream & operator<< (ostream &out, const Complex cmp);
    friend istream & operator >> (istream &in,  Complex &c);
};
ostream & operator<< (ostream &out, const Complex cmp){
    out << cmp.a;
    out << " +"<< cmp.b <<"i"<<endl;
    return out;
}
istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.a;
    cout << "Enter Imaginary Part ";
    in >> c.b;
    return in;
} 
int main(){
    Complex c1 ,c2,c3;
    cin >>c1;
    cout<<c1;
    cin >>c2;
    cout<<c2;
    c3=c1+c2;
    cout << c3;
    return 0;
}