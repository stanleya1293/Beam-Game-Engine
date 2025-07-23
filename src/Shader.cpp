#include "Shader.h"

Shader::Shader(const std::string &vertexFilePath, const std::string &fragmentFilePath) : _shaderProgram(0) {
	unsigned int vertexShader = LoadFile(ShaderType::Vertex, vertexFilePath);	
	unsigned int fragmentShader = LoadFile(ShaderType::Fragment, fragmentFilePath);
	
}

Shader::~Shader() {

}

void Shader::Use() const {
	
}

unsigned int Shader::LoadFile(ShaderType type, const std::string &fileName) {
	std::string buffer;
	std::string sourceCode = "";
	std::ifstream file;
	unsigned int shader;
	
	file.open(fileName);
	while (getline(file, buffer) != EOF) {
		sourceCode += buffer;
	}

	switch(type) {
	case vertex:
		shader = glCreateShader(GL_VERTEX_SHADER);
		break;
	case fragment:
		shader = glCreateShader(GL_FRAGMENT_SHADER);	
		break;
	case compute:
		break;
	default:
		break;
	}
	
	char* src = sourceCode.c_str();
	glShaderSource(shader, 1, &src, NULL);
	glCompileShader(shader);
	return shader;
}

