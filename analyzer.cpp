// Lab 05:
// Lab Partner: Chloe

#include "StringData.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int linear_search(vector<string> container, string target) {
    for (int i=0; i<container.size(); i++) {
        if (container[i] == target) {
            return i;
        }
    }
    return -1;
}


int binary_search(vector<string> container, string target) {
    int left = 0;
    int right = container.size() - 1;
    int mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (target == container[mid]) {
            return mid;
        }

        else if (target > container[mid]) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }

    }
    return -1;
}


int main() {
    /*print("Linear Search for 'not_here'")
    start = time.time()
    index = binary_search(stringdata.get_data(), "not_here")
    end = time.time()
    print(end - start)
    print(index, "\n")

    print("Binary Search for 'not_here'")
    start = time.time()
    index = binary_search(stringdata.get_data(), "not_here")
    end = time.time()
    print(end - start)
    print(index, "\n")

    print("Linear Search for 'mzzzz'")
    start = time.time()
    index = binary_search(stringdata.get_data(), "mzzzz")
    end = time.time()
    print(end - start)
    print(index, "\n")

    print("Binary Search for 'mzzzz'")
    start = time.time()
    index = binary_search(stringdata.get_data(), "mzzzz")
    end = time.time()
    print(end - start)
    print(index, "\n")

    print("Linear Search for 'aaaaa'")
    start = time.time()
    index = binary_search(stringdata.get_data(), "aaaaa")
    end = time.time()
    print(end - start)
    print(index, "\n")

    print("Binary Search for 'aaaaa'")
    start = time.time()
    index = binary_search(stringdata.get_data(), "aaaaa")
    end = time.time()
    print(end - start)
    print(index, "\n")*/
    vector<string> stringData = getStringData();

    cout << "Linear Search for 'not_here'" << "\n";
    const long start = systemTimeNanoseconds();
    int index = linear_search(stringData, "not_here");
    const long end = systemTimeNanoseconds();
    cout << end - start << "\n";
    cout << index << "\n";

    cout << "Binary Search for 'not_here'" << "\n";
    const long start2 = systemTimeNanoseconds();
    int index2 = binary_search(stringData, "not_here");
    const long end2 = systemTimeNanoseconds();
    cout << end2 - start2 << "\n";
    cout << index2 << "\n";

    cout << "Linear Search for 'mzzzz'" << "\n";
    const long start = systemTimeNanoseconds();
    int index = linear_search(stringData, "not_here");
    const long end = systemTimeNanoseconds();
    cout << end - start << "\n";
    cout << index << "\n";

    cout << "Binary Search for 'mzzzz'" << "\n";
    const long start2 = systemTimeNanoseconds();
    int index2 = binary_search(stringData, "not_here");
    const long end2 = systemTimeNanoseconds();
    cout << end2 - start2 << "\n";
    cout << index2 << "\n";

    cout << "Linear Search for 'aaaaa'" << "\n";
    const long start = systemTimeNanoseconds();
    int index = linear_search(stringData, "not_here");
    const long end = systemTimeNanoseconds();
    cout << end - start << "\n";
    cout << index << "\n";

    cout << "Binary Search for 'aaaaa'" << "\n";
    const long start2 = systemTimeNanoseconds();
    int index2 = binary_search(stringData, "not_here");
    const long end2 = systemTimeNanoseconds();
    cout << end2 - start2 << "\n";
    cout << index2 << "\n";

}
