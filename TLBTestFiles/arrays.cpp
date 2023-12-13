/*
Create an array in dynamic memory. Read and write some data for page faults.
*/
#include <iostream>
#define SIZE 2048

int array_main () {
    int* my_array = new int(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        my_array[i] = i;
    }
    for (int i = 0; i < SIZE; ++i) {
        my_array[i] = my_array[SIZE - 1 - i] + i;
    }
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += my_array[i];
    }
    delete [] my_array;
    return sum;
}

int main(){
    for(int i = 0; i < 1000; ++i){
        std::cout << "Sum: " << array_main() << "\n";
    }
}