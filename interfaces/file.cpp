#include "file.hpp"

using namespace nt::interfaces;

File::File() :
    filename(_filename),
    size(_size),
    type(_type),
    _filename(std::string()),
    _size(0),
    _type(std::string())
{}

// File::~File() noexcept = default;
