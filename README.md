# Tic Tac Toe
A Tic Tac Toe game which we play a lot in childhood.

Brief identification of the team members.
First team member: Fu Yicheng 3035557662
Second team member: Lam King Ho 3035570078

Game description with basic game rules.
The game is for two players, the user vs the computer, who take turns choosing the spaces in a 3x3 grid.
The game will display the original 3x3 grid for the user.
The user always plays first, and the computer randomly choose one place to mark after user's each move.
After one move made by either the user or the computer, the new grid with new mark will be displayed.
The user's mark is presented by 'o' and the computer's mark is presented by 'x'.
The player can only mark on the grid and cannot mark on the place which has been already marked.
The computer will automatically choose to mark on a unmarked place inside the grid, while in case that the user choose the wrong place to mark the programme will ask the user to choose again.
The player who first manage to place three of marks in a vertical, horizantal or diagonal row will be the winner.
After the winner come up, the game closes and the programme will ask the user whether the user wants to start a new round or not.

A list of features / functions that the programme plan to implement.
array() function will be used to print the 3X3 table out. Then we use while loop function to identify in what kind of situation (if there is any row, column or diagonal that is filled with ‘x’ or ‘o’) we should continue or end the game and ask user to re-input a position if user inputted an invalid position(already be occupied). Random function will be utilized to generate the random move of the computer player. We will test whether computer player and user make a valid move or not and who won the game via if-else statement. It will also be used to re-play the game or end the game after someone won.
