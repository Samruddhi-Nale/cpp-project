#include<iostream>
#include<cstdlib>       //psudo random number generation
#include<ctime>         //
using namespace std;
int main(){
    char userMove, computerMove;
    srand(time(nullptr));
    cout<<"Welcome to Game!!"<<endl;
    cout<<"Enter your move(R, P or S):";
    cin>>userMove;

    int randNum = rand() % 3;
    if(randNum == 0){
        computerMove = 'R';
    }
    else if(randNum == 1){
        computerMove = 'P';
    }
    else {
        computerMove = 'S';
    }
    cout<<"You played:"<<userMove<<endl;
    cout<<"Computer Played:"<<computerMove<<endl;

    //result
    if(userMove == computerMove){
        cout<<"It is a tie"<<endl;
    }
    else if(
        (userMove == 'R' && computerMove == 'S') ||
        (userMove == 'S' && computerMove == 'P') ||
        (userMove == 'P' && computerMove == 'R') 
    ){
        cout<<"You Win!"<<endl;
    }
    else{
        cout<<"Computer Win!!"<<endl;
    }
    return 0;
}