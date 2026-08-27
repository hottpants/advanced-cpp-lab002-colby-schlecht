#include "project/exercise.hpp"
#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

// Exercise 1: sum all values from 1 to 100
int sum_1_to_100() {
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    return sum;
}

// Exercise 2: factorial of n
int factorial(int n) {
    // TODO: Add the code to compute factorial.
    int result = 1;
    for (int i = n; i > 0; i--) {
        result *= i;
    }
    
    return result;
}

// Exercise 3: check if a number is even
bool is_even(int value) {
    // TODO: Add code to return true if value is even.
    if (value%2 == 0) {
        return true;
    }
    else {
        return false;
    }
    return 0;
}

// Exercise 4: maximum value in an array
int max_value(const int arr[], int size) {
    // TODO: Add code to find the maximum value.
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

// Exercise 5: minimum value in an array
int min_value(const int arr[], int size) {
    // TODO: Add code to find the minimum value.
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

// Exercise 6: average of array values
double average_of_array(const int arr[], int size) {
    // TODO: Add code to compute the average.
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum/double(size);
}

// Exercise 7: sum of digits in an integer
int sum_of_digits(int n) {
    // TODO: Add code to add all digits in n.
    int sum = 0;
    while (n != 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

// Exercise 8: reverse a string
std::string reverse_string(const std::string& text) {
    std::string reversedText = text;
    reverse(reversedText.begin(), reversedText.end());
    return reversedText;
}

// Exercise 9: count vowels in a string
int count_vowels(const std::string& text) {
    // TODO: Add code to count vowels.
    int count = 0;
    for(char c : text) {
        std::tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Exercise 10: determine whether a number is prime
bool is_prime(int n) {
    // Add code
    for(int i = 2; 2*i <= n; i++) { // I only have to check the first half of numbers adding up to the target number
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

// Exercise 11: power function
int power(int base, int exponent) {
    // TODO: Add code to compute base^exponent.
    int total = base;
    for (int i = 1; i < exponent; i++) {
        total = total*base;
    }
    return total;
}

// Exercise 12: nth Fibonacci number
int fibonacci(int n) {
    // TODO: Add code to compute the nth Fibonacci number.
    int nextN = 1;
    int prevN = 0;
    int temp;
    for(int i = 0; i < n; i++) {
        temp = nextN;
        nextN = nextN + prevN;
        prevN = temp;
        n = nextN;
    }
    return n;
}
