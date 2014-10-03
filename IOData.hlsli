struct VertexShaderInput
{
	float3 pos : POSITION;
	float3 normal : NORMAL;
	float2 texcoord : TEXCOORD;
	float4 color : COLOR;
};

struct PixelShaderInput
{
	float4 posH : SV_POSITION;
	float4 posW : POSITION;
	float4 color : COLOR;
	float3 normal : NORMAL;
	float2 texcoord : TEXCOORD;
};