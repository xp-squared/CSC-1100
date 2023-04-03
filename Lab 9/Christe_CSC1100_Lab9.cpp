/******************************************************************************

Zane Christe lab 9-1 3/21/23

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream import("FIRST.txt"); // file to read from
    ofstream export1("SECOND.txt"); // file to export information to

    char words[30];

    while (!import.eof()){ // read till end of file
        import >> words;
        if (words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u')
            {
                export1 << words << " ";
            }
    }

    import.close();
    export1.close();
    
    return 0;
}
