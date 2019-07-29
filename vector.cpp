#include<iostream>
using namespace std;

template<class T>
class Vector{
    T arr[10];
    int n;
    public:
    void accept(){
        cout<<"\nEnter size of vector\n";
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"\nDisplaying vector data\n";
    }
};

int main(){
    return 0;
}