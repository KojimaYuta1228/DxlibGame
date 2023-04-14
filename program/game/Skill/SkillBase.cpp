#include "SkillBase.h"
#include"SkillCommand.h"
#include"../../../../RPG/program/dxlib_ext/dxlib_ext.h"

void SkillBase::execute()
{
	m_command->execute();
}

void SkillBase::set_skill_type(SkillType type)
{
	m_command = SkillFactory::create(type);
}



std::shared_ptr<SkillCommand> SkillFactory::create(SkillType type)
{
	switch (type) {
	case SkillType::Fire:
		return std::make_shared<FireSkillCommand>();
	case SkillType::Ice:
		return std::make_shared<IceSkillCommand>();
	default:
		return nullptr;
	}
}

void FireSkillCommand::execute()
{
	DrawStringEx(300, 300, -1, "‰ŠUŒ‚");
}

void IceSkillCommand::execute()
{
	DrawStringEx(350, 300, -1, "•XUŒ‚");
}
