#include<iostream>
using namespace std;
int main(){
    char package;
    //char A,B,C;
    int devices;
    int cost=0;
    int deviceOver=0;
    const int includeA=1;
    const int includeB=3;
    const int includeC=5;

    const int baseA=9;
    const int baseB=14;
    const int baseC=20;

    const int extraA=6;
    const int extraB=4;
    const int extraC=2;

    cout<<"It is an Straming Subscription Calculator"<<endl;
    cout<<"Enter your package('A', 'B' or 'C'):";
    cin>>package;

    cout<<"enter no of simultanuous device used:";
    cin>>devices;

    if (package == 'A'){
        cost += baseA;
        if(devices > includeA){
            deviceOver = devices - includeA;
            cost += deviceOver * extraA;
        }
    }
    else if(package == 'B'){
        cost += baseB;
        if(devices > includeB){
            deviceOver = devices -includeB;
            cost += deviceOver *extraB;
        }
    }
    else if(package == 'C'){
        cost += baseC;
        if(devices > includeC){
            deviceOver = devices - includeC;
            cost += deviceOver *extraC;
        }
    }
    else{
        cout<<"Invalid packet Selection."<<endl;
        return 0;
    }

    cout<<"Your total cost is (in rupees):"<<cost<<endl;

    return 0;
}