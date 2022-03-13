#include <iostream>
#include <string>
using namespace std;
class Boyfriend {
    public:
    //parameteralized constructor
    Boyfriend(string bfName,int bfage, float bfheight){
        name = bfName;
        age = bfage ;
        height = bfheight;
    };
    void display(){
        cout << "My Bf's name is " << name << ". He is " << age << " years old and his height is " << height << endl;
    };
    //default constructor
    Boyfriend(){
        cout << "by the way I dont have any boyfriend !!!" << endl;
    };
    string name;
    int age;
    float height;
};
int main () {
    Boyfriend Faiyaz;
    Boyfriend Alif("Safayat Hassan Alif",16,5.8);
    Alif.display();
    return 0;
}