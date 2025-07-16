/*Sanidhya Singh
PRN-24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int m1, m2, m3, m4, m5;
    float avg;
    cout << "Enter marks for 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    cout<<"Percentage = "<<avg<<"%"<<endl;
    if (avg >= 90) {
        cout << "Grade: O" << endl;
    } else if (avg >= 85 && avg < 90) {
        cout << "Grade: A+" << endl;
    } else if (avg >= 75 && avg < 85) {
        cout << "Grade: A" << endl;
    } else if (avg >= 65 && avg < 75) {
        cout << "Grade: B+" << endl;
    } else if (avg >= 55 && avg < 65) {
        cout << "Grade: B" << endl;
    } else if (avg >= 40 && avg < 55) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }
    return 0;
}

/*Output
Enter marks for 5 subjects: 85 70 86 70 90
Percentage = 80.2%
Grade: A
*/
