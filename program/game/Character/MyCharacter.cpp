#include"CharacterBase.h"
#include "MyCharacter.h"


MyCharacter::MyCharacter(std::string name, int character_id, int hp, int attack_power, int defence_power, bool isalive)
	:CharacterBase(name,character_id,hp,attack_power,defence_power,isalive)
{
	m_level = 1;
	m_exp = 0;
}

int MyCharacter::get_level() const
{
	return m_level;
}

int MyCharacter::get_exp() const
{
	return m_exp;
}

void MyCharacter::level_up()
{
	if (m_exp >= (m_level * NECESSARYEXP)) {
		m_level++;
		set_hp(get_hp() + 10);
		set_attack_power(get_attack_power() + 5);
		set_defence_power(get_defence_power() + 4);
		m_exp = 0;

	}
	else {
		DrawStringEx(100, 100, -1, "åoå±ílÇ™ë´ÇËÇ‹ÇπÇÒ");
		DrawStringEx(100, 200, -1, "åªç›ÇÃLevelÇÕ%d" , m_level);
	}
}

void MyCharacter::add_exp(int exp)
{
	m_exp += exp;
}
