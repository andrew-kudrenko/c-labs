#include <iostream>
#include <cmath>

int main()
{
  double a, b, n;
    
  std::cout << "a = ";
  std::cin >> a; 
    
  std::cout << "b = ";
  std::cin >> b;
    
  std::cout << "n = ";
  std::cin >> n;
   
  double h = (b - a) / n;
  
  std::cout << std::endl << "Function values will be below\n" << std::endl;
  
  double avg = 0, max;
  int i = 0;
  
  while(i < n)
  {
    double x = a + i * h;
    
    if ((x != 0) && (x != 1))
    {    
        double p = sqrtf((1 / x) * (powf(x, 2) - 1)), 
          q = powf(cosf(abs(x) / 3.), 2),
          r = log10(1 / (x + 1)),
          y = p * q + r;
        
        if ((i == 0) || (y > max))
        {
            max = y;
        }
        
        avg += y;
        std::cout << "x = " << x << "\t\ty = " << y << std::endl;
    } else {
        std::cout << "Incorrect value. Zero division is not allowed!" << std::endl; 
    }
    
    ++i;   
    }
      
      avg /= n;
      
      std::cout << std::endl;
      std::cout << "Average equals " << avg << std::endl;
      std::cout << "Max value is " << max << std::endl;
   
  return 0;
}
