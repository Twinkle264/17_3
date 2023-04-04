#include <iostream>

using namespace std;

bool substr(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len2 > len1) return false;
    for (int i = 0; i <= len1 - len2; ++i) {
        bool found = true;
        for (int j = 0; j < len2; ++j) {
            if (*(str1 + i + j) != *(str2 + j)) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

int main() {
    const char *a = "Hello world";

    const char *b = "wor";

    const char *c = "banana";

    std::cout << substr(a, b) << " " << substr(a, c);
    return 0;
}
