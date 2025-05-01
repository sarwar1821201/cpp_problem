#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100},
        {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int prev_value = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int current_value = roman[s[i]];

        if (current_value < prev_value) {
            total -= current_value;
        } else {
            total += current_value;
        }

        prev_value = current_value;
    }

    return total;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral (ex: XIV): ";
    cin >> roman;

    int result = romanToInt(roman);
    cout << "Integer value: " << result << endl;

    return 0;
}
