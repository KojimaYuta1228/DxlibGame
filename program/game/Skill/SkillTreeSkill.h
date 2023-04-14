#pragma once
#include<string>
#include<vector>

class SkillTreeSkill {
public:
	SkillTreeSkill(int id, int required_level, int required_sp);
	void add_dependency(SkillTreeSkill* skill);//�ˑ��֌W�ɃX�L����ǉ�����֐�
	bool is_unlocked() const;//�������Ă��邩�ǂ�����Ԃ��֐�
	void unlock();//�������֐�
	int get_id() const;//id���擾����֐�
	int get_required_level() const;//�X�L���l���̂��߂ɕK�v�ȃ��x���̎擾
	int get_required_sp() const;//�X�L���l���̂��߂ɕK�v��SP�̎擾
	std::vector<SkillTreeSkill*> get_dependencies() const;//�ˑ��֌W�ɂ���X�L�����擾���i�[���邽�߂̊֐�

private:
	int m_id;//�X�L���̕s���I��ID
	int m_required_level;//�X�L���̊l���ɕK�v�ȃ��x��
	int m_required_sp;//�X�L���̊l���ɕK�v��SP
	bool m_unlocked;//�X�L�����J�����Ă��邩�ǂ���(true�ŉ����)
	std::vector<SkillTreeSkill*> m_dependencies;//����X�L�����K�����邽�߂ɕK�v�ȑ��̃X�L���̔z��
};
