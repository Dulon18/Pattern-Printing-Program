#include <iostream>

void pattern(int n) 
{
    for(int row = 1; row <n; row++)
    {
        for(int space=n;space>row+1;space--)
        {
                std::cout<<" "; 
        }
        
        for(int col = 0; col<=row*2-1; col++)
        {
            if(row==n-1)
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
    
    pattern(8); 
    return 0;
}

Output: Hollow Pyramid Star Pattern

      * 
     * * 
    *   * 
   *     * 
  *       * 
 *         * 
*************
