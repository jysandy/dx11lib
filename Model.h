#pragma once

#include <DirectXMath.h>
#include <d3d11.h>
#include <string>
#include "d3dutil.h"
#include "Material.h"

namespace D3dtut
{
	struct Model
	{
		DirectX::XMFLOAT4X4 world;
		std::string name;
		std::wstring textureFilename;
		Material material;

		Model(int i, std::string name);
		const int getId() const;

	private:
		int id;
	};
}