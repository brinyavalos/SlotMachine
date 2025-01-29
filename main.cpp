#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int dollars = 10;
    
    cout<<"Welcome to the Slot Machine!! You begin with $10. Every game costs $1. "<< endl;
    
    cout<<"Press B to spin the machine. Press any other button to exit the game"<< endl;
    char spin;
    cin>>spin; 
    
    while ((spin == 'B') || (spin=='b')){
        int slot1 = rand()%4;
        int slot2 = rand()%4;
        int slot3 = rand()%4;
        
        
        if(slot1==3){
            cout <<" 7 ";
        } else if (slot1==2){
            cout<<" $ ";
        } else if(slot1==1){
            cout<<" # ";
        } else{
            cout<<" X ";
        }
        
        if(slot2==3){
            cout <<" 7 ";
        } else if (slot2==2){
            cout<<" $ ";
        } else if(slot2==1){
            cout<<" # ";
        } else{
            cout<<" X ";
        }
        
        if(slot3==3){
            cout <<" 7 " << endl;
        } else if (slot3==2){
            cout<<" $ "<< endl;
        } else if(slot3==1){
            cout<<" # " << endl;
        } else{
            cout<<" X " <<endl;;
        }
        
        //checks to see if each slot has the same value. 
        if((slot3==3) && (slot2==3) && (slot1==3)){
            cout<<"You just won $100!!"<<endl;
            dollars = dollars + 99;
            cout<<"You now have $" << dollars <<endl;
        } else if ((slot3==2) && (slot2==2) && (slot1==2)){
            cout<<"You just won $50!!"<<endl; 
            dollars = dollars + 49;
            cout<<"You now have $" << dollars<<endl;
        } else if((slot3==1) && (slot2==1) && (slot1==1)){
            cout<<"You just won $25!!"<<endl;
            dollars = dollars + 24;
            cout<<"You now have $" << dollars<<endl;
        } else if((slot3==0) && (slot2==0) && (slot1==0)){
            cout<<"You just won $10!!"<<endl;
            dollars = dollars + 9;
            cout<<"You now have $" << dollars<<endl;
        } else{
            cout<<"YOU LOST!"<<endl;
            dollars = dollars - 1; 
            cout<<"You now have $" << dollars << " left"<< endl;
        }
        //checking if they make sure they have more than 0 dollars left. 
        if (dollars <= 0){
            cout<<"Sorry, you are out of luck. You have no money :( Game Over..."<<endl;
            break;
        } else {
            cout<<"Press B to spin the machine. Press any other button to exit the game"<<endl; 
            cin>>spin;
        }
        //if the user decides to end the game early. This is display the money they have left.
        if(spin>0){
            cout<<"You have ended the game with $" << dollars<<endl;
        } else {
            return 0;
        }
    }
    
    return 0;
}
