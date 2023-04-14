#pragma once
#include<memory>



class SkillCommand {
public:
	virtual ~SkillCommand(){};
	virtual void execute() = 0;
private:
};