#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
using namespace std;

// Cài ð?t game
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
vector<int> tailX, tailY;
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("cls"); // Xóa màn h?nh console
    
    // V? vi?n trên
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // V? n?i dung game
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";
            
            if (i == y && j == x)
                cout << "O"; // Ð?u r?n
            else if (i == fruitY && j == fruitX)
                cout << "F"; // Qu?
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o"; // Thân r?n
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
            
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    // V? vi?n dý?i
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    
    cout << "Score:" << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic() {
    // Lýu v? trí trý?c ðó c?a thân r?n
    int prevX = tailX.empty() ? 0 : tailX[0];
    int prevY = tailY.empty() ? 0 : tailY[0];
    int prev2X, prev2Y;
    tailX.insert(tailX.begin(), x);
    tailY.insert(tailY.begin(), y);
    
    if (nTail < tailX.size()) {
        tailX.pop_back();
        tailY.pop_back();
    }

    // Di chuy?n r?n
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    // Ki?m tra va ch?m v?i tý?ng
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    // Ki?m tra va ch?m v?i thân
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;

    // Ãn qu?
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Ði?u ch?nh t?c ð? game
    }
    cout << "Game Over! Score: " << score << endl;
    return 0;
}
