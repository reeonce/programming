//insert_sorting.cc
//insert sorting function in ree's namespace
//
//insert_sorting: insert the number to the ordered output queue one by one

namespace ree {
    int* insert_sorting (int* input, int length) {
        for(int i=0; i<length; i++) {
            int j = i, tmp = input[i];
            while (j>0 && tmp < input[j-1]) {
                input[j] = input[j-1];
                j --;
            }
            input[j] = tmp;
        }
        return input;
    }
}
