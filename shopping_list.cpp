// used vector of string to hold dynamic list of items
//used sentinel controlled(user control to finsih loop) while loop
//vectors are powerful tool to store data of unknown size
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string>ShoppingList;
    string item;
    cout<<"Enter items for your shopping list (type 'done' to finish):"<<endl;
    while(item != 'done'){
        ShoppingList.push_back(item);
        cout<<"Enter item(or 'done' to finish): "<<endl;
        getline(cin, item);
    }
    cout<<"Your shopping list:"<<endl;
    for(string item : ShoppingList){
        cout<<item<<endl;
    }
    return 0;
}