#include<iostream>
using namespace std;
int CountEven(int arr[], int size);

int main(){
    int myArray[]={12,7,2,5,4,19,30,54};
    int numEven=CountEven(myArray, 8);
    cout<<"count of Even number is:"<<numEven<<endl;
    return 0;
}
int CountEven(int arr[],int size){
    int count=0;
    for (int i=0; i<=size; i++){
        if(arr[i] % 2 ==0){
            count ++;
        }
    }
    return count;
}
