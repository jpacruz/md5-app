#include <iostream>
#include<fstream>
#include "md5.h"

using namespace std;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    ifstream file("CardNumbers.txt");
    ofstream converted;
    converted.open("MD5_CardNumbers.txt");

    string cardType, number;

    while(file >> cardType >> number)
    {
        converted << md5(number) << endl;
    }

    converted.close();
    return 0;
}
