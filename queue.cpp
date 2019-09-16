#include<iostream>
#include<list>

using namespace std;

template<class T>
class Queue
{
    int size=10;
    public:
    list<T> l;
    void enqueue(T k)
    {
        if(l.size()<size)
        {
            l.push_back(k);
            cout<<"Added";
        }

        else cout<<"Queue is full!\a\n";
    }
    T dequeue()
    {
        T a;
        if(!l.empty())
        {
            a=l.front();
            l.pop_front();
            return a;

        }
        else{
            cout<<"Queue is empty";
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
        else cout<<"Empty queue";
    }
    
    
};


int main()
{
    Queue<int>q; 
    int ui,m=1;
    cout<<"Queue using list\n\n"  ;
    do{
        cout<<"\n1.Add elements\n2.Pop element\n3.Display\n99.Exit\n>>";
        cin>>ui;
        switch(ui)
        {
            case 1:
            int el;
            cout<<"Enter element >> ";
            cin>>el;
            q.enqueue(el);
            break;
               
            case 2:
            cout<<"\nelement >> "<<q.dequeue();
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