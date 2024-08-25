#include <iostream>

void pattern(int n) 
{
   for (int row = n; row >= 1; row--)
    {
        for (int space = 1; space <= n - row; space++) 
        {
            std::cout << " ";
        }
        for (int col = 1; col <= (2 * row - 1); col++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    
    pattern(5); 
    return 0;
}

Output : Inverted Pyramid Star Pattern

*********
 *******
  *****
   ***
    *
