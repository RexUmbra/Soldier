#include <iostream>
#include "soldiers.h"
#include <thread>
using namespace std;
void command(Soldiers& v, bool por)
{
    
    v.sort(por);
    
}
void command2(Soldiers& v, bool por)
{
    v.sortGun(por);
}
int main()
{
    Soldiers v(10);
    v.print();
    v.printGun();
    thread g1(command, ref(v), true);
    thread g2(command2, ref(v), true);
    g1.join();
    g2.join();
    v.print();
    v.printGun();
}