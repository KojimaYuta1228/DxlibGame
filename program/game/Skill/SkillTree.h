#pragma once
#include"SkillTreeSkill.h"

class SkillTree {
public:
	void add_skill(SkillTreeSkill* skill);//スキルツリーにスキルの追加する関数
	bool is_unlocked(int skill_id) const;//スキルのIDを基にスキルが解放されているかどうかを判断する関数
	void unlocked(int skill_id);//スキルのIDを基にスキルを開放する関数
	std::vector<SkillTreeSkill*> get_unlocked_skills() const;//解放したスキルを取得する関数

private:
};
