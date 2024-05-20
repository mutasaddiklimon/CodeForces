#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    int n1 = 0, n2 = 0, n3 = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == '1') {
            n1++;
        } else if (s[i] == '2') {
            n2++;
        } else {
            n3++;
        }
    }

    std::string ss = "";
    for (int i = 0; i < n1; i++) {
        ss += "1+";
    }
    for (int i = 0; i < n2; i++) {
        ss += "2+";
    }
    for (int i = 0; i < n3; i++) {
        ss += "3+";
    }
    ss.pop_back();  // Remove the last '+'

    std::cout << ss << std::endl;
    return 0;
}

