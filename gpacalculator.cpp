#include <iostream>

using namespace std;


int main() {
    int classnum;                                               //keeps track # of classes
    float average;                                              //adds all classe gpa together
    cout << "Enter Number of Classes: \n"; 
    cin >> classnum;
    cout << to_string(classnum) + "\n";                         //debug makes sure we got the right number of classes

    for (int i=0; i< classnum; i++){
        cout << "Enter Grade for class #" + to_string(i+1) + ":\n" ;
        float cg;                                              //current grade for for loop
        cin >> cg;                                 
        average = cg + average;
        cout << to_string(average) + "\n";
    };
    cout << average/classnum;
    return 0;
}