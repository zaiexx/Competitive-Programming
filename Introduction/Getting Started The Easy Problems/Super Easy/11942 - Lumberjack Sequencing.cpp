#include <iostream>

using namespace std;


int main () {

    int casos;
    int lenadores[10];

    cin >> casos;
    cout << "Lumberjacks:" << endl;

    for (int k = 0; k < casos; k++) {

        for (int i = 0; i < 10; i++) {
            cin >> lenadores[i];
        }

        int creciente = 0;
        int decreciente = 0;


        for (int i = 0; i < 9; i++) {
            if (lenadores[i] < lenadores[i+1]) {
                creciente =  creciente + 1;
            }
            if(lenadores[i] > lenadores[i+1]) {
                decreciente = decreciente + 1;
            }
        }

        if (creciente == 9 || decreciente == 9) {
            cout << "Ordered" << endl;
        }else {
            cout << "Unordered" << endl;
        }

    }


return 0;
}
