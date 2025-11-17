#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    // srand(time(0));
    // cout << "Random Number " << randomNumber;
    // srand(time(0));
    // int randomNumber = rand();
    // int randomNumber = rand() % 100 + 1;
    // // cout << "Random Number " << randomNumber;
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << randomNumber << endl;
    // }

    int number, guess;
    int attemps = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    cout << "Welcome To the number Guessing Game " << endl;
    cout << "Guess a number between 1 to 100" << endl;
    do
    {
        cout << "Enter Your Guess : ";
        cin >> guess;
        attemps++;
        if (guess > number)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < number)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << "Congratulations! You Guessed The Number In " << attemps << " Attemps" << endl;
        }

    } while (guess != number);
    
    

    return 0;    
}