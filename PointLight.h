#pragma once
#include <DirectXMath.h>

namespace D3dtut
{
	struct PointLight
	{
		DirectX::XMFLOAT3 position;
		float pad;
		DirectX::XMFLOAT3 attenuation;	//a0, a1, a2
		float range;
		DirectX::XMFLOAT4 ambient;
		DirectX::XMFLOAT4 diffuse;
		DirectX::XMFLOAT4 specular;

		PointLight(){}
		PointLight(const PointLight& in)
		{
			ambient = in.ambient;
			diffuse = in.diffuse;
			specular = in.specular;
			position = in.position;
			range = in.range;
			attenuation = in.attenuation;
		}
	};
}