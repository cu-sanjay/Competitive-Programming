#include <iostream>
#include <vector>

int findDuplicate(std::vector<int> &arr) {
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];
    }

    for (int i = 1; i < arr.size(); i++) {
        sum = sum - i;
    }

    return sum;
}

int main() {
    std::vector<int> arr = {3, 1, 3, 4, 2};
    int duplicate = findDuplicate(arr);
    
    std::cout << "Duplicate element: " << duplicate << std::endl;
    
    return 0;
}
