#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void print()
{
    cout<<"Print"<<endl;
}
int main()
{
    cout << "Hello World!" << endl;
    system("pause");
    return 0;
}
