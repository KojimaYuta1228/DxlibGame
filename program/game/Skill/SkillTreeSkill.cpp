#include "SkillTreeSkill.h"
#include <vector>

SkillTreeSkill::SkillTreeSkill(int id, int required_level, int required_sp)
	:m_id(id),m_required_level(required_level),m_required_sp(required_sp),m_unlocked(false)
{
}

void SkillTreeSkill::add_dependency(SkillTreeSkill* skill)
{
	m_dependencies.emplace_back(skill);
}

bool SkillTreeSkill::is_unlocked() const
{
	return m_unlocked;
}

void SkillTreeSkill::unlock()
{
	m_unlocked = true;
}

int SkillTreeSkill::get_id() const
{
	return m_id;
}

int SkillTreeSkill::get_required_level() const
{
	return m_required_level;
}

int SkillTreeSkill::get_required_sp() const
{
	return m_required_sp;
}

std::vector<SkillTreeSkill*> SkillTreeSkill::get_dependencies() const
{
	return m_dependencies;
}
