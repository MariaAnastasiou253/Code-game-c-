#include<iostream>
using namespace std;
int main(){
    int code;
    int tries=0;
    int num;
    cout<<"Guess the code!"<<endl;
    cin>>num;
    while(num!=7843){
        if(num>7843){
            cout<<"Too big try again!"<<endl;

        }
        else{
            cout<<"Too small try again!"<<endl;

        }
            tries++;
            cin>>num;
        }





    if(num==7843){
            cout<<"Bravo you cracked the code!!"<<endl;

    cout<< "You guessed the code in " <<tries<< "tries"<<endl;
    }
    return 0;



}








