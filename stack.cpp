#include<iostream>
#include<list>

using namespace std;

template<class T>
class Stack
{
    int size=10;
    public:
    list<T> l;
    void push(T k)
    {
        if(l.size()<size)
        {
            l.push_back(k);
            cout<<"Added";
        }

        else cout<<"Stack is full!\a\n";
    }
    T pop()
    {
        T a;
        if(!l.empty())
        {
            a=l.back();
            l.pop_back();
            return a;

        }
        else{
            cout<<"Stack is empty";
            return a;
        }
        
    }
    void show()
    {
        if(!l.empty())
        {
            list <int> :: iterator it; 
            for(it = l.begin(); it != l.end(); ++it) 
                cout  << *it<<"\t"; 
            cout << '\n';
        }
        else cout<<"Stack queue";
    }
    
    
};


int main()
{
    Stack<int>q; 
    int ui,m=1;
    cout<<"Stack using list"  ;
    do{
        cout<<"\n1.Add elements\n2.Pop element\n3.Display\n99.Exit\n>>";
        cin>>ui;
        switch(ui)
        {
            case 1:
            int el;
            cout<<"Enter element >> ";
            cin>>el;
            q.push(el);
            break;
               
            case 2:
            cout<<"\nelement >> "<<q.pop();
            break;

            case 3:
            q.show();
            break;

            case 99:
            m=0;
            break;

            default:
            cout<<"ENter correct value";
        }
    }while(m);


}