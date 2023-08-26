#include <iostream>
using namespace std;

int main(){
   string name;
   string age;
   string favFood;
   cout << "What's name?: ";
   getline(cin,name);
   cout << "How old are you?: ";
   getline(cin,age);
   cout << "What's your favorite food?: ";
   getline(cin,favFood);
   cout << "Hello " << name << " you are " << age << " years old and your favorite food is  " << favFood << endl;





    return 0;
}