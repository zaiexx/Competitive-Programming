#include <iostream>

using namespace std;

int main () {

    int casos;
    int n1, n2;

    cin >> casos;

    for (int i = 0; i < casos; ++i) {

        cin >> n1 >> n2;
        if (n1 > n2) {
            cout << ">" << endl;

        }else if (n1 < n2) {
            cout << "<" << endl;

        }else {
            cout << "=" << endl;

        }
    }

return 0;
}
