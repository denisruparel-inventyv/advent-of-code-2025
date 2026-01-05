#include <bits/stdc++.h>
using namespace std;

bool isInvalid(long long x) {
    string s = to_string(x);
    int n = s.size();

    if (n % 2 != 0) return false;

    string first = s.substr(0, n / 2);
    string second = s.substr(n / 2);

    return first == second;
}

int main() {
    ifstream fin("input.txt");   
    string input;
    fin >> input;            

    long long answer = 0;

    stringstream ss(input);
    string range;

    while (getline(ss, range, ',')) {
        int dash = range.find('-');
        long long start = stoll(range.substr(0, dash));
        long long end = stoll(range.substr(dash + 1));

        for (long long i = start; i <= end; i++) {
            if (isInvalid(i))
                answer += i;
        }
    }
    cout << answer << endl;
    return 0;
}