#include <iostream>
using namespace std;

const int min_first = 2;
const int max_first = 2;

void matrix(int arr[min_first][max_first])
{
    int arr_min = arr[0][0];
    int arr_max = arr[0][0];

    for (int i = 0; i < min_first; i++)
    {
        for (int j = 0; j < max_first; j++)
        {
            cout << arr[i][j] << "\n";

            if (arr[i][j] < arr_min)
                arr_min = arr[i][j];

            if (arr[i][j] > arr_max)
                arr_max = arr[i][j];
        }
    }

    for (int i = 0; i < min(min_first, max_first); i++) {
        cout << arr[i][i] << " ";
    }
    cout << "\n";
}

void matrix(double arr[min_first][max_first])
{
    int arr_min = arr[0][0];
    int arr_max = arr[0][0];

    for (int i = 0; i < min_first; i++)
    {
        for (int j = 0; j < max_first; j++)
        {
            cout << arr[i][j] << "\n";

            if (arr[i][j] < arr_min)
                arr_min = arr[i][j];

            if (arr[i][j] > arr_max)
                arr_max = arr[i][j];
        }
    }

    for (int i = 0; i < min(min_first, max_first); i++) {
        cout << arr[i][i] << " ";
    }
    cout << "\n";
}

void matrix(char arr[min_first][max_first])
{
    for (int i = 0; i < min_first; i++)
    {
        for (int j = 0; j < max_first; j++)
        {
            cout << arr[i][j] << "\n";
        }
    }

    for (int i = 0; i < min(min_first, max_first); i++) {
        cout << arr[i][i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr_int[min_first][max_first] = { {2,7}, {7,9} };
    double arr_doub[min_first][max_first] = { {2.4,5.1}, {6.2,7.4} };
    char arr_char[min_first][max_first] = { {'2','3'}, {'4','6'} };

    matrix(arr_int);
    matrix(arr_doub);
    matrix(arr_char);

    return 0;
}