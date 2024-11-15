#include <iostream>
using namespace std;


// Global variable value
int space[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int row;
int column;
char token = 'x';
bool tie;
string n1;
string n2;

void functionOne(){
    // assign variable value
    

    // user input name
    cout << "Enter the name of the first player: \n";
    getline(cin, n1);
    cout << "Enter the name of the second player: \n";
    getline(cin, n2);
    cout << n1 << " is player 1 so he/she will play first \n";
    cout << n2 << " is player 2 so he/she will play second \n";

    // Tic-Tac-Toe Schema
    cout << "    |    |    \n";
    cout << " " << space[0][0] << "  | " << space[0][1] << "  | " << space[0][2] << "   \n";
    cout << "____|____|____\n";
    cout << "    |    |    \n";
    cout << " " << space[1][0] << "  | " << space[1][1] << "  | " << space[1][2] << "   \n";
    cout << "____|____|____\n";
    cout << "    |    |    \n";
    cout << " " << space[2][0] << "  | " << space[2][1] << "  | " << space[2][2] << "   \n";
    cout << "    |    |    \n";
}

void functionTwo(){
    int digit;

    if(token=='x')
    {
        cout << n1 << "please enter";
        cin >> digit;
    }

    if(token=='0')
    {
        cout << n2 << "please enter";
        cin >> digit;
    }

    // for Tic Tac Toe Schema =========>

    // For line 1 in tic tac toe
    if(digit==1){
        row = 0;
        column = 0;
    }

    if(digit==2){
        row = 0;
        column = 1;
    }

    if(digit==3){
        row = 0;
        column = 2;
    }

    // For Line 2 in tic tac toe
    if(digit==4){
        row = 1;
        column = 0;
    }

    if(digit==5){
        row = 1;
        column = 1;
    }

    if(digit==6){
        row = 1;
        column = 2;
    }

    // For Line 3 in tic tac toe
    if(digit==7){
        row = 2;
        column = 0;
    }

    if(digit==8){
        row = 2;
        column = 1;
    }

    if(digit==9){
        row = 2;
        column = 2;
    }

    else {
        cout << "invalid !!!" << endl;
    }

    // Condition =========>
    if(token == 'x' && space[row][column] != 'x' && space[row][column] != '0'){
        space[row][column] = 'x';
        token = '0';
    } else if(token == '0' && space[row][column] != 'x' && space[row][column] != '0'){
        space[row][column] = 'x';
        token = 'x';
    } else {
        cout << "there is no empty space" << endl;
        functionTwo();
    }
}

bool functionThree(){
    for(int i = 0; i < 3; i++){
        if(space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        return true;
    }
    
    // Condition for wining the game
    if(space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0]){
        return true;
    }

    // Checking the game, wheather the game still goes on or finish
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(space[i][j] != 'x' && space[i][j] != '0'){
                return false;
            }
        }
    }
    tie = true;
    return false;
}