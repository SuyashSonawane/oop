#include<iostream>
using namespace std;


template<class T>
void Sort(T a[10],int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                T temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
}

int main(){
    int a[]={1,57,2,389};
    Sort(a,4);
    for(int i =0;i<4;i++)
        cout<<a[i]<<" ";
    return 0;
}