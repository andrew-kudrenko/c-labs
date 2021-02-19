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
  
  int i = 0;
  
  while (i < n)
  {
    double x = a + i * h,
      p = sqrtf((1 / x) * (powf(x, 2) - 1)), 
      q = powf(cosf(abs(x) / 3.), 2),
      r = log10(1 / (x + 1)),
      y = p * q + r; 
      
    std::cout << "x = " << x << "\t\ty = " << y << std::endl;
    
    ++i;
  }
   
  return 0;
}
