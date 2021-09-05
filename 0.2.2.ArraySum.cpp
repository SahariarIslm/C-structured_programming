#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number elements"<<endl;
    int n;
    cin>>n;
    int a[n];
    // input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    for(int j=0;j<n;j++){
        sum = sum+a[j];
    }
    cout<<"your array sum is: "<<sum;
    return 0;
}
