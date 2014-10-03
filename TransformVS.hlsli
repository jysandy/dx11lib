#include "IOData.hlsli"

cbuffer perObject : register(b0)
{
	float4x4 world;
	float4x4 view;
	float4x4 projection;
}

PixelShaderInput vertexShader(VertexShaderInput input)
{
	PixelShaderInput output;
	output.color = input.color;
	output.texcoord = input.texcoord;
	float4x4 wvp;
	wvp = mul(mul(world, view), projection);
	output.posH = mul(float4(input.pos, 1.0f), wvp);
	output.posW = mul(float4(input.pos, 1.0f), world);
	//This works as long as there is only uniform scaling.
	output.normal = mul(float4(input.normal, 0.0f), world);
	return output;
}
