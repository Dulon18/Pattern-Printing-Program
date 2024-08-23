#include <iostream>

void pattern(int n) 
{
    for(int row = 1; row <= n; row++)
    {
        for (int space = n - row; space <=2; space++) {
            std::cout << " ";
        }
        for(int col = 1; col <= n; col++)
        {
             std::cout<<"*"; 
        }
        std::cout << std::endl;
    }
}

int main() {
    
    pattern(4); 
    return 0;
}

Output:

****
 ****
  ****
   ****