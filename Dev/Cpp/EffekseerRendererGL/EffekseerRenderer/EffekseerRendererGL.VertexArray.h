
#pragma once

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "EffekseerRendererGL.RendererImplemented.h"
#include "EffekseerRendererGL.DeviceObject.h"

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
namespace EffekseerRendererGL
{
//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
class VertexArray
	: public DeviceObject
{
private:
	GLuint					m_vertexArray;

	Shader*					m_shader;
	VertexBuffer*			m_vertexBuffer;
	IndexBuffer*			m_indexBuffer;

	VertexArray( RendererImplemented* renderer, Shader* shader, 
		VertexBuffer* vertexBuffer, IndexBuffer* indexBuffer );
public:
	virtual ~VertexArray();

	static VertexArray* Create( RendererImplemented* renderer, Shader* shader, 
		VertexBuffer* vertexBuffer, IndexBuffer* indexBuffer );

	GLuint GetInterface() const { return m_vertexArray; }

public:	// �f�o�C�X�����p
	virtual void OnLostDevice();
	virtual void OnResetDevice();

private:
	void Init();
	void Release();
};

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
}
//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------