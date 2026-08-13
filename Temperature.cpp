//used standard array of double values
#include<iostream>
#include<array>
using namespace std;
int main(){
    const int NUM_DAYS = 7;
    array<double, NUM_DAYS> Ftrmp;
    for(int i=0; i<NUM_DAYS; i++){
        cout<<"Enter the temperature for day "<<i+1<<": ";
        cin>>Ftrmp[i];
    }
    cout<<"temp in a week (in Celsius): "<<endl;
    for(double temp : Ftrmp){
        double tempC =(temp - 32)*5/9;
        cout<<"F:"<<temp<<" C:"<<tempC<<endl;
    }
    return 0;
}