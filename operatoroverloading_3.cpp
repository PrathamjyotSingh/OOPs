#include <iostream>
#include <string>
#include <cctype>

using namespace std;
class STRING {
private:
    string value;
    public:
    STRING(const string& s) : value(s) {}

    bool operator==(const STRING& other) const {
        if (value.length() != other.value.length()) return false; 
        for (size_t i = 0; i < value.length(); i++) {
            if (toupper(value[i]) != toupper(other.value[i])) return false; 
            }
        return true; 
         }

    STRING operator+(const STRING& other) const {
        return STRING(value + other.value); 
        }

    void print() const {
        cout << value << endl;
    }
};

int main() {
    STRING s1("Hello");
    STRING s2("World");

     if (s1 == s2) {
        cout << "The strings are equal" << endl;
    } else {
        cout << "The strings are not equal" << endl;
    }
   STRING s3 = s1 + s2;

     s3.print();

    return 0;
}