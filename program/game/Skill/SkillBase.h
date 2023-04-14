#pragma once
#include<iostream>
#include<memory>
#include"SkillCommand.h"

class SkillCommand;

//�X�L���̎��
enum class SkillType {
	Fire,
	Ice
};
//�X�L���𐶐�����t�@�N�g���[�N���X
class SkillFactory {
public:
	static std::shared_ptr<SkillCommand> create(SkillType type);
};
//�X�L���N���X
class SkillBase {
public:
	SkillBase() = default;
	~SkillBase() = default;
    void execute();//���s
	void set_skill_type(SkillType type);//�X�L���̐ݒ�
private:
	std::shared_ptr<SkillCommand> m_command;
};

class FireSkillCommand : public SkillCommand {
public :
	virtual void execute() override;
};

class IceSkillCommand : public SkillCommand {
public:
	virtual void execute() override;
};



