/*Sanidhya Singh
PRN-24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any integer: ";
    cin>>a;

    if (a>0){
        cout<<"Integer is positive."<<endl;
    }
    else if (a<0){
        cout<<"Integer is negative."<<endl;
    }
    else {
        cout<<"Integer is zero."<<endl;
    }
    return 0;
}

/*Output
Enter any integer: 12
Integer is positive.
*/
