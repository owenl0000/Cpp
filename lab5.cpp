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
    cout << " player selects one of the objects, Rock, "
         << "Paper or Scissors." << endl;
    cout << " The rules for winning the game are: " << endl;
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

void gameResult(objectType play1, objectType play2);
void gameResult(objectType play1, objectType play2) {
    string p1 = convertEnum(play1);
    string p2 = convertEnum(play2); 
    cout << "Player 1 chose " << p1 << ".";
    cout << "Player 2 chose " << p2 << ".";
    cout << "Winner is " << endl;

}

int main() {
    int gameCount;
    int winCount1;
    int winCount2;
    int gamewinner;
    char response;
    char selection1;
    char selection2;
    objectType play1;
    objectType play2;

    displayRules();
    return 0;
}