#include <iostream>
#include <cmath>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator 
{
  public:
    int power(int first, second)
    {
      if(first < 0 || second < 0 ) 
      {
        throw runtime_error("n and p should be non-negative");
      }
      return pow(first, second);
    }
};

int main()
{
  Calculator myCalculator = new Calculator();
  int n, p, T;
  cin>>T;
  while(T-- > 0)
  {
    if(scanf("%d %d", &n, &p) == 2) 
    {
      try
      {
        int ans = myCalculator.power(n, p);
        cout<<ans;
      }
      catch(exception &e)
      {
        cout<<e.what()<<endl;
      }
    }
  }
  return 0;
}
