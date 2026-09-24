#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of integer:";
    cin>>n;

    int sum=0, count=0;
    cout<<"Enter "<<n<<" interger:"<<endl;
    do{
        int num;
        cin>>num;
        sum += num;
        count ++;
    }while(count < n);

    cout<<"Sum is:"<<sum;
    
    return 0;
}