#include <climits>
#include<iostream>
using namespace std;
int main(){
    // find largest element
    //int n;
    //cin>>n;
    //int a[n];
    //for(int i=0;i<n;i++){
    //    cin>>a[i];
    //}

    //int largest = INT_MIN;
    //for(int j=0;j<n;j++){
    //    if(largest<a[j]){
    //        largest = a[j];
    //    }
    //}
    //cout<<"the largest number is :"<<largest<<endl;


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int smallest = INT_MAX;
    for(int j=0;j<n;j++){
        if(smallest>a[j]){
            smallest = a[j];
        }
    }
    cout<<"the smallest number is :"<<smallest<<endl;


    return 0;
}
