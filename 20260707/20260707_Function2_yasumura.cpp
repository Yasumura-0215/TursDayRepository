#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260707_Header2_yasumura.h"

using namespace std;

/// <summary>
/// 重複しない3つの数字を作成
/// </summary>
void MakeNumber(int ary[])
{
    int i = 0;

    while (i < SIZE)
    {
        int num = rand() % (MAX + 1);
        bool same = false;

        for (int j = 0; j < i; j++)
        {
            if (ary[j] == num)
            {
                same = true;
                break;
            }
        }

        if (!same)
        {
            ary[i] = num;
            i++;
        }
    }
}

/// <summary>
/// 入力チェック
/// </summary>
int InputCheck(int min, int max)
{
    int num;

    while (true)
    {
        cin >> num;

        if (num >= min && num <= max)
        {
            return num;
        }

        cout << min << "～" << max << "の数字を入力してください：";
    }
}

/// <summary>
/// 数字を入力
/// </summary>
void AddArray(int ary[], int size)
{
    cout << "3つの数字を入力してください。" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "個目：";
        ary[i] = InputCheck(MIN, MAX);
    }
}

/// <summary>
/// Hit判定
/// </summary>
int CheckHit(int answer[], int guess[])
{
    int hit = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (answer[i] == guess[i])
        {
            cout << "Hit" << endl;
            hit++;
        }
        else
        {
            cout << "Miss" << endl;
        }
    }

    return hit;
}