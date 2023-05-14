#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int stringLength(string str) {
    int maxLength = 0, currentLength = 1;
    for (int i = 1; i < str.length(); i++) {
        if (str[i] != str[i - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    maxLength = max(maxLength, currentLength);
    return maxLength;
}

int main() {
    string str = "ABCDDDEFGHI";
    int answer = stringLength(str);
    cout << answer;
}

