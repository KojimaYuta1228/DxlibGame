#pragma once
#include<string>
#include<vector>

class SkillTreeSkill {
public:
	SkillTreeSkill(int id, int required_level, int required_sp);
	void add_dependency(SkillTreeSkill* skill);//依存関係にスキルを追加する関数
	bool is_unlocked() const;//解放されているかどうかを返す関数
	void unlock();//解放する関数
	int get_id() const;//idを取得する関数
	int get_required_level() const;//スキル獲得のために必要なレベルの取得
	int get_required_sp() const;//スキル獲得のために必要なSPの取得
	std::vector<SkillTreeSkill*> get_dependencies() const;//依存関係にあるスキルを取得し格納するための関数

private:
	int m_id;//スキルの不可視的なID
	int m_required_level;//スキルの獲得に必要なレベル
	int m_required_sp;//スキルの獲得に必要なSP
	bool m_unlocked;//スキルを開放しているかどうか(trueで解放済)
	std::vector<SkillTreeSkill*> m_dependencies;//あるスキルを習得するために必要な他のスキルの配列
};
