#pragma once
#include <fstream>
#include <stdint.h>

#include "../ModelConverter.hpp"

class RpmConverter : public ModelConverter
{
public:
	Model importModel(std::string path);
	void exportModel(const Model& model, std::string location);

private:
	int skipToStart(const uint8_t* data);
	int skipString(const int start, const uint8_t* data);
	void float32(float* out, uint16_t in);
};