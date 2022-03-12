#include <iostream>
#include <string>
using namespace std;
class Person {
    public:
        string fullName;
        int age;
        string address;
        int netWorth;
        string partner;
        void displayPerson(){
            //print everything
            cout << "I am " << fullName << " and I am " << age << " years old and I live in " << address << " and My net worth is 😒" << netWorth << " and i need partner like " << partner << endl;
        }
};
int main(){
   
    Person Alim;

    Alim.fullName = "Faiyaz Chowdhury";
    Alim.age = 18;
    Alim.address = "why would I tell you ?";
    Alim.netWorth = 1200000;
    Alim.partner = "I need a suger baby বাল 🤣";
    Alim.displayPerson();
    return 0;
}