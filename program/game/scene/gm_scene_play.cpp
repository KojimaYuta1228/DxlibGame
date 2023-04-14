#include "../gm_manager.h"
#include "../gm_camera.h"
#include "../model/gm_anim_sprite3d.h"
#include "gm_scene_play.h"
#include "gm_scene_result.h"
#include"../Character/CharacterBase.h"
#include"../Character/MyCharacter.h"
#include"../Skill/SkillCommand.h"
#include"../Skill/SkillBase.h"


ScenePlay::~ScenePlay() {
	delete camera_;
	delete sprite_;
}


void ScenePlay::initialzie() {
	camera_ = new GmCamera();
	camera_->pos_ = { 0, 150, -300 };

	sprite_ = new AnimSprite3D(camera_);
	sprite_->regist(32, 48, "walk_front", "graphics/c1_anim_up.png", tnl::SeekUnit::ePlayMode::REPEAT, 1.0f, 4, 48, 0);
	sprite_->regist(32, 48, "walk_back", "graphics/c1_anim_down.png", tnl::SeekUnit::ePlayMode::REPEAT, 1.0f, 4, 48, 0);
	sprite_->regist(32, 48, "walk_left", "graphics/c1_anim_left.png", tnl::SeekUnit::ePlayMode::REPEAT, 1.0f, 4, 48, 0);
	sprite_->regist(32, 48, "walk_right", "graphics/c1_anim_right.png", tnl::SeekUnit::ePlayMode::REPEAT, 1.0f, 4, 48, 0);

	sprite_->setCurrentAnim("walk_front");
	m_player1 = std::make_shared<MyCharacter>("player1",1,100,10,5,true);
	m_enemy1 = std::make_shared<MyCharacter>("enemy1", 2, 50, 10, 5, true);

	
}

void ScenePlay::update(float delta_time)
{
	GameManager* mgr = GameManager::GetInstance();
	m_player1->level_up();
	if (tnl::Input::IsKeyDownTrigger(eKeys::KB_0)) {
		m_player1->add_exp(4);

	}
	if (tnl::Input::IsKeyDownTrigger(eKeys::KB_1)) {
		m_player1->attack(m_enemy1);
		m_enemy1->attack(m_player1);
	}
	if (tnl::Input::IsKeyDown(eKeys::KB_2)) {
		skill.set_skill_type(SkillType::Fire);
		skill.execute();
	}
	if (tnl::Input::IsKeyDown(eKeys::KB_3)) {
		skill.set_skill_type(SkillType::Ice);
		skill.execute();
	}
}

void ScenePlay::render()
{
	camera_->update();

	DrawGridGround(camera_, 50, 20);

	sprite_->render(camera_);
	
	
}
