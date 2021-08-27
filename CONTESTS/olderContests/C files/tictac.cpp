#include <iostream>
using namespace std;
class Player
{
public:
  char name[20];
  char coin;
  bool isWin;
};
class Board
{
public:
  char cell[3][3];
  Board()
  {
    for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 3; ++j)
      {
        cell[i][j] = ' ';
      }
    }
  }
  void Print()
  {
    cout << "Enter your move in 'row<space>col' format:" << endl
         << endl;
    cout << " "
         << " ";
    for (int i = 0; i < 3; ++i)
    {
      cout << " "
           << " " << i << " ";
    }
    cout << endl
         << endl;
    for (int i = 0; i < 3; ++i)
    {
      cout << i << " "
           << " "
           << " ";
      for (int j = 0; j < 3; ++j)
      {
        cout << cell[i][j] << " "
             << " "
             << " ";
      }
      cout << endl
           << endl;
    }
  }
  bool changeCell(int row, int col, char coin)
  {
    if (cell[row][col] == ' ')
    {
      cell[row][col] = coin;
      return true;
    }
    return false;
  }
};
bool isWinOrNot(Player P, Board B)
{
  bool flag = false;
  //rowWise Checking
  for (int row = 0; row < 3; ++row)
  {
    for (int col = 0; col < 2; ++col)
    {
      if (B.cell[row][col] == P.coin && B.cell[row][col] == B.cell[row][col + 1])
      {
        flag = true;
      }
      else
      {
        flag = false;
        break;
      }
    }
    if (flag == true)
    {
      break;
    }
  }
  //columnwise checking
  if (flag == false)
  {
    for (int col = 0; col < 3; ++col)
    {
      for (int row = 0; row < 2; ++row)
      {
        if (B.cell[row][col] == P.coin && B.cell[row][col] == B.cell[row + 1][col])
        {
          flag = true;
        }
        else
        {
          flag = false;
          break;
        }
      }
      if (flag == true)
      {
        break;
      }
    }
  }
  //Leading diagonal checking
  if (flag == false)
  {
    for (int x = 0; x < 2; ++x)
    {
      if (B.cell[x][x] == B.cell[x + 1][x + 1] && B.cell[x][x] == P.coin)
      {
        flag = true;
      }
      else
      {
        flag = false;
        break;
      }
    }
  }
  //Other Diagonal checking
  if (flag == false)
  {
    for (int x = 0; x < 2; ++x)
    {
      if (B.cell[x][2 - x] == B.cell[x + 1][1 - x] && B.cell[x][2 - x] == P.coin)
      {
        flag = true;
      }
      else
      {
        flag = false;
        break;
      }
    }
  }
  return flag;
}
void GAME()
{
  Player P1, P2;
  Board B1;
  int row, col;
  system("cls");
  cout << "Enter the name of player 1:\n";
  cin >> P1.name;
  cout << "Enter the name of player 2:\n";
  cin >> P2.name;
  P1.coin = 'X';
  P2.coin = 'O';
  system("cls");
  for (int i = 0; i < 9; ++i)
  {
    B1.Print();
    if (i % 2 == 0)
    {
      cout << endl
           << P1.name << "'s turn:";
      cin >> row >> col;
      while (B1.changeCell(row, col, P1.coin) == false)
      {
        cout << "Please enter a valid position in the board:";
        cin >> row >> col;
      }
      system("cls");
      if (isWinOrNot(P1, B1) == true)
      {
        system("cls");
        B1.Print();
        cout << "You Won! Congratulations!" << P1.name << "\n";
        cin.get();
        cin.get();
        system("cls");
        break;
      }
    }
    else
    {
      cout << endl
           << P2.name << "'s turn:";
      cin >> row >> col;
      while (B1.changeCell(row, col, P2.coin) == false)
      {
        cout << "Please enter a valid position in the board:";
        cin >> row >> col;
      }
      system("cls");
      if (isWinOrNot(P2, B1) == true)
      {
        system("cls");
        B1.Print();
        cout << "You Won! Congratulations! " << P2.name << "\n";
        cin.get();
        cin.get();
        system("cls");
        break;
      }
    }
    if (i == 8 && (isWinOrNot(P1, B1) == false && isWinOrNot(P2, B1) == false))
    {
      system("cls");
      B1.Print();
      cout << "Match Draw\n";
      cin.get();
      cin.get();
    }
    system("cls");
  }
}
int main()
{
  int choice;
  system("cls");
  cout << "Welcome to tictactoe.Press any key.";
  cin.get();
  system("cls");
  do
  {
    cout << "1.Play Game\n2.Quit\nSelect a valid choice.\n";
    cin >> choice;
    if (choice == 1)
    {
      GAME();
    }
    else if (choice == 2)
    {
      cout << "QUITTING...";
    }
    else
    {
      return 0;
    }
    system("cls");
  } while (choice != 2);
  return 0;
}