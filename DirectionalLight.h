#pragma once
#include <DirectXMath.h>

namespace D3dtut
{
	struct DirectionalLight
	{
		DirectX::XMFLOAT4 ambient;
		DirectX::XMFLOAT4 diffuse;
		DirectX::XMFLOAT4 specular;
		DirectX::XMFLOAT3 lightDirection;
		float pad;

		DirectionalLight(){	}
		DirectionalLight(const DirectionalLight& in)
		{
			ambient = in.ambient;
			diffuse = in.diffuse;
			specular = in.specular;
			lightDirection = in.lightDirection;
		}
	};
}