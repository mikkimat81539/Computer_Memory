/*Create a slot machine that stores reels as arrays, lets the player place a bet, 
randomly selects numbers for each reel, and updates the player’s credit based on matches.
use encapsulation*/

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Slot {
    private:
        int credit;

        int reel1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int reel2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int reel3[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

        int payline[3] = {reel1[7], reel2[7], reel3[7]}; // must land on all 7 to win

    public:
        int bet;
        int remaining; // credit remaining

    Slot(int bet) { // constructor
        credit = 1000;
        this -> bet = bet; // place a bet
        remaining = credit - bet; // remove bet from credit
    }

    // Methods
    int randomReel(){
        // Randomize each reel
        srand(time(0));
        int randomNum1 = rand() % 10;
        int randomNum2 = rand() % 10;
        int randomNum3 = rand() % 10;
        int combination[3] = {randomNum1, randomNum2, randomNum3};


        for(int i : combination){
            cout << i << " ";
        }


        bool isEqual = equal(begin(payline), end(payline), begin(combination));

        cout << "\n" << endl;

        if (isEqual) {
            cout << "You win" << endl;
            return credit + 100;
        }
        else {
            cout << "You lose" << endl;
        }
        
        return 0;

    }

    // GETTER Method
    int getRemaining(){
        return remaining;
    }


};


int main() {
    while (true){
        cout << "How much would you like to bet: ";
        int betInput;
        cin >> betInput;

        Slot play(betInput);

        cout << "You have $" << play.getRemaining() << " remaining in credit." << endl;

        cout << play.randomReel() << endl;

        cout << "Do you want to keep playing yes or no: ";

        string playInput;

        cin >> playInput;

        if (playInput == "yes") {
            continue;
        }

        else if (playInput == "no") {
            break;
        }

        else {
            cout << "Not a valid input" << endl;
        }
    }

    return 0;
}