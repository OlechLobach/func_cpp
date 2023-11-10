#include <iostream>
#include <string>

using namespace :: std;

bool isValidRank(const string& rank) {
    const string validRanks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    const int numValidRanks = sizeof(validRanks) / sizeof(validRanks[0]);

    for (int i = 0; i < numValidRanks; ++i) {
        if (rank == validRanks[i]) {
            return true;
        }
    }

    return false;
}


bool isValidSuit(char suit) {
    const char validSuits[] = { 'C', 'D', 'H', 'S' };

    for (int i = 0; i < sizeof(validSuits) / sizeof(validSuits[0]); ++i) {
        if (suit == validSuits[i]) {
            return true;
        }
    }

    return false;
}

void displayCard(const string& rank, char suit) {
  
    cout << " _______\n";
    cout << "| " << rank << "     |\n";
    cout << "|       |\n";
    cout << "|   " << suit << "   |\n";
    cout << "|       |\n";
    cout << "|     " << rank << " |\n";
    cout << " ‾‾‾‾‾‾‾\n";
}

int main() {
    
    string rank;
    char suit;

    cout << "Enter the rank of the card (e.g., 2, 10, J, Q, K, A): ";
    cin >> rank;

    
    if (!isValidRank(rank)) {
        cout << "Error: Invalid rank. Please enter a valid rank.\n";
        return 1; 
    }

    cout << "Enter the suit of the card (C - clubs, D - diamonds, H - hearts, S - spades): ";
    cin >> suit;

    
    if (!isValidSuit(suit)) {
        cout << "Error: Invalid suit. Please enter a valid suit.\n";
        return 1; 
    }

    
    displayCard(rank, suit);

    return 0;
}
