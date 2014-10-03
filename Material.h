#pragma once
#include <DirectXMath.h>

namespace D3dtut
{
	struct Material
	{
		DirectX::XMFLOAT4 ambient;
		DirectX::XMFLOAT4 diffuse;
		DirectX::XMFLOAT4 specular;
	};
}