#include "Date.h"

int main()
{
    Date d1;   //       9/9/2024
    Date d2(2000, 1, 1); 

    d1.showDate();
    d2.showDate();

    cout << "----------------------\n\n";
    
    d1++;   //d1.nextDate();
    --d2;   //d2.prevDate();

    d1.showDate();
    d2.showDate();

    cout << d1 << " " << d2 << endl;
}

