#include <iostream>
#include "soldiers.h"
#include <thread>
using namespace std;
void command(Soldiers& v, bool por)
{
    v.print();
    v.sort(por);
    v.print();
}
int main()
{
    Soldiers v(10);
    thread g1(command, ref(v), true);
    thread g2(command, ref(v), false);
    g1.join();
    g2.join();

}