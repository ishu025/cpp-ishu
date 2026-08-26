#include <iostream>
using namespace std;
int main(){
    string name;
    int x, y, area, pri;
    cout << "Enter Your Name: " << endl;
    cin >> name;
    cout << "Enter the lenght of rectangle: " << endl;
    cin >> x;
    cout << "Enter the breath of rectangle: " << endl;
    cin >> y;
    area = x * y;
    pri = 2*x+2*y;
    cout << "Area of rectangle is : " << area << endl;
    cout << "Perimeter of the rectangle is : " << pri << endl;
    
    return 0;
}