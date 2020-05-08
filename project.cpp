#include <iostream>
#include <ctime>
using namespace std;

// Check whether the user wants to play more
void new_game ( bool &Continue )
{
    // Make sure that the current game is finished
    if ( Continue == false )
    {
        cout << "Start a New Game ?" << endl;
        cout << "Please enter Yes/No." << endl;

        // Let the user to choose to play a new game or not
        string again;
        cin >> again;

        // If the user choose to play more, let the game start a new round
        if ( again == "Yes" )
        {
            Continue = true;
        }

        // If the user choose to stop here, the game just ends
        else if ( again == "No" )
        {
            cout << "Good Bye!";
        }

        // Ask the user to choose again if the user inputs wrongly
        else
        {
            cout << "Please choose again." << endl;
            return new_game ( Continue );
        }
    }

}

int main()
{
    // Create an 'array' to represent the gameboard
    char array[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    // 'Continue' is to decide whether the game continues or stops
    // When 'Continue' is true, the game continues
    // Otherwise, the game stops
    bool Continue = true;

    // 'Input' is for the user to input the choose
    // 'count' is for counting the steps played
    // by both the user and the computer
    int input, count = 0;

    while ( Continue == true )
    {
        // Reset the count to 0
        count = 0;

        // Reset the array to the original
        array[0] = '1';
        array[1] = '2';
        array[2] = '3';
        array[3] = '4';
        array[4] = '5';
        array[5] = '6';
        array[6] = '7';
        array[7] = '8';
        array[8] = '9';

        // Print the gameboard
        cout  << array[0] << ' ' << array[1] << ' ' << array[2] << endl;
        cout  << array[3] << ' ' << array[4] << ' ' << array[5] << endl;
        cout  << array[6] << ' ' << array[7] << ' ' << array[8] << endl;

        // The max count is 9 because the gameboard contains 9 grids
        while ( count < 10 )
        {
            srand(time(NULL));
            cout << "Please input an integer from 1 to 9:";
            cin >> input;
            cout << endl;
            if ( input == 1 || input == 2 || input == 3
                || input == 4 || input == 5 || input == 6
                || input == 7 || input == 8 || input == 9 )
            {
                if ( array[input-1] != 'X' && array[input-1] != 'O' )
                {
                    array[input-1] = 'X';
                    count = count + 1;
                    cout << array[0] << ' ' << array[1]
                      << ' ' << array[2] << endl;
                    cout << array[3] << ' ' << array[4]
                      << ' ' << array[5] << endl;
                    cout << array[6] << ' ' << array[7]
                      << ' ' << array[8] << endl;
                }

                else
                {
                    cout << "Position has been occupied. Choose again!" << endl; //to re-input an available move
                }
            }

            else
            {
                cout << "invalid move, choose again!" << endl; //to re-input an available move
            }

            // The following if-conditions represent the situation
            // that the user wins
            if ( ( array[0] == 'X' && array[1] == 'X' && array[2] == 'X' )
                || ( array[3] == 'X' && array[4] == 'X' && array[5] == 'X' )
                || ( array[6] == 'X' && array[7] == 'X' && array[8] == 'X' )
                || ( array[6] == 'X' && array[7] == 'X' && array[8] == 'X' )
                || ( array[0] == 'X' && array[3] == 'X' && array[6] == 'X' )
                || ( array[1] == 'X' && array[4] == 'X' && array[7] == 'X' )
                || ( array[2] == 'X' && array[5] == 'X' && array[8] == 'X' )
                || ( array[0] == 'X' && array[4] == 'X' && array[8] == 'X' )
                || ( array[2] == 'X' && array[4] == 'X' && array[6] == 'X' ) )
            {
                cout << "You Are the Winner!" << endl;
                Continue = false; //end the game
                count = 10; //end the game
            }

            // The following if-conditions represent the situation
            // that there is no winner until the gameboard is full
            // The 'Continue == True' make sures
            // that there is no winner until now
            if ( count == 9 && Continue == true )
            {
                cout << "Draw." << endl;
                Continue = false;
                count = 10;
            }

            while ( count == 1 ) //after the first move of player
            {
                int random = rand()%8+1;
                if ( array[random] != 'O' && array[random] != 'X' )
                {
                    array[random] = 'O';
                    count += 1;
                    cout << "computer's move:" << endl;
                    cout << array[0] << ' ' << array[1]
                      << ' ' << array[2] << endl;
                    cout << array[3] << ' ' << array[4]
                      << ' ' << array[5] << endl;
                    cout << array[6] << ' ' << array[7]
                      << ' ' << array[8] << endl;
                }

                else
                {
                    srand(time(NULL)); // to re-generate a new random number
                }
            }

            while ( count == 3 ) //after the second move of player
            {
                int random = rand()%8+1;
                if ( array[random] != 'O' && array[random] != 'X' )
                {
                    array[random] = 'O';
                    count += 1;
                    cout << "computer's move:" << endl;
                    cout << array[0] << ' ' << array[1]
                      << ' ' << array[2] << endl;
                    cout << array[3] << ' ' << array[4]
                      << ' ' << array[5] << endl;
                    cout << array[6] << ' ' << array[7]
                      << ' ' << array[8] << endl;
                }

                else
                {
                    srand(time(NULL));
                }
            }

            while ( count == 5 ) //after the third move of player
            {
                int random = rand()%8+1;
                if ( array[random] != 'O' && array[random] != 'X' )
                {
                    array[random] = 'O';
                    count += 1;
                    cout << "computer's move:" << endl;
                    cout << array[0] << ' ' << array[1]
                      << ' ' << array[2] << endl;
                    cout << array[3] << ' ' << array[4]
                      << ' ' << array[5] << endl;
                    cout << array[6] << ' ' << array[7]
                      << ' ' << array[8] << endl;
                }

                else
                {
                    srand(time(NULL));
                }

                // The following if-conditions represent the situation
                // that the computer wins
                // There are only if-conditions shown with count larger than 5
                // because the computer needs at least three steps to win
                if ( ( array[0] == 'O' && array [1] == 'O' && array[2] == 'O' )
                    || ( array[3] == 'O' && array [4] == 'O'
                      && array[5] == 'O' )
                    || ( array[6] == 'O' && array [7] == 'O'
                      && array[8] == 'O' )
                    || ( array[0] == 'O' && array [3] == 'O'
                      && array[6] == 'O' )
                    || ( array[1] == 'O' && array [4] == 'O'
                      && array[7] == 'O' )
                    || ( array[2] == 'O' && array [5] == 'O'
                      && array[8] == 'O' )
                    || ( array[0] == 'O' && array [4] == 'O'
                      && array[8] == 'O' )
                    || ( array[2] == 'O' && array [4] == 'O'
                      && array[6] == 'O' ) )
                {
                    cout << "Pity, You Loss." << endl;
                    Continue = false;
                    count = 10;
                }

                // The following if-conditions represent the situation
                // that there is no winner until the gameboard is full
                // The 'Continue == True' make sures
                // that there is no winner until now
                if ( count == 9  && Continue == true )
                {
                    cout << "Draw." << endl;
                    Continue = false;
                    count = 10;
                }
            }

            while ( count == 7 ) //after the fourth move of player
            {
                int random = rand()%8+1;
                if ( array[random] != 'O' && array[random] != 'X' )
                {
                    array[random] = 'O';
                    count += 1;
                    cout << "computer's move:" << endl;
                    cout << array[0] << ' ' << array[1]
                      << ' ' << array[2] << endl;
                    cout << array[3] << ' ' << array[4]
                      << ' ' << array[5] << endl;
                    cout << array[6] << ' ' << array[7]
                      << ' ' << array[8] << endl;
                }

                else
                {
                    srand(time(NULL));
                }

                // The following if-conditions represent the situation
                // that the computer wins
                // There are only if-conditions shown with count larger than 5
                // because the computer needs at least three steps to win
                if ( ( array[0] == 'O' && array [1] == 'O' && array[2] == 'O' )
                    || ( array[3] == 'O' && array [4] == 'O'
                      && array[5] == 'O' )
                    || ( array[6] == 'O' && array [7] == 'O'
                      && array[8] == 'O' )
                    || ( array[0] == 'O' && array [3] == 'O'
                      && array[6] == 'O' )
                    || ( array[1] == 'O' && array [4] == 'O'
                      && array[7] == 'O' )
                    || ( array[2] == 'O' && array [5] == 'O'
                      && array[8] == 'O' )
                    || ( array[0] == 'O' && array [4] == 'O'
                      && array[8] == 'O' )
                    || ( array[2] == 'O' && array [4] == 'O'
                      && array[6] == 'O' ) )
                {
                    cout << "Pity, You Loss." << endl;
                    Continue = false;
                    count = 10;
                }

                // The following if-conditions represent the situation
                // that there is no winner until the gameboard is full
                // The 'Continue == True' make sures
                // that there is no winner until now
                if ( count == 9  && Continue == true )
                {
                    cout << "Draw." << endl;
                    Continue = false;
                    count = 10;
                }
            }
            while ( count == 9 ) // after the fifth move of player
            {
                int random = rand()%8+1;
                if ( array[random] != 'O' && array[random] != 'X' )
                {
                    array[random] = 'O';
                    count += 1;
                    cout << "computer's move:" << endl;
                    cout << array[0] << ' ' << array[1]
                      << ' ' << array[2] << endl;
                    cout << array[3] << ' ' << array[4]
                      << ' ' << array[5] << endl;
                    cout << array[6] << ' ' << array[7]
                      << ' ' << array[8] << endl;
                }

                else
                {
                    srand(time(NULL));
                }

                // The following if-conditions represent the situation
                // that the computer wins
                // There are only if-conditions shown with count larger than 5
                // because the computer needs at least three steps to win
                if ( ( array[0] == 'O' && array [1] == 'O' && array[2] == 'O' )
                    || ( array[3] == 'O' && array [4] == 'O'
                      && array[5] == 'O' )
                    || ( array[6] == 'O' && array [7] == 'O'
                      && array[8] == 'O' )
                    || ( array[0] == 'O' && array [3] == 'O'
                      && array[6] == 'O' )
                    || ( array[1] == 'O' && array [4] == 'O'
                      && array[7] == 'O' )
                    || ( array[2] == 'O' && array [5] == 'O'
                      && array[8] == 'O' )
                    || ( array[0] == 'O' && array [4] == 'O'
                      && array[8] == 'O' )
                    || ( array[2] == 'O' && array [4] == 'O'
                      && array[6] == 'O' ) )
                {
                    cout << "Pity, You Loss." << endl;
                    Continue = false;
                    count = 10;
                }

                // The following if-conditions represent the situation
                // that there is no winner until the gameboard is full
                // The 'Continue == True' make sures
                // that there is no winner until now
                if ( count == 9  && Continue == true )
                {
                    cout << "Draw." << endl;
                    Continue = false;
                    count = 10;
                }
            }
       }

       // Once the current game finished,
       // ask the user whether to play one more time or not
       new_game ( Continue );
    }

    return 0;

}

