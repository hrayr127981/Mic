// Example program
#include <iostream>
#include <string>
using namespace std;
int get_str_size(const char* p)
{
        int sum = 0;
            while (*p != '/0')
                    {
                               sum += 1;
                                      p++;
                                          }
                                                  return sum;
}    
int main()
{
      std::cout<<get_str_size ("hello");
}

