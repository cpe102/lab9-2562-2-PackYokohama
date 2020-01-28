Push“cheerbook_copy.txt”
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream source;
    
    source.open("cheerbook.txt");
ofstream dest("cheerbook_coppyy.txt");

dest << "-------------------- SOTUS ---------------------"<< "\n";
string textline;
while(getline(source,textline)){
    dest << textline << "\n";
}
dest << "-------------------- SOTUS ---------------------";
return 0;
}
Push“cheerbook_copy.txt”