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
    void showMenu(){
        int input2;
        do{
            p("1.Accept\n2.Display\n3.Modify\n4.Multiply=>");
            cin>>input2;
            switch (input2)
            {
            case 1:
                accept();
                break;
            case 2:
                display();
                break;
            case 3:
                modify();
                break;
            case 4:
                mul();
                break;
            default:
                break;
            }
        }
    while(1);
    }
    
};

int main(){
    int input1,input2;
    p("Give datatype for vector\n1.INT\n2.FLOAT");
    cin>>input1;
    switch (input1)
    {
    case 1:
    Vector<int,int> a;
        a.showMenu();
        break;
    case 2:
      Vector<int,int> b;
        b.showMenu();
    default:
        break;
    }
    
    return 0;
}