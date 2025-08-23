#include <iostream>
#include <windows.h> // for input to take car to left or right.
#include <ctime> // for random number generation
#include <stdlib.h> // for standard functions like system clear etc.


using namespace std;


// KEY : 5 is initialized in the play-field as obstacles. 4 is initialized as car. 9 is initialized as the boundary of the road. 0 is initialized as the empty space on the road.


/**
   Outputs the title of the game
*/

void game_name()
{
    // 2D array of 10 rows and 69 columns which is initialized with asteriks to output RACE CAR GAME
    char name[10][69] = {
    {'*','*','*','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ','*',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ','*','*','*','*','*'},
    {'*',' ',' ',' ','*',' ',' ','*',' ','*',' ',' ',' ','*',' ',' ','*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ','*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ','*',' ',' ','*',' ','*',' ',' ','*','*',' ','*','*',' ','*',' ',' ',' ',' '},
    {'*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ','*',' ','*',' ','*',' ',' ',' ',' '},
    {'*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' '},
    {'*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' ',' ','*','*','*','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*','*','*','*',' '},
    {'*','*','*','*',' ',' ','*','*','*','*','*',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*','*','*','*','*',' ','*','*','*','*',' ',' ',' ',' ','*',' ','*','*','*',' ','*','*','*','*','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' '},
    {'*','*',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' '},
    {'*',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ','*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' '},
    {'*',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ','*',' ',' ','*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ','*',' ',' ',' ',' ',' ','*',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ',' '},
    {'*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ',' ',' ','*','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ','*','*',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ','*','*',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ',' ','*',' ','*','*','*','*','*'},
    };

    for (int i = 0; i<10; i++) // loop traverses the rows of the array
    {
        for (int j = 0; j<69; j++) // loop traverses the columns of the array
        {
            cout << name[i][j]; // outputs the element of the array at this index
        }
        cout << endl; // moves to next line when one row is complete
    }
    cout << endl; // leaves an empty line in the output
}


/**
   Contains the instructions for playing the game
*/

 void instructions()
 {
     cout << "Welcome!" << endl;
     cout << "To move the car to the right, use the right arrow key." << endl;
     cout << "To move the car to the left, use the left arrow key." << endl;
     cout << "Avoid the obstacles for as long as possible." << endl;
     cout << "Your score will be viewed at the end of the game." << endl << endl;
     cout << "Select the difficulty level, enter E for easy, M for medium, H for hard." << endl;
 }


/**
   Initializes array pf in order to create a play-field and its border
   @param pf[][31] refers to the array to be initialized
   @param siz refers to the number of rows in the array
*/

void initialize_playfield(int pf[][31], int siz)
{
    for (int i = 0; i < siz; i++) // loop traverses the rows of the 2D array
    {
        for (int j = 0; j < 31; j++) // loop traverses the columns of the 2D array
        {
             if (j == 0 || j == 1 || j == 29 || j == 30) // if condition checks the elements of the array
            {
                pf[i][j] = 9; // if the condition is true, the value 9 is assigned at these indexes which makes the borders of the field
            }
            else // if the above condition is not true, the following is carried out
            {
                pf[i][j] = 0; // assigns the value 0 at these indexes which are the empty space between the borders
            }
        }
    }
}


/**
   Prints the play-field.
   @param arr[][31] refers to the array to be printed
   @param row refers to the number of rows in the array
*/

void draw_playfield(int arr[][31], int row)
{
    for (int i = 0; i< row; i++) // loop traverses the rows of the 2D array
    {
        for (int j = 0; j < 31; j++) // loop traverses the columns of the 2D array
        {
            if (arr[i][j] == 9) // condition checks for the presence of the value 9 at this index
            {
                cout << "|" ; // if the condition is true, the value of this index is changed to output | which represents the boundary of the track
            }
            else if (arr[i][j] == 4) // condition checks for the presence of the value 4 at this index
            {
                cout << "X"; // if the condition is true, the value of this index is changed to output X which represents the shape of the car
            }
            else if (arr[i][j] == 5) // condition checks for the presence of the value 5 at this index
            {
                cout << "/"; // if the condition is true, the value of this index is changed to output /, which represents the obstacles
            }
            else // if none of the conditions are true, the following command is carried out
            {
                cout << " "; // outputs an space character at all the other indexes of the array which represents the empty spaces in the play-field
            }
        }
        cout << endl; // moves to the next row when one row is complete
    }
}


/**
   Initializes array arr in order to create the shape of a car
   @param arr[][5] refers to the array to be initialized
*/

void initialize_car(int arr[][5])
{
    for(int i = 0; i < 5; i ++) // loop traverses the columns of the 2D array
    {
        for (int j = 0; j <4;j++) // loop traverses the rows of the 2D array
        {
            arr[j][i]=0; // assigns the value 0 to this index of the array
        }
    }

    for (int i = 1; i < 4; i++) // loop traverses the columns of the array
    {
        arr[0][i] = 4; // assigns the value 4 to this index of the array which makes the shape of the car
    }
    arr[1][2] = 4; // assigns the value 4 to this index of the array which makes the shape of the car
    arr[2][2] = 4; // assigns the value 4 to this index of the array which makes the shape of the car

    for (int j = 0; j < 5; j++) // loop traverses the columns of the array
    {
        arr[3][j] = 4; // assigns the value 4 to this index of the array which makes the shape of the car
    }
}


/**
   Copies the structure of the car into the play-field.
   @param arr[][5] refers to the array of the car
   @param arr[][31] refers to the array of the play-field
*/

void draw_car(int arr[][5], int arr1[][31])
{
    for (int x = 16; x < 20; x++) // defines the index of the height of the car in the play-field
    {
        for (int y = 13; y < 18; y++) // defines the index of the width of the car in the play-field
        {
            arr1[x][y] = arr[x - 16][y - 13]; //ensures that the car is placed in the middle of the length and width of the track
        }
    }
}


/**
   Allows to move an object left and right
   @param pf[][31] refers to an array of column size 31
*/

void handle_input (int pf[][31])
{
    bool left = false; // sets the variable left to false
    bool right = false; // sets the variable right to false

    // https://docs.microsoft.com/en-us/windows/win32/learnwin32/keyboard-input
    // https://stackoverflow.com/questions/6331868/using-getkeystate
    // https://www.youtube.com/watch?v=TKpyiRaWinQ
    // links for the following code segment

    left = GetKeyState('\x25') & 0x8000; // sets bool to true if left arrow key is pressed
    right = GetKeyState('\x27') & 0x8000; // sets bool to true if right arrow key is pressed
    int upperfat = 0;
    int lowerfat  = 0;

    if (left) // when left key is pressed
    {
      for(int j = 2; j < 29; j++) // loop traverses the region between the borders of the playfield
      {
          if (pf[16][j] == 4) // checks if car upper edge of the car is present at this index
          {
              upperfat = j; // determines the extreme point of the upper fat row of the car
              break; // if the condition is true, loop breaks (collision occurs)
          }
      }
      for(int j = 2; j < 29; j++) // loop traverses the region between the borders of the playfield
      {
          if (pf[19][j] == 4) // checks if the lower edge of the car is present at this index
          {
              lowerfat = j; // determines the extreme point of the lower fat row of the car
              break; // if the condition is true, loop breaks (collision occurs)
          }
      }

      if (pf[16][upperfat - 1] == 0 && pf[19][lowerfat - 1] == 0) // checks if there is empty space in the play-field or not
      {
          for (int i = 16; i < 20; i++) // traverses the rows in the play-field array
          {
              for (int j = 2; j < 29; j++) // traverses the columns of the play-field array
              {
                  if (pf[i][j] == 4) // checks if car is present in the array
                  {
                      pf[i][j] = 0; // changes the element of the car to an empty space
                      pf[i][j - 1] = 4; // car moved to the left
                  }
              }
          }
      }
    }
    else if (right) // when right key is pressed
    {
      for(int j = 28; j > 1; j--) // loop traverses the region between the borders of the playfield
      {
          if (pf[16][j] == 4) // checks if car upper edge of the car is present at this index
          {
              upperfat = j; // determines the extreme point of the upper fat row of the car
              break; // if the condition is true, loop breaks (collision occurs)
          }
      }
      for(int j = 28; j > 1; j--) // loop traverses the region between the borders of the playfield
      {
          if (pf[19][j] == 4) // checks if car lower edge of the car is present at this index
          {
              lowerfat = j; // determines the extreme point of the lower fat row of the car
              break; // if the condition is true, loop breaks (collision occurs)
          }
      }
      if (pf[16][upperfat + 1] == 0 && pf[19][lowerfat + 1] == 0) // checks if there is empty space in the play-field or not
      {
          for (int i = 16; i < 20; i++) // traverses the rows in the play-field array, from the bottom
          {
              for (int j = 28; j > 1; j--) // traverses the columns of the play-field array
              {
                  if (pf[i][j] == 4) // checks if car is present in the array
                  {
                      pf[i][j] = 0; // changes the position of element of car to an empty space
                      pf[i][j + 1] = 4; // car moved to the right
                  }
              }
          }
      }
    }
}


/**
   Initializes the array for obstacles
   @param ob_1 is a 2d array of 3 rows and 3 columns
   @param ob_2 is a 2d array of 3 rows and 2 columns
*/

void create_obstacles(int ob_1[3][3], int ob_2[3][2])
{
    for (int x = 0; x < 3; x++) // loop traverses the rows of the array
    {
        for (int y = 0; y < 3; y++) // loop traverses the columns of the array
        {
            ob_1[x][y] = 5; // assigns the value 5 to the elements at these indexes of the array
        }
    }
    for (int a = 0; a < 3; a++) // loop traverses the rows of the array
    {
        for (int b = 0; b < 2; b++) // loop traverses the columns of the array
        {
            ob_2[a][b] = 5; // assigns the value 5 to the elements at these indexes of the array
        }
    }
}


/**
   Checks if obstacles are being avoided or not
   @param pf is a 2d array of 31 columns
   @param gameover is a reference parameter
*/

void updatePlayField(int pf[][31], bool &gameover)
{
    for (int i = 19; i >= 0; i--) // starts from the bottom of the playfield and traverses the rows, going up
    {
        for (int j = 2; j < 29; j++) // traverses the columns of the playfield array, excluding the borders
        {
            if (pf[i][j] == 5 && pf[i + 1][j] == 4) // checks if the car appears under the obstacles
            {
                gameover = true; // if the condition is true, bool gameover is set to true, car crashes
                return;
            }
            else if (pf[i][j] == 5) // checks if obstacle is present
            {
                pf[i][j] = 0; // changes the element of the obstacle array to an empty space
                pf[i + 1][j] = 5; //  the position of the obstacle is incremented to move downwards
            }
        }
    }
}


/**
   Spawns obstacles at different positions
   @param pf is a 2d array of 20 rows and 31 columns
   @param ob_1 is a 2d array of 3 rows and 3 columns
   @param ob_2 is a 2d array of 3 rows and 2 columns
*/

void spawn_obstacles(int pf[20][31], int ob_1[3][3], int ob_2[3][2])
{
    // for the first obstacle with width 3
    srand(time(0)); // makes sure that every time the game is played, the randomized value is different

    int start_1 = rand() % (26 - 2) + 2; // randomizes the width of the first obstacle in this region of the play-field

    for (int i = 0; i < 3; i++) // loop traverses the top 3 rows of the play-field array
    {
        for (int j = start_1; j < start_1 + 3; j++)
        {
            if (pf[i][j] == 5 || pf[i][j + 1] == 5 || pf[i][j + 2] == 5) // checks if there is an obstacle in the next three column indexes of the play-field
            {
                break; // if an obstacle is found, no new obstacle is spawned and the loop breaks
            }
            else
            {
                pf[i][j] = ob_1[i][j - start_1]; // obstacle printed at this index in the play-field
            }
        }
    }

    // for the second obstacle with width 2
    srand(time(0)); // makes sure that every time the game is played, the randomized value is different

    int start_2 = rand() % (27 - 2) + 2; // randomizes the width of the second obstacle in this region of the play-field

    for (int i = 0; i < 3; i++) // loop traverses the top 3 rows of the play-field array
    {
        for (int j = start_2; j < start_2 + 2; j++)
        {
            if (pf[i][j] == 5 || pf[i][j + 1] == 5) // checks if there is an obstacle in the next two columns indexes of the play-field
            {
                break; // if an obstacle is found, no new obstacle is spawned and the loop breaks
            }
            else
            {
                pf[i][j] = ob_2[i][j - start_2]; // obstacle printed at this index in the playfield
            }
        }
    }
}


/**
   Carries out the main process of the game
*/

void play_game()
{
    game_name(); // calls the game_name function
    instructions(); // calls the instructions function

    char difficulty;
    cin >> difficulty; // takes in user input for the difficulty level
    cout << endl << endl; // leaves two empty lines in the output

    system("pause"); // halts the execution of the program

    system("CLS"); // clears the output on the screen

    srand(time(0)); // makes sure that every time the game is played, the randomized value is different
    bool gameover = false; // to check for whether the game is over or not. more on this in the Update Play-field function
    int pf[20][31]; // array for the playfield with height 20 and width 31
    int car[4][5]; // array for the car with height 4 and width 5
    int obstacle_1[3][3]; // array for obstacle with height 3 and width 3
    int obstacle_2[3][2]; // array for obstacle with height 3 and width 2
    initialize_playfield(pf,20); // calls the intialize_playfield function
    initialize_car(car);  // calls the initialize_car function
    draw_car(car,pf); // calls the draw_car function;
    create_obstacles(obstacle_1,obstacle_2); // calls the create_obstacles function
    spawn_obstacles(pf,obstacle_1,obstacle_2); // calls the spawn_obstacles function

    int speedcount = 0; // a counter to ensure that the obstacles move down at a constant rate.
    int spawncount = 0; // a counter to ensure that the obstacles appear at a constant rate
    int score = 0; // a counter t=for calculating the score

    while (!gameover) // the loop continues until the car comes under the obstacle
    {
        handle_input(pf); // calls the handle_input function

        Sleep(25); // reduces the latency between the input and the execution of the program

        draw_playfield(pf,20); // calls the draw_playfield function

        if (speedcount == 5) // determines that after how long will the update play-field be called. So this essentially determines speed of obstacles
        {
            updatePlayField(pf,gameover); // calls updatePlayField function
            speedcount = 0;
        }

        // https://stackoverflow.com/questions/34842526/update-console-without-flickering-c/34843181
        // http://www.cpp.re/forum/general/204387/
        // links for the following code segment

        static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); // makes sure that the play field keeps going infinitely to the top of the screen
        COORD coord = { (SHORT)0, (SHORT)0 };
        SetConsoleCursorPosition(hOut, coord);

        speedcount++;

        if (difficulty == 'E')
        {
            if (spawncount == 50) // this determines the time after which the obstacles are spawned.
            {spawn_obstacles(pf,obstacle_1,obstacle_2);
            spawncount = 0;}
        }
        else if (difficulty == 'M')
        {
            if (spawncount == 40) // this determines the time after which the obstacles are spawned.
            {spawn_obstacles(pf,obstacle_1,obstacle_2);
            spawncount = 0;}
        }
        else if (difficulty == 'H')
        {
            if (spawncount == 30) // this determines the time after which the obstacles are spawned.
            {spawn_obstacles(pf,obstacle_1,obstacle_2);
            spawncount = 0;}
        }

        spawncount++;
        score ++; // increments the score variable everytime the loop is carried out
}
    system("pause"); // halts the execution of the program

    system("CLS"); // clears the output on the screen

    cout << endl << endl; // leaves two lines in the output

    cout << "GAME OVER!" << endl;
    cout << "Your score is " << score; // outputs score
}

int main()
{
    play_game(); // calls the play_game function

    return 0;
}


