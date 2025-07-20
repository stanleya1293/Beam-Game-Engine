#ifndef SHADER_H
#define SHADER_H

#include "Libraries.h"

class Shader {
public:
	Shader();
	~Shader();
	void use() const;
private:
	unsigned int _shader_program;
};

#endif
