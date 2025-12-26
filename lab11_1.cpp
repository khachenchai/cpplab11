#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



int main() {
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    int i = 0, ran;
    string grade, wow;
    while (i < 3) {
        getline(cin, wow);
        i++;
    }
    ran = rand() % 9 + 0;
    if (ran == 0) grade = "A";
    else if (ran == 1) grade = "B+";
    else if (ran == 2) grade = "B";
    else if (ran == 3) grade = "C+";
    else if (ran == 4) grade = "C";
    else if (ran == 5) grade = "D+";
    else if (ran == 6) grade = "D";
    else if (ran == 7) grade = "F";
    else if (ran == 8) grade = "W";

    cout << "You will get " << grade << " in this 261102.";
    return 0;
}
