#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream file("input.txt");
    if (!file) {
        cerr << "Error: could not open input.txt\n";
        return 1;
    }

    string line;
    int pos = 50;
    int count_zero = 0;

    while (getline(file, line)) {
        if (line.empty()) continue;

        char direction = line[0];
        int steps = stoi(line.substr(1));

        if (direction == 'L') 
            pos = (pos - steps) % 100;
        else
            pos = (pos + steps) % 100;

        if (pos < 0) pos += 100;

        if (pos == 0)
            count_zero++;
    }

    file.close();

    cout << count_zero << "\n";
    return 0;
}
