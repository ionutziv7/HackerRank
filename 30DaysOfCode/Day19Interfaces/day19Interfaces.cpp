#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;

class AdvancedArithmetic {
  public:
    virtual int divisorSum(int n) = 0; //we can't instantiate an object on this class //abstract divisorSum(int n)
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int s=0, i=1;
        while(i<=n) {
            if(n%i==0) {
                s=s+i;
                //n=n/i;
                i++;
            }
            else {
                i++;
            }
        }
        return s;
    }
};
 
int main()
{
   int n;
   cin>>n;
   AdvancedArithmetic *myCalculator = new Calculator();
   int sum = myCalculator->divisorSum(n);
   cout<<"I implemented: AdvancedArithmetic\n"<<sum;
    return 0;
}
