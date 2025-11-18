/*
 * Course: Csharp Basics For Beginners Learn Csharp Fundamentals By Coding
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Csharp Basics For Beginners Learn Csharp Fundamentals By Coding
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for printing

// Function to add two integers
int add(int a, int b) { // Begin add function
  return a + b; // Return sum
} // End add

// Function to print elements of an integer array
void print_array(const int *arr, size_t n) { // Begin print_array
  for (size_t i = 0; i < n; ++i) { // Loop over array
    printf("arr[%zu]=%d\n", i, arr[i]); // Print element
  } // End loop
} // End print_array

// Entry point
// Main routine: orchestrates the csharp basics for beginners learn csharp fundamentals by coding scenario
int main(void) { // Start main
  printf("C# Basics (C analog fundamentals)\n"); // Title output
  int x = 3; // Declare integer x
  int y = 4; // Declare integer y
  int z = add(x, y); // Call add function
  printf("%d+%d=%d\n", x, y, z); // Print result
  int nums[] = {1, 2, 3, 4}; // Initialize an integer array
  print_array(nums, sizeof(nums) / sizeof(nums[0])); // Print array contents
  if (z > 5) { // Conditional check
    printf("z>5\n"); // Print branch
  } else { // Else branch
    printf("z<=5\n"); // Print branch
  } // End conditional
  for (int i = 0; i < 3; ++i) { // For loop example
    printf("i=%d\n", i); // Print loop index
  } // End loop
  return 0; // Return success
} // End main

