#include<iostream>
#include<array>
using namespace std;

int ProductArrray(array < int, 6 > myArray);

int main(){
    array<int, 6> numbers{1, 2, 3, 4, 5, 6};
    int result = ProductArrray(numbers);
    cout<<"The product of array:"<<result<<endl;
    return 0;
}

int ProductArrray(array<int, 6>myArray){
    int product =1;
    for (int num:myArray){
        product *= num;
    }
    return product;
}