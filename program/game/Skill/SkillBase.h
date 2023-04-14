#pragma once
#include<iostream>
#include<memory>
#include"SkillCommand.h"

class SkillCommand;

//スキルの種類
enum class SkillType {
	Fire,
	Ice
};
//スキルを生成するファクトリークラス
class SkillFactory {
public:
	static std::shared_ptr<SkillCommand> create(SkillType type);
};
//スキルクラス
class SkillBase {
public:
	SkillBase() = default;
	~SkillBase() = default;
    void execute();//実行
	void set_skill_type(SkillType type);//スキルの設定
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



