#include<iostream>
using namespace std;
int main(){
    /* //creating an array
    int a[10];
    a[0] = 2;
    a[4] = 5;
    cout<<a[0]<<" "<<a[4]<<endl;
    */

    //initializing and printing array using loop
    // int a[4] = {1,2,3,4};
    // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<endl;

    // //printing array using loop
    //int a[4] = {1,2,3,4};
    //for(int i=0;i<4;i++){
    //    count<<a[i]<<" ";
    //}
    // //printing array using loop & giving less data than total index. Then indexes without data will return 0
    //int a[10] = {1,2,3,4};
    //for(int i=0;i<10;i++){
    //    cout<<a[i]<<" ";
    //}
    // //printing array without giving data then garbage value will be printed
    //int a[10];
    //for(int i=0;i<10;i++)
        //cout<<a[i]<<" ";

    // filling array indexes with values
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=i*i;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<sizeof(a)<<endl;
    cout<<endl;
    int b;
    cout<<sizeof(b)<<endl;

    return 0;
}
