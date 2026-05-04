#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimesInFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error: Could not open " << filename << endl;
        return -1;
    }

    int number;
    int primeCount = 0;

    while (inFile >> number) {
        if (isPrime(number)) {
            primeCount++;
        }
    }

    inFile.close();
    return primeCount;
}

int main() {
    string filename = "NUM.TXT";

    int result = countPrimesInFile(filename);

    if (result >= 0) {
        cout << "The file " << filename << " contains " 
             << result << " prime numbers." << endl;
    }

    return 0;
}
