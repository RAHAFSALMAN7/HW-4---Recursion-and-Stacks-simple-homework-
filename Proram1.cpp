#include <iostream>
#include <vector>


// Function to calculate Fibonacci's number iteratively
int iterativeFibonacci(int n) {
    if (n <= 0) {
        return 0;
    }

    if (n == 1) {
        return 3;
    }

    if (n == 2) {
        return 4;
    }

    int first = 3, second = 4, third = 5;
    for (int i = 4; i <= n; ++i) {
        int current = first + second + third;
        first = second;
        second = third;
        third = current;
    }

    return third;
}

// Function to calculate Fibonacci's number recursively
int recursiveFibonacci(int n) {
    if (n <= 0) {
        return 0;
    }

    if (n == 1) {
        return 3;
    }

    if (n == 2) {
        return 4;
    }

    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2) + recursiveFibonacci(n - 3);
}

// Function to check if two arrays are equal iteratively
bool areArraysEqualIterative(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    for (size_t i = 0; i < arr1.size(); ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

// Function to check if two arrays are equal recursively
bool areArraysEqualRecursive(const std::vector<int>& arr1, const std::vector<int>& arr2, size_t index) {
    if (index == arr1.size()) {
        return true;
    }

    if (arr1[index] != arr2[index]) {
        return false;
    }

    return areArraysEqualRecursive(arr1, arr2, index + 1);
}

int main() {

    std::cout << " welcom to my project\n";
    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Fibonacci's number (iterative)\n";
        std::cout << "2. Fibonacci's number (recursive)\n";
        std::cout << "3. Are arrays equal (iterative)\n";
        std::cout << "4. Are arrays equal (recursive)\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            std::cout << "Enter the value of n: ";
            std::cin >> n;
            int result = iterativeFibonacci(n);
            std::cout << "F(" << n << ") = " << result << std::endl;
            break;
        }
        case 2: {
            int n;
            std::cout << "Enter the value of n: ";
            std::cin >> n;
            int result = recursiveFibonacci(n);
            std::cout << "F(" << n << ") = " << result << std::endl;
            break;
        }
        case 3: {
            size_t size;
            std::cout << "Enter the size of the arrays: ";
            std::cin >> size;

            std::vector<int> arr1(size), arr2(size);
            std::cout << "Enter elements of the first array:\n";
            for (size_t i = 0; i < size; ++i) {
                std::cout << "Enter element " << i + 1 << ": ";
                std::cin >> arr1[i];
            }

            std::cout << "Enter elements of the second array:\n";
            for (size_t i = 0; i < size; ++i) {
                std::cout << "Enter element " << i + 1 << ": ";
                std::cin >> arr2[i];
            }

            if (areArraysEqualIterative(arr1, arr2)) {
                std::cout << "Arrays are equal.\n";
            }
            else {
                std::cout << "Arrays are not equal.\n";
            }
            break;
        }
        case 4: {
            size_t size;
            std::cout << "Enter the size of the arrays: ";
            std::cin >> size;

            std::vector<int> arr1(size), arr2(size);
            std::cout << "Enter elements of the first array:\n";
            for (size_t i = 0; i < size; ++i) {
                std::cout << "Enter element " << i + 1 << ": ";
                std::cin >> arr1[i];
            }

            std::cout << "Enter elements of the second array:\n";
            for (size_t i = 0; i < size; ++i) {
                std::cout << "Enter element " << i + 1 << ": ";
                std::cin >> arr2[i];
            }

            if (areArraysEqualRecursive(arr1, arr2, 0)) {
                std::cout << "Arrays are equal.\n";
            }
            else {
                std::cout << "Arrays are not equal.\n";
            }
            break;
        }
        case 0:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
