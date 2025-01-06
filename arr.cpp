#include <iostream>
using namespace std;

int main (){
    const int MAX_SEATS = 100;
    string names [MAX_SEATS] = { "zaeem", "hammad", "hamza" };
    int marks [MAX_SEATS] = {800 , 700 , 600};
    int ages [MAX_SEATS] = {20 , 19 , 18};
    cout << "names" << "\t" << "marks" << "\t" << "ages" <<endl;
    for (int i = 0; i < 3; i++) {
        cout << names[i] << "\t" << marks[i] << "\t" << ages[i] <<endl;


    }
    return 0;
}