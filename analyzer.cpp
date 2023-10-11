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
    const long start3 = systemTimeNanoseconds();
    int index3 = linear_search(stringData, "mzzzz");
    const long end3 = systemTimeNanoseconds();
    cout << end3 - start3 << "\n";
    cout << index3 << "\n";

    cout << "Binary Search for 'mzzzz'" << "\n";
    const long start4 = systemTimeNanoseconds();
    int index4 = binary_search(stringData, "mzzzz");
    const long end4 = systemTimeNanoseconds();
    cout << end4 - start4 << "\n";
    cout << index4 << "\n";

    cout << "Linear Search for 'aaaaa'" << "\n";
    const long start5 = systemTimeNanoseconds();
    int index5 = linear_search(stringData, "aaaaa");
    const long end5 = systemTimeNanoseconds();
    cout << end5 - start5 << "\n";
    cout << index5 << "\n";

    cout << "Binary Search for 'aaaaa'" << "\n";
    const long start6 = systemTimeNanoseconds();
    int index6 = binary_search(stringData, "aaaaa");
    const long end6 = systemTimeNanoseconds();
    cout << end6 - start6 << "\n";
    cout << index6 << "\n";

}
