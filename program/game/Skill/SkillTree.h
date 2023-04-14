#pragma once
#include"SkillTreeSkill.h"

class SkillTree {
public:
	void add_skill(SkillTreeSkill* skill);//�X�L���c���[�ɃX�L���̒ǉ�����֐�
	bool is_unlocked(int skill_id) const;//�X�L����ID����ɃX�L�����������Ă��邩�ǂ����𔻒f����֐�
	void unlocked(int skill_id);//�X�L����ID����ɃX�L�����J������֐�
	std::vector<SkillTreeSkill*> get_unlocked_skills() const;//��������X�L�����擾����֐�

private:
};
