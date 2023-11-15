//147974
//DBIT SEP-DEC 2023
//Strathmore university
#include <iostream>
using namespace std;
int main(){
     string username="edwinGithaiga";
    int password= 1234;
    int opt;
    cout<<"please input username and password";
    cin>>username;
    cin>>password;
    if (username =="edwinGithaiga"&& password==1234){
        cout<<"Welcome to my SimpleApp. Select and action to perform :";
        cout<<"1. Go to About Us Page";
        cout<<"2. Go to Services Page";
        cout<<"3. Go to Full Profile Page";
        cout<<"4. Logout";
        }else{
            cout<<"invalid";
        }
        cout<<"select options 1,2,3,4";
        cin>>opt;
        switch (opt){
            case 1:
            cout<<"i am edwin githaiga. i like c++ because its eye opening";
            cout<<"2. Go to Services Page";
            cout<<"3. Go to Full Profile Page";
            cout<<"4. Logout";
            break;

            case 2:
            cout<<"i am edwin githaiga. i bake to earn money";
            cout<<"1. Go to About Us Page";
            cout<<"3. Go to Full Profile Page";
            cout<<"4. Logout";
            break;

             case 3:
            cout<<"i am irungu edwin githaiga.";
            cout<<"Born in 2003";
            cout<<"kenya";
            cout<<"kenyan";
            cout<<"Nairobi";
            cout<<"strathmore university";
            cout<<"DBIT";
            cout<<"introduction to programming";
            cout<<"gaming";
            break;

            case 4:
            cout<<"logout successful";
            
            break;

            



        }

    
    




    return 0;
}