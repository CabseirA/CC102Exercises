#include <iostream>
#include <fstream>    
#include <string>     
#include <vector>     
#include <algorithm>  

using namespace std;

int main() {

    ofstream outFile("original.txt");
    if (!outFile) {
        cout << "Error: Could not create original.txt" << endl;
        return 1;
    }

    outFile << "One" << endl;
    outFile << "Two" << endl;
    outFile << "Three" << endl;
    outFile << "Four" << endl;
    outFile << "Five" << endl;
    outFile << "Six" << endl;

    outFile.close();

    ifstream inFile("original.txt");
    if (!inFile) {
        cout << "Error: Could not open original.txt" << endl;
        return 1;
    }

    vector<string> words;
    string line;
    while (getline(inFile, line)) {
        words.push_back(line);
    }
    inFile.close();

    sort(words.begin(), words.end());

    ofstream sortedFile("sorted.txt");
    if (!sortedFile) {
        cout << "Error: Could not create sorted.txt" << endl;
        return 1;
    }

    for (size_t i = 0; i < words.size(); i++) {
        sortedFile << words[i] << endl;
    }

    sortedFile.close();

    cout << "Sorting complete! Check sorted.txt for results." << endl;

    return 0;
}
