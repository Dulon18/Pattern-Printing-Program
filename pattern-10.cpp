#include <iostream>

void pattern(int n) 
{
    for(int row = n; row >0; row--)
    {
        for(int space=n;space>row;space--)
        {
                std::cout<<" "; 
        }
        
        for(int col = 0; col<=row*2-1; col++)
        {
            if(row==n)
            {
                std::cout<<"*"; 
            }
            else
            {
                if(col==0||col==row*2-2)   
                     {
                       std::cout<<"*";
                     }
                  else    
                     {
                          std::cout<<" "; 
                     }
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    
    pattern(6); 
    return 0;
}

Output: Hollow Inverted Pyramid Star Pattern

************
 *       * 
  *     * 
   *   * 
    * * 
     * 
