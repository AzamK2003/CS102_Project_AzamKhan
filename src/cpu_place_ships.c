#include "cpu_place_ships.h"

char colCoordinate;
int rowCoordinate;
int convCoordinate;

void cpu_place_ships()
{
  int randomVal = (rand() % (4 - 0 + 1)) + 0;
  if(randomVal == 0)
  {
    for(int i =0; i < 5; i++)
    {
      cpu_logic_board[0][i] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[2][i+2] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[i+2][8] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[6][i] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i+5] = 'B';
    }
  }
  if(randomVal == 1)
  {
    for(int i =0; i < 5; i++)
    {
      cpu_logic_board[i][0] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[i+2][2] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[8][i+2] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i+4][6] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i+5] = 'B';
    }
  }
   if(randomVal == 2)
  {
    for(int i =0; i < 5; i++)
    {
      cpu_logic_board[3][i] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[i+5][1] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[2][i+4] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i+3][8] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i+5] = 'B';
    }
  }
   if(randomVal == 3)
  {
     for(int i =0; i < 5; i++)
    {
      cpu_logic_board[i+1][0] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[i][2] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[i+3][4] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i][6] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i+7][9] = 'B';
    }
  }
   if(randomVal == 4)
  {
      for(int i =0; i < 5; i++)
    {
      cpu_logic_board[9][i+1] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[6][i+5] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[4][i+3] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[0][i+4] = 'B';
    }
  }
}

/* Buggy code for a truly random ship placement

#include "computer_ships.h"

int orientation()
{
num = rand()%2;
return num;
} 
  
void Cplace_ships()
{
  shipLength[0] = 5;
  shipLength[1] = 4;
  shipLength[2] = 3;
  shipLength[3] = 3;
  shipLength[4] = 2;
  for(int i = 0; i < 5;i++)
  {
    max = 10-shipLength[i];
    orientation();
    if(orientation() == 0)
    {
      computer_column = rand() % max;
      computer_row = rand() % 10;
      if(Cput_horizontal_ship(shipLength[i], computer_row1, computer_column1) == 13)
        Cplace_ships();
      else
        Cput_horizontal_ship(shipLength[i], computer_row1, computer_column1);
    }
    else 
    {
      computer_column1 = rand() % 10;
      computer_row1 = rand() % max;
      if(Cput_vertical_ship(shipLength[i], computer_row1, computer_column1) == 13)
        Cplace_ships();
      else
        Cput_vertical_ship(shipLength[i], computer_row1, computer_column1);
    }
  }
}

int Cput_horizontal_ship(int length, int rowVal, int colVal)
{
  for(int i = 0; i < length; i++)
  {
    if(computer_logic_board[rowVal][colVal + i] == 'B'){
      conflict = CONFLICT;
      }
      else
      {
        computer_logic_board[rowVal + i][colVal] = 'B';
        conflict = 0;
      }
  }
  return conflict;
}

int Cput_vertical_ship(int length, int rowVal, int colVal)
{
  for(int i = 0; i < length; i++)
  {
    if(computer_logic_board[rowVal + i][colVal] == 'B')
      conflict = CONFLICT;
    else
      {
      computer_logic_board[rowVal + i][colVal] = 'B';
      conflict = 0;
      }
  }
  return conflict;
}

*/