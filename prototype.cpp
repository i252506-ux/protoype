#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <windows.h>
#include <string>
using namespace std;

const string shipName[5] = {
    "Aircraft Carrier",
    "Battleship",
    "Destroyer",
    "Submarine",
    "Patrol Boat"
};

const int shipSize[5] = {5, 4, 3, 3, 2};

void initializeBoard(char board[10][10])
{
    for(int i = 0;i < 10;i++)
        for(int j = 0;j < 10;j++)
            board[i][j] = '~';
}

void setColor(int textColor, int bgColor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), bgColor * 16 + textColor);
}

void printBoard(char board[10][10],bool hideShips)
{
    // Print column headers (hardcoded)
    cout << "     0    1    2    3    4    5    6    7    8    9  " << endl;
    // Top border
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;

    // Row 0
    cout << "  0 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[0][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0, 8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 1
    cout << "  1 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[1][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0, 8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 2
    cout << "  2 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[2][i];
        if (cell == 'X') { setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦"; }
        else if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0,8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 3
    cout << "  3 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[3][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0,8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 4
    cout << "  4 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[4][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0,8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 5
    cout << "  5 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[5][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0,8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 6
    cout << "  6 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[6][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0,8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 7
    cout << "  7 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[7][i];
        if (cell == 'O') { setColor(0, 8); cout << "  O  "; setColor(7,0); cout << "¦"; }
        else if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 8
    cout << "  8 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[8][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0,8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----¦" << endl;

    // Row 9
    cout << "  9 ¦";
    for (int i = 0; i < 10; i++)
    {
        char cell = board[9][i];
        if(cell == '~'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(hideShips && cell == 'S'){
            setColor(7, 1); cout << "  ~  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'S' && !hideShips){
            setColor(0, 7); cout << "  S  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'X') {
            setColor(15, 12); cout << "  X  "; setColor(7,0); cout << "¦";
        }
        else if(cell == 'O') {
            setColor(0,8); cout << "  O  "; setColor(7,0); cout << "¦";
        }
    }
    cout << endl;

    // Bottom border
    cout << "    +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
}

void clearScreen() {
    for (int i = 0; i < 30; i++)
        cout << "\n";
}

void setRandomShips(int &row, int &col, bool &vertical, string shipName, int shipSize)
{
    char dir;

    cout << "\nPlacing: " << shipName << " (size " << shipSize << ")\n";

    cout << "Enter starting row (1-10): ";
    cin >> row;

    cout << "Enter starting column (1-10): ";
    cin >> col;

    cout << "Direction Horizontal(h) or Vertical(v): ";
    cin >> dir;

    row--;  // convert to 0-index
    col--;

    vertical = (dir == 'v' || dir == 'V');
}

void placeShipsManual(char board[10][10], string playerName)
{
    cout << "\n=== " << playerName << " - Manual Ship Placement ===\n";

    for (int s = 0; s < 5; s++)
    {
        string sn = shipName[s];
        int ss = shipSize[s];

        bool placed = false;

        while (!placed)
        {
            int row, col;
            bool vertical;

            // Ask player for ship location
            setRandomShips(row, col, vertical, sn, ss);

            // Validate placement
            bool valid = true;

            if (vertical)
            {
                if (row + ss > 10) valid = false;
                else {
                    for (int i = 0; i < ss; i++)
                        if (board[row + i][col] != '~')
                            valid = false;
                }
            }
            else
            {
                if (col + ss > 10) valid = false;
                else {
                    for (int i = 0; i < ss; i++)
                        if (board[row][col + i] != '~')
                            valid = false;
                }
            }

            if (!valid)
            {
                cout << "Invalid placement! Try again.\n";
                continue;
            }

            // Place the ship on the board
            if (vertical)
                for (int i = 0; i < ss; i++)
                    board[row + i][col] = 'S';
            else
                for (int i = 0; i < ss; i++)
                    board[row][col + i] = 'S';

            cout << sn << " placed successfully!\n";
            placed = true;
        }
    }

    cout << "\nAll ships placed for " << playerName << "!\n";
}

bool allShipsSunk(char board[10][10]) {
    for (int r = 0; r < 10; r++)
        for (int c = 0; c < 10; c++)
            if (board[r][c] == 'S')
                return false;
    return true;
}

bool alreadyAttacked(char board[10][10], int r, int c) {
    return board[r][c] == 'X' || board[r][c] == 'O';
}

bool playerAttackTurn(char opponentBoard[10][10], string attackerName, int &score) {
    cout << attackerName << "'s turn to attack.\n";
    
    printBoard(opponentBoard, true);  // show hits/misses but hide ships

    int row, col;

    // ask for target location
    cout << "Enter attack row (0-9): ";
    cin >> row;
    cout << "Enter attack column (0-9): ";
    cin >> col;

    // basic validation to avoid out-of-range crashes
    if (row < 0 || row >= 10 || col < 0 || col >= 10) {
        cout << "Invalid coordinates. Turn wasted.\n";
        return false;
    }

    // Validate: already attacked?
    if (alreadyAttacked(opponentBoard, row, col)) {
        cout << "You already attacked this cell! Turn wasted.\n";
        return false;
    }

    // Determine hit or miss
    if (opponentBoard[row][col] == 'S') {
        opponentBoard[row][col] = 'X'; // hit
        score += 10;
        cout << "Hit! +10 points.\n";
    } else {
        opponentBoard[row][col] = 'O'; // miss
        score -= 1;
        cout << "Miss. -1 point.\n";
    }

    // Check if all ships sunk
    if (allShipsSunk(opponentBoard)) {
        cout << attackerName << " has destroyed all enemy ships!\n";
        return true;
    }

    return false;
}

void displayResults(string p1, string p2, int score1, int score2)
{
    cout << "\n======================================\n";
    cout << "            FINAL RESULTS             \n";
    cout << "======================================\n";

    cout << p1 << "'s Score: " << score1 << endl;
    cout << p2 << "'s Score: " << score2 << endl;

    cout << "--------------------------------------\n";

    if (score1 > score2) {
        cout << p1 << " wins the match with a higher score!\n";
    }
    else if (score2 > score1) {
        cout << p2 << " wins the match with a higher score!\n";
    }
    else {
        cout << "It's a tie! Both players performed equally well.\n";
    }

    cout << "======================================\n";
}

void takeTurnsPVP(char board1[10][10], char board2[10][10], string p1, string p2) {
    int score1 = 0;
    int score2 = 0;
    bool player1Turn = true;

    while (true) {
        if (player1Turn) {
            cout << "\n--- " << p1 << "'s Turn ---\n";
            if (playerAttackTurn(board2, p1, score1)) {
                cout << p1 << " wins the battle!\n";
                break;
            }
        } else {
            cout << "\n--- " << p2 << "'s Turn ---\n";
            if (playerAttackTurn(board1, p2, score2)) {
                cout << p2 << " wins the battle!\n";
                break;
            }
        }

        // After each turn, hide information
        cout << "\nTurn complete. Press Enter and hand over to the other player...";
        cin.ignore();
        cin.get();
        clearScreen();

        player1Turn = !player1Turn;  // switch turns
    }
    displayResults(p1, p2, score1, score2);
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    char player1Board[10][10];
    char player2Board[10][10];

    initializeBoard(player1Board);
    initializeBoard(player2Board);

    string player1Name, player2Name;

    cout << "Enter Player 1 Name: ";
    getline(cin, player1Name);
    cout << "Enter Player 2 Name: ";
    getline(cin, player2Name);

    placeShipsManual(player1Board, player1Name);
    clearScreen();
    placeShipsManual(player2Board, player2Name);
    clearScreen();

    takeTurnsPVP(player1Board, player2Board, player1Name, player2Name);

    return 0;
}
