//Rock-Paper-Scissors
#include <ostream>
#include <iostream>
#include <cstdlib>

using namespace std;

//Chars for rock paper scissors
const char *r;
const char *p;
const char *s;

int choice; //Menu Choice

int main()
{

    cout << "-------------------------------" << endl;
    cout << "Let's play Rock Paper Scissors!" << endl;
    cout << "-------------------------------" << endl
         << endl;

    cout << "Rock Paper Scissors is a hand game, usually played between two people although in this version you will play against the computer,\nin which each player simultaneously forms one of three shapes with an outstretched hand. These shapes are rock, paper, and scissors." << endl
         << endl;
    do
    {
        
        cout << "Please pick 1 of the 3 selections" << endl;
        cout << "1 = Rock:" << endl;
        cout << "2 = paper:" << endl;
        cout << "3 = Scissors:" << endl;
        cout << "0 = Exit" << endl;
        cin >> choice;
        
        int computer = rand() % 3 + 1;
        cout << "Looks like the computer chose: " << computer << endl;
        


        if (choice == 1 && computer == 1)
        {
            cout << "Rock cannot beat rock although you can keep trying";
        }
        else if (choice == 1 && computer == 2)
        {
            cout << "Rock cannot beat paper";
        }
        else if (choice == 1 && computer == 3)
        {
            cout << "Looks like this rock is pretty strong";
        }
        else if (choice == 2 && computer == 1)
        {
            cout << "Looks like the paper has covered the rock";
        }
        else if (choice == 2 && computer == 2)
        {
            cout << "Paper cannot cover paper unless you're trying to hide something";
        }
        else if (choice == 2 && computer == 3)
        {
            cout << "You paper has been cut";
        }
        else if (choice == 3 && computer == 1)
        {
            cout << "Your Scissors seem to be destroyed now";
        }
        else if (choice == 3 && computer == 2)
        {
            cout << "Looks like you cut that paper";
        }
        else if (choice == 3 && computer == 3)
        {
            cout << "Looks like a sword fight although neither of you can win";
        }
        else if (choice == 0)
        {
            cout << "Thanks for playing" << endl;
            return 0;
        }
        else if (choice <1 || choice > 3)
        {
            cout << "Please select one of the selections as shown above, if you wish to quit, enter 0" << endl;
        }


    } while (true);
    return 0;
}