#pragma once
#include <string>
#include"DxLib.h"
#include"../../../../RPG/program/dxlib_ext/dxlib_ext.h"

class CharacterBase {
public:
	CharacterBase(std::string name, int character_id, int hp, int attack_power, int defence_power,bool isalive);
	virtual std::string get_name() const;//名前の取得する関数
	virtual int get_character_id() const;//キャラIdの取得する関数
	virtual int get_hp() const;//HPの取得する関数
	virtual int get_attack_power() const;//攻撃力の取得する関数
	virtual int get_defence_power() const;//防御力の取得する関数
	virtual bool get_isalive() const;//生存フラグの取得(生存中はtrue)する関数

	virtual void set_name(std::string name);//名前の設定する関数
	virtual void set_character_id(int character_id);//キャラIdの設定する関数
	virtual void set_hp(int m_hp);//HPの設定する関数
	virtual void set_attack_power(int attack_power);//攻撃力の設定する関数
	virtual void set_defence_power(int defence_power);//防御力の設定する関数
	virtual void set_isalive(bool isalive);//生存フラグの設定する関数
	virtual void attack(const std::shared_ptr<CharacterBase>& other);//攻撃力と防御力からダメージを計算する関数
	virtual void take_damage(int damage);//ダメージを受ける関数

private:
	std::string m_name;//名前
	int m_character_id;//id
	int m_hp;//Hp
	int m_attack_power;//攻撃力
	int m_defence_power;//防御力
	bool m_isalive = true;//生存フラグ(trueで生きている)
};