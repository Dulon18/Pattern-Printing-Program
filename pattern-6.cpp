#include <iostream>

void pattern(int n) 
{
    for(int row = 0; row < n; row++)
    {
        for(int space=n;space>row+1;space--)
        {
                std::cout<<" "; 
        }
        
        for(int col = 0; col<=row*2; col++)
        {
             std::cout<<"*"; 
        }
        std::cout << std::endl;
    }
}

int main() {
    
    pattern(5); 
    return 0;
}
