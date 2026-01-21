#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));            // random seed
    int secret = rand() % 10 + 1;
    int guess;
    int tries = 0;
    cout << "Guess a number between 1 and 10" << endl;

    while (tries < 5) {
        tries++ ;
        cout << "Your guess: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too high!" << endl;
        } else if (guess < secret) {
            cout << "Too low!" << endl;
        } else {
            cout << "Correct! 🎉" << endl;
            break;
        }
    }
    if (guess != secret) {
        cout << "Sorry! The number was " << secret << endl;
    }
    return 0;
}
