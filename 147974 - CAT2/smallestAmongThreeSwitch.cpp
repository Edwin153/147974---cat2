//147974
//DBIT SEP-DEC 2023
//Strathmore university
#include<iostream>
using namespace std;
int main(){
    //declare variables
    int a, b, c,opt;
    cout<<"input three numbers";
    cin>>a, b, c;
    cout<<"input option for minimum, input 1";
    cin>>opt;
    switch(opt){//switch case
        case 1 ://use else if to create instances
        if(a<b<c){
            cout<<a<<"\t is the smallest";
        }
        else if(b<a<c){
            cout<<b<<"\t is the smallest";
        }
        else{
            cout<<c<<"\t is the smallest";
        }
    }

    return 0;
}