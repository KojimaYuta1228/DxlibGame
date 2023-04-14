#include "CharacterBase.h"

CharacterBase::CharacterBase(std::string name, int character_id, int hp, int attack_power, int defence_power,bool isalive)
	:m_name(name),m_character_id(character_id),m_hp(hp),m_attack_power(attack_power),m_defence_power(defence_power),m_isalive(isalive)
{
}

std::string CharacterBase::get_name() const{return m_name;}
int CharacterBase::get_character_id() const{return m_character_id;}
int CharacterBase::get_hp() const{return m_hp;}
int CharacterBase::get_attack_power() const{return m_attack_power;}
int CharacterBase::get_defence_power() const{return m_defence_power;}
bool CharacterBase::get_isalive() const{return true;}

void CharacterBase::set_name(std::string name) { m_name = name; }
void CharacterBase::set_character_id(int character_id) { m_character_id = character_id; }
void CharacterBase::set_hp(int hp) { m_hp = hp; }
void CharacterBase::set_attack_power(int attack_power) { m_attack_power = attack_power; }
void CharacterBase::set_defence_power(int defence_power) { m_defence_power = defence_power; }
void CharacterBase::set_isalive(bool isalive) { m_isalive = isalive; }

void CharacterBase::attack(const std::shared_ptr<CharacterBase>& other)
{
	int damage = m_attack_power - other->get_defence_power();
	if (damage > 0) { 
		other->take_damage(damage);
		DrawStringEx(200, 100, -1, damage + "ó‚¯‚½");
	}
	else{ DrawStringEx(200, 100, -1, "UŒ‚‚ğ–h‚¢‚¾"); }
}

void CharacterBase::take_damage(int damage)
{
	m_hp -= damage;
	if (m_hp <= 0) {
		m_isalive = false;
		DrawStringEx(200, 200, -1, "€‚É‚Ü‚µ‚½");
	}
}

