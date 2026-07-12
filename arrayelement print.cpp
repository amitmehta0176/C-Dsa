#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);// size of the array 
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}