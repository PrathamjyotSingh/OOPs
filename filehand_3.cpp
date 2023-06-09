#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string est;
    fstream iofile("MyExam.txt", ios::out | ios::in);
    iofile << "UTA018 Object Oriented Programming";
    iofile.seekp(ios::beg);
    getline(iofile, est);
    cout << est << endl;
    iofile.close();
}