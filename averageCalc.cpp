// Created by: Finn Kitor
// Created on: December 11th, 2023
// this program generates 10 numbers between 0 to 100 and calculates the average of them.
#include <iostream>
#include <cstdlib>
#include <ctime>

// Constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

void generateRandomNumbers(int arr[]) {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        // Generate a random number between MIN_NUM and MAX_NUM
        arr[i] = std::rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
    }
}

double calculateAverage(int arr[]) {
    int sum = 0;

    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / MAX_ARRAY_SIZE;
}

int main() {
    int numbers[MAX_ARRAY_SIZE];

    // Generate random numbers
    generateRandomNumbers(numbers);

    // Print the generated numbers
    std::cout << "Generated numbers: ";
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Calculate and print the average
    double average = calculateAverage(numbers);
    std::cout << "Average: " << average << std::endl;

    return 0;
}