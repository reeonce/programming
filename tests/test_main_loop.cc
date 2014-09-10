#include <iostream>

using std::cout;
using std::endl;

int count = 0;

int main() {
    if (count < 10) {
        cout << count ++ << endl;
        return main();
    } else {
        cout << count << endl;
        cout << std::count;
        return 0;
    }
}
