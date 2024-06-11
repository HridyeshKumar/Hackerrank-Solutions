//Area of Rectangle   
#include <iostream>
using namespace std;
class Rectangle {
public:
    virtual void display() const {
        cout << width << ' ' << height << endl;
    }
protected:
    int width;
    int height;
};
class RectangleArea : public Rectangle {
public:
    void display() const override {
        cout << (width * height) << endl;
    }
    void read_input() {
        cin >> width >> height;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
