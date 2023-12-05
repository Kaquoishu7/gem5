/*
Create an array in dynamic memory. Read and write some data for page faults.
*/

#define SIZE 2048

int main () {
    int* my_array = new int(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        my_array[i] = i;
    }
    for (int i = 0; i < SIZE; ++i) {
        my_array[i] = my_array[SIZE - 1 - i] + i;
    }
    delete [] my_array;
    return 0;
}