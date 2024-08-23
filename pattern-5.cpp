#include <iostream>

void pattern(int n) 
{
    for(int row = 1; row <= n; row++)
    {
        
        for(int col = row; col <=n; col++)
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
***
**
*
