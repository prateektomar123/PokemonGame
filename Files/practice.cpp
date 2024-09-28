#include <string>
#include<vector>
#include <iostream>

 using namespace std;
 int main() {
 vector<string> shoppingList;

 shoppingList.push_back("Apples");
 shoppingList.push_back("Milk");
 shoppingList.push_back("Bread");
 shoppingList.push_back("Eggs");

 cout<<"Brock: The second item is: "<<shoppingList[1] <<"\n\n";
 for (int i = 0; i < shoppingList.size(); i++)
 {
    cout<<shoppingList[i]<<endl;
 }
 
 return 0;
 }