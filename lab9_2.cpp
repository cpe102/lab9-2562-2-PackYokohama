#include <fstream>
#include <string
using namespace

int main(){
    ifstream source;
    ofstream dest("cheerbook_coppyy.txt");
    source.open("cheerbook.txt")


dest << "-------------------- SOTUS ---------------------"<< "\n";
string textline;
while(getline(souurce,testline)){
    dest << textline << "\n";
}
dest << "-------------------- SOTUS ---------------------";
return 0;
}