#include<iostream>
using namespace std;

template<class M>
void p(M a){
    cout<<"\n"<<a<<"\n";
}

template<class T,class S>
class Vector{
    T arr[10];
    int n;
    public:
    void accept(){
        cout<<"\nEnter size of vector\n";
        cin>>n;
        cout<<"Enter elements"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"\nDisplaying vector data\n";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    void mul(){
        S a;
        p("Enter the scalar to multiply=>");
        cin>>a;
         for(int i=0;i<n;i++)
            arr[i]*=a;
    }
    void modify(){
        int index;
        cout<<"Enter the index to modify\n";
        cin>>index;
        if(index<n-1)
        {
            p("Enter modified value");
            cin>>arr[index];
        }
        else{
            p("Index doesnt exist");
        }
    }
};

int main(){
    Vector<int,int> a;
    int input;
    p("Vector operations");
    do{
        p("1.Accept\n2.Display\n3.Modify\n4.Multiply=>");
        cin>>input;
        switch (input)
        {
        case 1:
            a.accept();
            break;
        case 2:
            a.display();
            break;
        case 3:
            a.modify();
            break;
        case 4:
            a.mul();
            break;
        default:
            break;
        }
    }while(1);
    return 0;
}