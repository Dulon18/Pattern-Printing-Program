// Online C++ compiler to run C++ program online
#include <iostream>

void pattern(int n) 
{
    // Upper half of the diamond (including the middle row)
    for(int row = 0; row < n; row++)
    {
        for(int space = n; space > row + 1; space--)
        {
            std::cout << " "; 
        }
        
        for(int col = 0; col <= row; col++)
        {
            std::cout << "*"; 
        }
        std::cout << std::endl;
    }

    // Lower half of the diamond
    for (int row = n - 2; row >= 0; row--) // Start from n-2 to avoid repeating the middle row
    {
        for (int space = n; space > row + 1; space--) 
        {
            std::cout << " ";
        }
        for (int col = 0; col <= row; col++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    pattern(5); // You can change the value for a larger or smaller diamond
    return 0;
}


Output: Half Diamond Star Pattern Inverted

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *





