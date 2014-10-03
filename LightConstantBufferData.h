#pragma once
#include <DirectXMath.h>
#include "Material.h"
#include "DirectionalLight.h"
#include "PointLight.h"
#include "Spotlight.h"

namespace D3dtut
{
	struct LightConstantBufferData
	{
		Material material;
		DirectionalLight dLights[8];
		PointLight pLights[8];
		Spotlight sLights[8];
		DirectX::XMFLOAT3 cameraPosition;
		float pad;
		float noDlights;
		float noPlights;
		float noSlights;
		float pad2;

		static unsigned int getSize()
		{
			return sizeof(Material)
				+ sizeof(DirectionalLight) * 8
				+ sizeof(PointLight) * 8
				+ sizeof(Spotlight) * 8
				+ sizeof(XMFLOAT3)
				+ sizeof(float) * 5;
		}

		LightConstantBufferData() {}

		LightConstantBufferData(const LightConstantBufferData& in)
		{
			material = in.material;

			for (int i = 0; i < in.noDlights; i++)
			{
				dLights[i] = in.dLights[i];
			}

			for (int i = 0; i < in.noPlights; i++)
			{
				pLights[i] = in.pLights[i];
			}

			for (int i = 0; i < in.noSlights; i++)
			{
				sLights[i] = in.sLights[i];
			}

			noDlights = in.noDlights;
			noPlights = in.noPlights;
			noSlights = in.noSlights;

			cameraPosition = in.cameraPosition;
		}
	};
}