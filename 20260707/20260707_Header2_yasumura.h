#pragma once

// 定数
const int SIZE = 3;
const int MAX = 9;
const int MIN = 0;

/// <summary>
/// 重複しない3つの数字を作成する
/// </summary>
/// <param name="ary">数字を保存する配列</param>
void MakeNumber(int ary[]);

/// <summary>
/// 予想する数字を入力する
/// </summary>
/// <param name="ary">入力する配列</param>
/// <param name="size">配列の大きさ</param>
void AddArray(int ary[], int size);

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="min">最小値</param>
/// <param name="max">最大値</param>
/// <returns>入力した値</returns>
int InputCheck(int min, int max);

/// <summary>
/// Hitを判定する
/// </summary>
/// <param name="answer">答えの配列</param>
/// <param name="guess">予想した配列</param>
/// <returns>Hitした数</returns>
int CheckHit(int answer[], int guess[]);