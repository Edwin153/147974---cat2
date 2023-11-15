//147974
//DBIT SEP-DEC 2023
//Strathmore university
#include<iostream>
using namespace std;
int main(){
    //initialise variables
    int year, mod;
    cout<<" input the year";// promt user to input year
    cin>>year;
    mod=year%4;// create a variable to store the modulas of the year

    if(mod==0){
        cout<<year<<"\t is a not leap year";
    }else{
        cout<<year<<" \t is leap year";
    }




    return 0;
}