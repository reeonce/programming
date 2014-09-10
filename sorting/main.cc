#include <iostream>
#include "insert_sorting.h"

#define QUICK_SORTING   1
#define INSERT_SORTING  2
#define MERGE_SORTING   3
#define HEAP_SORTING    4
#define MAXSIZE 1000000

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char * argv[]) {
    int input[MAXSIZE], count = 0,
        tmp,
        method = QUICK_SORTING;
    if (argc >= 2) {
        if (argv[1][0] == 'q') {
            method = QUICK_SORTING;
        } else if (argv[1][0] == 'i') {
            method = INSERT_SORTING;
        } else if (argv[1][0] == 'i') {
            method = INSERT_SORTING;
        } else if (argv[1][0] == 'i') {
            method = INSERT_SORTING;
        } else if (argv[1][0] == 'i') {
            method = INSERT_SORTING;
        }
    }

    cout << argc << endl;
    count = 0;
    while (argv[count]) {
        cout << argv[count ++] << endl;
    }

    count = 0;
    while (cin >> tmp) {
        input[count ++] = tmp;
    }

    for (int i=0; i<count; i++) {
        cout << input[i] << "\t";
    }
    cout << endl;

    int * output = ree::insert_sorting(input, count);
    for (int i=0; i<count; i++) {
        cout << output[i] << "\t";
    }
    cout << endl;

    return 0;
}
