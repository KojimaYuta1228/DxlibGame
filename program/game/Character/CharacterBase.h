#pragma once
#include <string>
#include"DxLib.h"
#include"../../../../RPG/program/dxlib_ext/dxlib_ext.h"

class CharacterBase {
public:
	CharacterBase(std::string name, int character_id, int hp, int attack_power, int defence_power,bool isalive);
	virtual std::string get_name() const;//���O�̎擾����֐�
	virtual int get_character_id() const;//�L����Id�̎擾����֐�
	virtual int get_hp() const;//HP�̎擾����֐�
	virtual int get_attack_power() const;//�U���͂̎擾����֐�
	virtual int get_defence_power() const;//�h��͂̎擾����֐�
	virtual bool get_isalive() const;//�����t���O�̎擾(��������true)����֐�

	virtual void set_name(std::string name);//���O�̐ݒ肷��֐�
	virtual void set_character_id(int character_id);//�L����Id�̐ݒ肷��֐�
	virtual void set_hp(int m_hp);//HP�̐ݒ肷��֐�
	virtual void set_attack_power(int attack_power);//�U���͂̐ݒ肷��֐�
	virtual void set_defence_power(int defence_power);//�h��͂̐ݒ肷��֐�
	virtual void set_isalive(bool isalive);//�����t���O�̐ݒ肷��֐�
	virtual void attack(const std::shared_ptr<CharacterBase>& other);//�U���͂Ɩh��͂���_���[�W���v�Z����֐�
	virtual void take_damage(int damage);//�_���[�W���󂯂�֐�

private:
	std::string m_name;//���O
	int m_character_id;//id
	int m_hp;//Hp
	int m_attack_power;//�U����
	int m_defence_power;//�h���
	bool m_isalive = true;//�����t���O(true�Ő����Ă���)
};