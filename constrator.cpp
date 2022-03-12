#include <iostream>
#include <string>
using namespace std;
class Boyfriend {
    public:
    Boyfriend(string bfName,int bfage, float bfheight){
        name = bfName;
        age =bfage ;
        height = bfheight;
    };
    void display(){
        cout << "My Bf's name is " << name << ". He is " << age << " years old and his height is " << height << endl;
    };
    string name;
    int age;
    float height;
};
int main () {
    Boyfriend Alif("Safayat Hassan Alif",16,5.8);
    Alif.display();
    return 0;
}