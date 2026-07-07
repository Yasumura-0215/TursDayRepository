#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260707_Header2_yasumura.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    int player[SIZE];
    int cpu[SIZE];

    int playerGuess[SIZE];
    int cpuGuess[SIZE];

    // プレイヤーとCPUの数字を作成
    MakeNumber(player);
    MakeNumber(cpu);

    while (true)
    {
        // プレイヤーの番
        cout << "プレイヤーの番です。" << endl;
        AddArray(playerGuess, SIZE);

        if (CheckHit(cpu, playerGuess) == SIZE)
        {
            cout << "プレイヤーの勝利！" << endl;
            break;
        }

        cout << endl;

        // CPUの番
        cout << "CPUの番です。" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cpuGuess[i] = rand() % (MAX + 1);
            cout << cpuGuess[i] << " ";
        }
        cout << endl;

        if (CheckHit(player, cpuGuess) == SIZE)
        {
            cout << "CPUの勝利！" << endl;
            break;
        }

        cout << endl;
    }

    return 0;
}