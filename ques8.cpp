#include <iostream>
using namespace std;
int main(){
    int n , x , count=0;
    int a[100];

    cout<<"Enter the number of elements : ";
    cin>> n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter element to count : ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }

    cout<<"Element "<<x <<"is coming "<<count  <<"times in the array"<<endl;
}