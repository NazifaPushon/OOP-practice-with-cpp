#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
    int id;
    float gpa;
    string fullName;
};
int main(){
   
    Student Alim;
    Alim.id = 101;
    Alim.gpa = 3.5;
    Alim.fullName = "hello 🙃";
    cout  << Alim.gpa << endl;
    cout << Alim.fullName << endl;
    return 0;
}