#include <iostream>
void pattern(int n) 
{
    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n) 
            {
                std::cout << "*";
            } else {
                std::cout << " "; 
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    
    pattern(4); 
    return 0;
  
}

Output : Hollow Square Star Pattern
---------
****
*  *
*  *
****
