//??4
#include <iostream>
#include <string>

using namespace std;

int main() {
    int k = 0;
    cout << "?";
    char c;
    c = getchar();

    while (c != 10){
        if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58) || (c == 45) || (c == 95) || (c == 46) || (c == 64)){
            k = 0;
        }
        else{
            k = 1;
            break;
        }
        c = getchar();
    }
    if (k == 0)
        cout << "OK";
    else
        cout << "Error";
    return 0;
}