/*
スコア管理システムの実装
以下の仕様に基づいて、スコア管理クラスを実装してください。

仕様
クラス名: ScoreManager
メンバ変数:
currentScore（現在のスコア, 整数型）
highScore（ハイスコア, 整数型）
メンバ関数:
addPoints(int points)
現在のスコアに指定された points を加算する。
resetScore()
現在のスコアをリセットする（0に設定）。
updateHighScore()
現在のスコアがハイスコアを超えている場合、ハイスコアを更新する。
displayScores()
現在のスコアとハイスコアを画面に表示する。
初期値:
currentScore と highScore はどちらも 0 からスタート。
*/

#include "ScoreManager.h"
#include <iostream>
using namespace std;

int main(void)
{
	//ScoreManagerクラスをオブジェクト化（インスタンス）
	ScoreManager score;

	cout << "ゲームスタート" << endl;

	score.displayScores();

	//100ポイント獲得
	cout << "100ポイント獲得しました。" << endl;

	score.addPoints(100);
	score.displayScores();
	//50ポイント獲得
	cout << "50ポイント獲得しました。" << endl;

	score.addPoints(50);
	score.displayScores();

	//ハイスコアを更新
	cout << endl;
	cout << "ハイスコア更新" << endl;

	score.updateHighScore();
	score.displayScores();

	cout << endl;
	cout << "ゲーム終了" << endl;

	score.resetScore();
	score.displayScores();


	return 0;
}