#pragma once
#include <d3d11.h>
#include "d3dutil.h"

namespace D3dtut
{
	struct NamedTexture
	{
		D3dtut::D3dutil::ComPtr<ID3D11Texture2D> texture;
		D3dtut::D3dutil::ComPtr<ID3D11ShaderResourceView> shaderResourceView;
	};
}