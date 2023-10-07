#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <sstream>
using namespace std;

int random_choice() {
    srand((unsigned)time(NULL));
    int a, b;
    a = 0;
    b = 2;
    int random_num = (rand() % (b - a + 1) + a);
    return random_num;
}

int main() {
    string choices[3] = { "Scissor", "Paper", "Rock" };
    string user_choice;
    string computer_choice;
    string quit = "Quit";
    int user_point = 0;
    int computer_point = 0;
    cout << "Welcome to Rock, Paper, Scissor Game!" << endl;
    cout << "You will play forever until you enter 'Quit'" << endl;
    while (1) {
        cout << "Rock, Paper, Scissor? " << endl;
        cin >> user_choice;

        if (user_choice == quit) {
            break;
        }

        if (user_choice != "Rock" && user_choice != "Paper" && user_choice != "Scissor") {
            cout << "Invalid input!" << endl;
        }

        while (user_choice != "Rock" && user_choice != "Paper" && user_choice != "Scissor") {
            cin >> user_choice;
            if (user_choice != "Rock" && user_choice != "Paper" && user_choice != "Scissor") {
                cout << "Invalid input!" << endl;
                continue;
            }
        }
        cout << "Your choice:" << user_choice << endl;
        computer_choice = choices[random_choice()];
        cout << "Computer's choice:" << computer_choice << endl;

        if (user_choice == computer_choice) {
            cout << "Draw!" << endl;
            cout << "Your point:" << user_point << endl;
            cout << "Computer point:" << computer_point << endl;
            cout << endl;
        }
        else if (user_choice == "Rock") {
            if (computer_choice == "Paper") {
                cout << "Computer wins!" << endl;
                ++computer_point;
                cout << "Your point:" << user_point << endl;
                cout << "Computer point:" << computer_point << endl;
                cout << endl;
            }
            else {
                cout << "You win!" << endl;
                ++user_point;
                cout << "Your point:" << user_point << endl;
                cout << "Computer point:" << computer_point << endl;
                cout << endl;
            }
        }
        else if (user_choice == "Paper") {
            if (computer_choice == "Scissor") {
                cout << "Computer wins!" << endl;
                ++computer_point;
                cout << "Your point:" << user_point << endl;
                cout << "Computer point:" << computer_point << endl;
                cout << endl;
            }
            else {
                cout << "You win!" << endl;
                ++user_point;
                cout << "Your point:" << user_point << endl;
                cout << "Computer point:" << computer_point << endl;
                cout << endl;
            }
        }
        else if (user_choice == "Scissor") {
            if (computer_choice == "Rock") {
                cout << "Computer wins!" << endl;
                ++computer_point;
                cout << "Your point:" << user_point << endl;
                cout << "Computer point:" << computer_point << endl;
                cout << endl;
            }
            else {
                cout << "You win!" << endl;
                ++user_point;
                cout << "Your point:" << user_point << endl;
                cout << "Computer point:" << computer_point << endl;
                cout << endl;
            }
        }
    }
    cout << "Your final point:" << user_point << endl;
    cout << "Computer final point:" << computer_point << endl;
    if (user_point > computer_point) {
        cout << "You win!" << endl;
    }
    else if (user_point < computer_point) {
        cout << "Computer win!" << endl;
    }
    else if (user_point == computer_point) {
        cout << "Draw!" << endl;
    }
    return 0;
}