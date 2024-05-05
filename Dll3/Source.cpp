#include "Source.h"
#include "pch.h"

extern "C" __declspec(dllexport) int sum(int i) {
	return i;
}