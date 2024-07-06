/*
    Author : Code_with_Manav
    Task : Build a basic cricket game application using basic concepts of C++.
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

using namespace std;



string playingBatsman;
string playingBowler;



class TEAM
{
    public:
        int ttlRuns;
        string players[3];
        string team;
};



void greet();
void player_details(string [], string []);
void selecting_strikers(string [], string []);
void start_innings(int, string, string);
int play_innings(int, string, string);
int score(int []);
void winner(int, int);



int main()
{
    greet();

    TEAM teamA;
    teamA.team = "A";
    teamA.players[0] = "Goku";
    teamA.players[1] = "A17";
    teamA.players[2] = "Gohan";

    TEAM teamB;
    teamB.team = "B";
    teamB.players[0] = "Vegeta";
    teamB.players[1] = "Trunks";
    teamB.players[2] = "Picolo";

    string playersA[3];
    int a = sizeof(teamA.players) / sizeof(teamA.players[0]);
    copy(teamA.players, teamA.players + a, playersA);

    string playersB[3];
    int b = sizeof(teamB.players) / sizeof(teamB.players[0]);
    copy(teamB.players, teamB.players + b, playersB);

    sleep(2);

    player_details(playersA, playersB);

    cout << "\nSelecting the Striking Batsman and Bowler!" << endl;

    sleep(1);

    srand(time(NULL));

    selecting_strikers(playersA, playersB);

    cout << "\n" << playingBatsman << " from Team A will BAT and " << playingBowler << " from Team B will BOWL!" << endl;

    sleep(2);

    srand(time(NULL));

    start_innings(1, playingBatsman, playingBowler);

    sleep(3);

    int runsa[6] = {play_innings(6, playingBatsman, playingBowler)};

    teamA.ttlRuns = score(runsa); 

    sleep(2);

    cout << "\n" << endl;

    cout << "\nSelecting the Striking Batsman and Bowler!" << endl;

    selecting_strikers(playersB, playersA);

    srand(time(NULL));

    sleep(2);

    cout << "\n" << playingBatsman << " from Team b will BAT and " << playingBowler << " from Team A will BOWL!" << endl;

    srand(time(NULL));

    sleep(2);

    start_innings(2, playingBatsman, playingBowler);

    int runsb[6] = {play_innings(6, playingBatsman, playingBowler)};

    teamB.ttlRuns = score(runsb);

    sleep(2);

    winner(teamA.ttlRuns, teamB.ttlRuns);

    return 0;
}



void greet()
{
    cout << "================================================================" << endl;
    cout << "                   Welcome! Welcome!! Welcome!!!                " << endl;
    cout << "================================================================" << endl;

    sleep(2);

    cout << "\n                       GULLY CRCIKET APP                        " << endl;
}



void player_details(string arr1[], string arr2[])
{
    cout << "\nHere are the team details of both the teams!" << endl;

    sleep(1);

    cout << "\nTeam A" << endl; 

    sleep(1);
    
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << arr1[i] << endl;
        sleep(1);
    }

    cout << "\nTeam B" << endl;

    sleep(1);

    for (int i = 0 ; i < 3 ; i++)
    {
        cout << arr2[i] << endl;
        sleep(1);
    }
}



void selecting_strikers(string arr1[], string arr2[])
{
    int choice_bat = (rand() % 3);
    playingBatsman = arr1[choice_bat];

    int choice_bowl = (rand() % 3);
    playingBowler = arr2[choice_bowl];
}



void start_innings(int num, string playingBatsman, string playingBowler)
{
    cout << "\n================================================================" << endl;
    cout << "                     STARTING THE INNING " << num << "                     " << endl;
    cout << "================================================================" << endl;
}



int play_innings(int num, string playingBatsman, string playingBowler)
{
    string prefix;
    int arr[6];

    for (int i = 1; i <= num; i++) 
    {
        if (i == 1)
        {
            prefix = "st";
        }

        else if (i == 2)
        {
            prefix = "nd";
        }

        else if (i == 3)
        {
            prefix = "rd";
        }

        else
        {
            prefix = "th";
        }

        cout << "\nThat's the " << i << prefix << " delivery by " << playingBowler << " to " << playingBatsman << "." << endl;

        int run = (rand() % 6) + 1;

        cout << "And the ball fetched " << run << " run(s) for the team." << endl;

        for (int i = 0; i < 6; i++)
        {
            arr[i] = run;
        }

        sleep(2);
    }  

    return arr[6];
}



int score(int score[6])
{
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum = sum + score[i];
    }

    return sum;
}



void winner(int num1, int num2)
{
    if (num1 > num2)
    {
        cout << "\nTEAM A HAS WON THE GAME BY " << num1 - num2 << " run(s)" << endl;
    }

    else if (num2 > num1)
    {
        cout << "\nTEAM B HAS WON THE GAME BY " << num2 - num1 << " run(s)" << endl;
    }

    else
    {
        cout << "\nTHE SCORES ARE EQUAL... THIS MATCH IS DECLARED TO BE A TIE!" << endl;
    }
}
