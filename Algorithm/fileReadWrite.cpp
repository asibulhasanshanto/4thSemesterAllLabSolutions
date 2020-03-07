#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("inp.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )//for string
    //while ( myfile >> line )//for int
    {
      cout << line << '\n';
    }
    myfile.close();
  }
    else cout << "Unable to open file";


    ofstream myfile2 ("out.txt");
    if (myfile2.is_open())
    {
    myfile2 << "This is a line.\n";
    myfile2 << "This is another line.\n";
    myfile2.close();
    }
    else cout << "Unable to open file";

  return 0;
}
