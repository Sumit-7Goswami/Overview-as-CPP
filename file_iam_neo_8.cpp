#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct FileData {
    string fileName;
    int size;
    int arr[1000]; 
};

int main() {
    FileData f;

    cin >> f.size;

    if (f.size > 100) {
        cout << "Exceeding limit!";
        return 0;
    }
    else {
        for (int i = 0; i < f.size; i++) {
            cin >> f.arr[i];
        }

        f.fileName = "reverse.txt";

        ofstream file(f.fileName);
        if (file.is_open()) {
            for (int i = f.size - 1; i >= 0; i--) {
                file << f.arr[i] << " "; // Write integers with spaces in between
            }
            file.close();
        }

        ifstream readFile(f.fileName);
        if (readFile.is_open()) {
            int num;
            while (readFile >> num) {
                cout << num << endl;
            }
            readFile.close();
        }
    }

    return 0;
}
