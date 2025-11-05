#include<iostream>
#include<vector>
#include<utility>
#include<iomanip>
using namespace std;


/*1. this function will return indexes as per selected box*/
pair<int, int> getPair(int box){
    if(box == 1) return {0,0};
    if(box == 2) return {0,1};
    if(box == 3) return {0,2};

    if(box == 4) return {1,0};
    if(box == 5) return {1,1};
    if(box == 6) return {1,2};

    if(box == 7) return {2,0};
    if(box == 8) return {2,1};
    return {2,2};
}

/*2. this will check if the selected box is empty or not*/
bool isBoxEmpty(vector<vector<char>> board, pair<int, int> box){
    if(board[box.first][box.second] == 'X' || board[box.first][box.second] == 'Y') return false;
    return true; // means it is equal to any number
}

/*3. it will check if line completed or not*/
bool isLineCompleted(vector<vector<char>> board, pair<int, int> box, int player){
    // player 1 will have odd number
    if(player%2 == 1){
        // checking that row (pair's first element shows row's index)
        if(board[box.first][0] == 'X' && board[box.first][1] == 'X' && board[box.first][2] == 'X') return true;

        // checking that coloumn
        if(board[0][box.second] == 'X' && board[1][box.second] == 'X' && board[2][box.second] == 'X') return true;

        // diagonals
        if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') return true;
        if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') return true;

        return false;
    }

    // checkings for player 2
    if(board[box.first][0] == 'Y' && board[box.first][1] == 'Y' && board[box.first][2] == 'Y') return true;

    if(board[0][box.second] == 'Y' && board[1][box.second] == 'Y' && board[2][box.second] == 'Y') return true;

    if(board[0][0] == 'Y' && board[1][1] == 'Y' && board[2][2] == 'Y') return true;
    if(board[0][2] == 'Y' && board[1][1] == 'Y' && board[2][0] == 'Y') return true;

    return false;
}

/*4. to print board*/
void print(vector<vector<char>> board){
    cout << left;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << setw(5) << board[i][j];
        }
        cout << endl << endl;
    }
}


int main(){
    vector<vector<char>> board = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int player = 1, count = 0;

    cout << endl;
    cout << "..... . .....   .....   .   .....   ..... ..... ....." << endl;
    cout << "  .   . .         .    ...  .         .   .   . ....." << endl;
    cout << "  .   . .....     .   .   . .....     .   ..... ....." << endl;
    cout << endl;
    
    cout << endl;
    print(board);
    cout << endl;


    while(count < 9){
        int choice = 0;
        
        // odd player (player 1)
        if(player % 2 == 1){
            pair<int, int> pair;
            cout << "Player 1's turn:" << endl;
            do{
                cout << "Enter box number: ";
                cin >> choice;
    
                pair = getPair(choice);
    
                if(!isBoxEmpty(board, pair)) cout << "Selected box is not empty. Please enter again." << endl << endl;
            }while(!isBoxEmpty(board, pair));

            // filling the box
            board[pair.first][pair.second] = 'X';
            
            // printing
            cout << endl;
            print(board);
            cout << endl;

            // checking if line is completed or not
            if(isLineCompleted(board, pair, player)){
                cout << "\nPlayer 1 WINS!" << endl;
                break;
            }
        }
        
        // means even player (player 2)
        else {
            pair<int, int> pair;
            cout << "Player 2's turn:" << endl;
            do{
                cout << "Enter box number: ";
                cin >> choice;
                
                pair = getPair(choice);
                
                if(!isBoxEmpty(board, pair)) cout << "Selected box is not empty. Please enter again." << endl << endl;
            }while(!isBoxEmpty(board, pair));
            
            board[pair.first][pair.second] = 'Y';

            cout << endl;
            print(board);
            cout << endl;
            
            if(isLineCompleted(board, pair, player)){
                cout << "\nPlayer 2 WINS!" << endl;
                break;
            }
        }
    
        count++;
        player++;
    }

    if(count == 9) cout << "\nMatch Drawn!" << endl;    
}