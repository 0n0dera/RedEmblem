#pragma once

namespace texture
{
	bool load_texture_from_file(const std::string path, SDL_Texture*& texture, SDL_Renderer* renderer);
}