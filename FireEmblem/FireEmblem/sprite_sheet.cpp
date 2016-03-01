#include "stdafx.h"
#include "sprite_sheet.h"

const std::string SpriteSheet::kPlayerSpriteFilePath = "Textures/player_sprites.png";
const std::string SpriteSheet::kEnemySpriteFilePath = "Textures/enemy_sprites.png";

SDL_Texture* SpriteSheet::player_sprites_ = NULL;
SDL_Texture* SpriteSheet::enemy_sprites_ = NULL;

void SpriteSheet::init_sprites(SDL_Renderer* renderer)
{
	texture::load_texture_from_file(kPlayerSpriteFilePath, player_sprites_, renderer);
	texture::load_texture_from_file(kEnemySpriteFilePath, enemy_sprites_, renderer);
}

SpriteSheet::~SpriteSheet()
{
	SDL_DestroyTexture(player_sprites_);
	SDL_DestroyTexture(enemy_sprites_);
}