#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int guess;

    cout << "Welcome to Number Guessing Game!" << endl;

    do
    {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess > randomNumber)
        {
            cout << "Too High!" << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too Low!" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed correctly!" << endl;
        }

    } while (guess != randomNumber);

    return 0;
}