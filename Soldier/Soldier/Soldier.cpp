#include <iostream>
#include "soldiers.h"
int main()
{
    Soldiers test(10);
    test.print();
    test.sort();
    cout << '\n';
    test.print();

}