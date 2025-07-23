#ifndef SHADER_H
#define SHADER_H

#include "Libraries.h"

enum class ShaderType {
	Vertex,
	Fragment
};

class Shader {
public:
	Shader(const std::string &vertexFilePath, const std::string &fragmentFilePath);
	~Shader();
	void Use() const;
private:
	unsigned int LoadFile(ShaderType type, const std::string &fileName) const;
private:
	unsigned int _shaderProgram;
};

#endif
