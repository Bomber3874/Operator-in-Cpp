/*Sanidhya Singh
PRN-24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter X and Y coordinates: ";
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant I." << endl;
    } else if (x < 0 && y > 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant II." << endl;
    } else if (x < 0 && y < 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant III." << endl;
    } else if (x > 0 && y < 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant IV." << endl;
    } else if (x == 0 && y != 0) {
        cout << "Point (" << x << ", " << y << ") is on the Y-axis." << endl;
    } else if (y == 0 && x != 0) {
        cout << "Point (" << x << ", " << y << ") is on the X-axis." << endl;
    } else {
        cout << "Point (" << x << ", " << y << ") is at the origin." << endl;
    }
    return 0;
}

/*Output
Enter X and Y coordinates: 10 -12
Point (10, -12) is in Quadrant IV.
*/
