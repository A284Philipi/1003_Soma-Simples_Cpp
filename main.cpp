#include <iostream>

using namespace std;

int main()
{
    double raio, area;
    cin >> raio;
    area = 3.14159*(raio*raio);
    cout.precision(4);
    cout << fixed << "A=" << area <<endl;
    return 0;
}
