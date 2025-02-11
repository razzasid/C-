// Example 3: Three Dimensional Array

// C++ Program to Store value entered by user in
// three dimensional array and display it.

#include <iostream>
using namespace std;

int main() {
    // This array can store upto 12 elements (2x3x2)
    int test[2][3][2] = {
                            {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            }, 
                            {
                                {7, 8}, 
                                {9, 10}, 
                                {11, 12}
                            }
                        };

    // Displaying the values with proper index.
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }

    return 0;
}

// The basic concept of printing elements of a 3d array is similar to that of a 2d array.

// However, since we are manipulating 3 dimensions, we use a nested for loop with 3 total loops instead of just 2:

// the outer loop from i == 0 to i == 1 accesses the first dimension of the array
// the middle loop from j == 0 to j == 2 accesses the second dimension of the array
// the innermost loop from k == 0 to k == 1 accesses the third dimension of the array
// As we can see, the complexity of the array increases exponentially with the increase in dimensions.