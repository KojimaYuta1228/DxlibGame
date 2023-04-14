#include "gm_scene_base.h"
#include"../Character/CharacterBase.h"
#include"../Character/MyCharacter.h"
#include"../Skill/SkillCommand.h"
#include"../Skill/SkillBase.h"
class GmCamera;
class AnimSprite3D;
class SkillBase;
class ScenePlay : public SceneBase {
public :
	ScenePlay(){}
	~ScenePlay();

	GmCamera* camera_ = nullptr;
	AnimSprite3D* sprite_ = nullptr;

	void initialzie() override;
	void update(float delta_time) override;
	void render() override;
private:
	std::shared_ptr<MyCharacter> m_player1 = nullptr;
	std::shared_ptr<MyCharacter> m_enemy1 = nullptr;
	SkillBase skill;
};

