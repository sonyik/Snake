#include <iostream>
#include <vector>

std::vector<std::vector<char>> CreateField(int width, int height)
{
    std::vector<std::vector<char>> field(height, std::vector<char>(width, ' '));
    for (int j = 0; j < width; j++) 
    {
        field[0][j] = '@';
        field[height-1][j] = '@';
    }
    for (int i = 1; i < height-1; i++) 
    {
        field[i][0] = '@';
        field[i][width-1] = '@';
    }
    return field;
}

void PrintField(const std::vector<std::vector<char>>& field)
{
    for (int i = 0; i < field.size(); ++i)
    {
        for (int j = 0; j < field[i].size(); ++j)
        {
            std::cout << field[i][j];
        }
        std::cout << '\n';
    }
}

int main()
{
    const int FIELD_WIDTH = 20;
    const int FIELD_HEIGHT = 30;
    std::vector<std::vector<char>> gameField = CreateField(FIELD_WIDTH, FIELD_HEIGHT);
    PrintField(gameField);
    return 0;
}