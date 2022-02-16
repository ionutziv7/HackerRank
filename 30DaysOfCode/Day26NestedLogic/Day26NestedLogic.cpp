#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int day26(int return_day, int return_month, int return_year, int due_day, int due_month, int due_year)
{
    int fine = 0;
    if(return_year == due_year)
    {
        if(return_month == due_month)
        {
            if(return_day > due_day)
            {
                fine  = 15 * (return_day - due_day);
            }
        }
        else if(return_month > due_month)
        {
            fine  = 500 * (return_month - due_month);
        }
    }
    else if(return_year > due_year)
    {
        fine = 10000; 
    }
    return fine;
}

int main() 
{
    int return_day, return_month, return_year;
    int due_day, due_month, due_year;
    
    cin>> return_day >> return_month >> return_year;
    cin>> due_day >> due_month >> due_year;
    
    cout<<day26(return_day, return_month, return_year, due_day, due_month, due_year);
    return 0;
}
