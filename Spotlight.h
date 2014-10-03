#pragma once
#include <DirectXMath.h>

namespace D3dtut
{
	struct Spotlight
	{
		DirectX::XMFLOAT4 ambient;
		DirectX::XMFLOAT4 diffuse;
		DirectX::XMFLOAT4 specular;
		DirectX::XMFLOAT3 position;
		float range;
		DirectX::XMFLOAT3 attenuation;	//a0, a1, a2
		float spotlightPower;
		DirectX::XMFLOAT3 direction;
		float pad;

		Spotlight(){}
		Spotlight(const Spotlight& in)
		{
			ambient = in.ambient;
			diffuse = in.diffuse;
			specular = in.specular;
			position = in.position;
			range = in.range;
			attenuation = in.attenuation;
			spotlightPower = in.spotlightPower;
		}
	};
}