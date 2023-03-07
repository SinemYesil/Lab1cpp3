#include <iostream>
#include <string>
using  namespace std;

int main() {
    string name;
    double labGrd, midGrd, finalGrd, lastScore;
    cout<< "Enter the student name, please:";
    cin>>name;


    cout<<"Enter the lab grade, please:";
    cin>>labGrd;

    cout<<"Enter the midterm grade, please:";
    cin>>midGrd;

    cout<<"Enter the final grade, please:";
    cin>>finalGrd;

    lastScore=0.25*labGrd+0.35*midGrd+0.40*finalGrd;


    cout<<"Name: "<<name<< endl;
    cout<<"Lab: "<<labGrd<<endl;
    cout<< "Midterm: "<<midGrd<<endl;
    cout<< "Final: "<<finalGrd<<endl;
    cout<<"Last Score:"<<lastScore<<endl;




    return 0;
}
