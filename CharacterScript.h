#pragma once

namespace potato_engine_game {

REGISTER_SCRIPT(character_script);

class character_script : public PotatoEngine::script::entity_script
{
public:
	constexpr explicit character_script(PotatoEngine::game_entity::entity entity)
		: PotatoEngine::script::entity_script(entity) {}

	void update(float dt) override;
};

}