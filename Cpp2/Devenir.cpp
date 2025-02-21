#include <iostream>
using namespace std;
int main() {
    int interval = std::rand() % 100; 
    int n;

    cout << "Devinir un nombre entre 1 et 100 : ";

    do {
        cin >> n;

        if (n< interval) {
            cout << "Ce trop petit ! resseyer ";
        } else if (n> interval) {
            cout << "Ce trop grand ! resseyez: ";
        } else {
            cout << "Vous avez deviné le nombre,felicitaion " <<endl;
        }
    } while (n != interval);

    return 0;
