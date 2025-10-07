// Area of a rectangle by taking inputs from the user
#include<iostream>
using namespace std;
class Rectangle_Area
{
    public:
    int length;
    int breadth;
    void enter_dimensions()
    {
        cout<<"Enter the length of the rectangle: ";
        cin>>length;
        cout<<"Enter the breadth of the rectangle: ";
        cin>>breadth;
    }
   int calculate_area()
    {
        return length * breadth;
    }
    void display_area()
    {
        cout << "The area of the rectangle is: " << calculate_area() << endl;
    }
};
int main()
{
    Rectangle_Area rect;
    rect.enter_dimensions();
    rect.display_area();
    return 0;
}
/*Output:
Enter the length of the rectangle: 12
Enter the breadth of the rectangle: 4
The area of the rectangle is: 48
*/
