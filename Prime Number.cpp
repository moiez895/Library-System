#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to find prime numbers in a given range
void findPrimesInRange(int lowerBound, int upperBound) {
    cout << "Prime numbers between " << lowerBound << " and " << upperBound << " are: ";

    for (int i = lowerBound; i <= upperBound; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    char choice;

    cout << "Choose an option: \n a. Find prime numbers in a range \n b. Check if a number is prime" << endl;
    cin >> choice;

    switch (choice) {
    case 'a':
        int lowerBound, upperBound;
        cout << "Enter the range (minimum and maximum): ";
        cin >> lowerBound >> upperBound;
        findPrimesInRange(lowerBound, upperBound);
        break;

    case 'b':
        int number;
        cout << "Enter a number: ";
        cin >> number;
        if (isPrime(number)) {
            cout << number << " is a prime number." << endl;
        }
        else {
            cout << number << " is not a prime number." << endl;
        }
        break;
    }

    return 0;
}
