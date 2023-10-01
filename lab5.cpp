#include <iostream>
#include <string>

using namespace std;

void displayRules();
void displayRules()
{
    cout << "  Welcome to the game of Rock, Paper, " 
         << "and Scissors." << endl;
    cout << "  This is a game for two players. For each "
         << "game, each" << endl;   
    cout << "  player selects one of the objects, Rock, "
         << "Paper or Scissors." << endl;
    cout << "  The rules for winning the game are: " << endl;
    cout << "1. If both players selects the same object, it "
         << "is a tie." << endl;
    cout << "2. Rock breaks Scissors: So player who selects "
         << "Rock wins." << endl;
    cout << "3. Paper covers Rock: So player who selects " 
         << "Paper wins." << endl;
    cout << "4. Scissors cuts Paper: So player who selects "
         << "Scissors wins." << endl << endl;
    cout << "Enter R or r to select Rock, P or p to select "
         << "Paper, and S or s to select Scissors." << endl;
}

bool validSelection(char c);
bool validSelection(char c) {
    char b = tolower(c);
    if(b == 'r' || b == 's' || b == 'p') {
        return true;
    }
    return false;
}



enum objectType {ROCK, PAPER, SCISSORS};

objectType retrievePlay (char c);
objectType retrievePlay (char c) {
    objectType play;
    switch(tolower(c)) {
        case 'r' : play = ROCK; break;
        case 'p' : play = PAPER; break;
        case 's' : play = SCISSORS; break;
    }
    return play;
}

string convertEnum(objectType play);
string convertEnum(objectType play) {
    string p;
    switch(play) {
        case ROCK : p = "ROCK"; break;
        case PAPER : p = "PAPER"; break;
        case SCISSORS : p = "SCISSORS"; break;
    }
    return p;
}
objectType winningObject(objectType play1, objectType play2);
objectType winningObject(objectType play1, objectType play2) {
    if(play1 == play2) return play1;

    switch(play1) {
        case ROCK:
            return (play2 == SCISSORS) ? ROCK : PAPER;
        case PAPER:
            return (play2 == ROCK) ? PAPER : SCISSORS;
        case SCISSORS:
            return (play2 == PAPER) ? SCISSORS : ROCK;
        default:
            return ROCK;  
    }
}

int gameResult(objectType play1, objectType play2);
int gameResult(objectType play1, objectType play2) {
    objectType winner = winningObject(play1, play2);
    string p1 = convertEnum(play1);
    string p2 = convertEnum(play2); 

    cout << "Player 1 chose " << p1 << "." << endl;
    cout << "Player 2 chose " << p2 << "." << endl;

    if(play2 == play1) {
        cout << "It's a draw!" << endl;
        return 0;
    }
    else {
        if(winner == play1) {
            cout << "Winner is Player 1!" << endl;
            return 1;
        }
        else if(winner == play2) {
            cout << "Winner is Player 2!" << "" << endl;
            return 2;
        }
    }
}


void displayResults(int winCount1, int winCount2, int gameCount);
void displayResults(int winCount1, int winCount2, int gameCount) {

    cout << gameCount << " games were played." << endl;
    cout << "Player 1 points: " << winCount1 << endl;
    cout << "Player 2 points: " << winCount2 << endl;

    if(winCount1 > winCount2) {
        cout << "Player 1 has more wins, Player 1 wins!" << endl;
    }
    else if(winCount1 < winCount2) {
        cout << "Player 2 has more wins, Player 2 wins!" << endl;
    }
    else {
        cout << "Both players have the same amount of points, it's a draw!" << endl;
    }
}

int main() {
    int gameCount = 0;
    int winCount1 = 0;
    int winCount2 = 0;
    int gamewinner = 0;
    char response;
    char selection1;
    char selection2;
    objectType play1;
    objectType play2;
    cout << "----------------------------------------------------------------------" << endl;
    displayRules();
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Player 1, do you want to play Rock, Paper, and Scissors? (Enter y/n): ";
    cin >> response;
    cout << "Player 2, do you want to play Rock, Paper, and Scissors? (Enter y/n): ";
    cin >> response;
    if(response == 'n') {
        cout << "Game Closing..." << endl;
    }

    while(response == 'y') {
        cout << "_________________________________________________________________" << endl << endl;
        cout << "Player 1, Enter your choice: ";
        cin >> selection1;
        
        
        cout << "Player 2, Enter your choice: ";
        cin >> selection2;
        cout << "_________________________________________________________________" << endl << endl;

        if(validSelection(selection1) && validSelection(selection2)) {
            play1 = retrievePlay(selection1);
            play2 = retrievePlay(selection2);
        
            int gameWinner = gameResult(play1, play2);
            if(gameWinner == 1) {
                winCount1++;
            }
            else if(gameWinner ==  2) {
                winCount2++;
            }
            gameCount++;
        }
        cout << "----------------------------------------------------------------------" << endl << endl;
        cout << "Player 1, do you want to play Rock, Paper, and Scissors? (Enter y/n): ";
        cin >> response;
        cout << "Player 2, do you want to play Rock, Paper, and Scissors? (Enter y/n): ";
        cin >> response;
        if(response == 'n') {
            cout << "Game Closing..." << endl;
            cout << "____________________________________________________________" << endl << endl;
            cout << "Game Results: " << endl;
            displayResults(winCount1, winCount2, gameCount);
            cout << "____________________________________________________________" << endl << endl;
        }
    }
    return 0;
}