/*
Runs code that requires multiple branches and has large has large instruction size
*/

#define SIZE 2048
#define LOOP 100
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using std::vector;

template<typename T>
void sumArr(const vector<T> &arr){
    long long sum = 0;
    std::cout << "Summing Arr\n";
    for(const T x : arr){
        sum += x;
    }
    std::cout << "Sum is " << sum << "\n";
}

template<typename T>
void incArr(vector<T> &arr){
    std::cout << "Incrementing Arr\n";
    for(T &x : arr){
        x += 1;
    }
    return;
}

template<typename T>
void flipArr(vector<T> &arr){
    std::cout << "Flipping Arr\n";
    std::reverse(arr.begin(), arr.end());
}


template<typename T>
void printMid(const vector<T> &arr){
    std::cout << "Print Middle Value:\n";
    std::cout << arr[SIZE/2] << "\n";
    return;
}


template<typename T>
void initArr(vector<T> &arr, int start){
    std::iota(arr.begin(), arr.end(), start);
}



int main () {
    vector<int> vec1(SIZE);
    initArr(vec1, -10);
    vector<long> vec2(SIZE);
    initArr(vec2, 15);
    vector<double> vec3(SIZE);
    initArr(vec3, 0.2);
    vector<unsigned int> vec4(SIZE);
    initArr(vec4, 0);

    sumArr(vec4);

    for(int i = 0; i < LOOP; ++i){
        int mod = i % 4;
        switch(mod){
            case 0:
                printMid(vec1);
                flipArr(vec2);
                incArr(vec3);
                sumArr(vec4);
            break;

            case 1:
                sumArr(vec1);
                printMid(vec2);
                flipArr(vec3);
                incArr(vec4);
            break;
            case 2:
                incArr(vec1);
                sumArr(vec2);
                printMid(vec3);
                flipArr(vec4);

            break;
            case 3:
                flipArr(vec1);
                incArr(vec2);
                sumArr(vec3);
                printMid(vec4);
            break;
        }
    }

    return 0; 
}