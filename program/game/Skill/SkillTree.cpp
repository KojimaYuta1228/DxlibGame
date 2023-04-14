#include "SkillTree.h"

void SkillTree::add_skill(SkillTreeSkill* skill)
{
}

bool SkillTree::is_unlocked(int skill_id) const
{
	return false;
}

void SkillTree::unlocked(int skill_id)
{
}

std::vector<SkillTreeSkill*> SkillTree::get_unlocked_skills() const
{
	return std::vector<SkillTreeSkill*>();
}
