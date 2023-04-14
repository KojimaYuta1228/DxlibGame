#pragma once
#include"CharacterBase.h"

class MyCharacter :public CharacterBase {
public:
	MyCharacter(std::string name, int character_id, int hp, int attack_power, int defence_power, bool isalive);

	int get_level() const;//���x�����擾���邽�߂̊֐�
	int get_exp() const;//�o���l���擾���邽�߂̊֐�
	void level_up();//���x���A�b�v���邽�߂̊֐�
	void add_exp(int exp);//�o���l�����Z���邽�߂̊֐�
private:
	int m_level;//���x��
	int m_exp;//�o���l
	const int NECESSARYEXP = 10;//�K�v�o���l�̋K�萔(��������Ƃɔ�Ⴕ�Ă���)
};
