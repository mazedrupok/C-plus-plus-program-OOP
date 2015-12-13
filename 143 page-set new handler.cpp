#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
void memerror (void) { //error Trapping..
    cout << "Memory Allocation Failed" << endl;
    exit (1);
}
int main()
{
    set_new_handler (memerror); //if new fails, call memerror()
    int *ptr = new int[10000];
    *ptr = 50;
    cout << "First Element is: " << *ptr << endl;
    set_new_handler (0);
    return 0;
}
