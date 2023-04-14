#pragma once
#include"CharacterBase.h"

class MyCharacter :public CharacterBase {
public:
	MyCharacter(std::string name, int character_id, int hp, int attack_power, int defence_power, bool isalive);

	int get_level() const;//レベルを取得するための関数
	int get_exp() const;//経験値を取得するための関数
	void level_up();//レベルアップするための関数
	void add_exp(int exp);//経験値を加算するための関数
private:
	int m_level;//レベル
	int m_exp;//経験値
	const int NECESSARYEXP = 10;//必要経験値の規定数(これをもとに比例していく)
};
