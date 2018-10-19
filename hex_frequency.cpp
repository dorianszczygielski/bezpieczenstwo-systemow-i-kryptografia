#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x  = 0;
    int total[128] = {0};
    int index;

    ifstream infile;
    ofstream outfile;

    infile.open("hex.txt");
    outfile.open("results.txt");
    if(!infile)
    {
        cout << "Error opening input file!" << endl;
        return 0;
    }

    char c;
    while(infile >> hex >> index)
    {
    if (index < 0 || index >= 128) {
        cerr << "Found an incorrect value: " << hex << index << endl;
        return 1;
    }
    total[index]++;
    }

    for (int i=0; i<128; i++)      // Print the results
    {
        outfile << "  " << hex << i << " occurs "
                << setw(5) << dec << total[i] << " times"
                << "  " << endl;
    }
    return 0;
}
