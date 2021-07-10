#ifndef NT_HTTP_SERVER_FILE_INTERFACE__
#define NT_HTTP_SERVER_FILE_INTERFACE__

#include <string>

namespace nt { namespace interfaces {

class File
{
public:
    const std::string & filename;
    const unsigned int& size;
    const std::string & type;

protected:
    std::string  _filename;
    unsigned int _size;
    std::string  _type;

public:
    File();
    virtual ~File() noexcept = default;
};

}}

#endif /* NT_HTTP_SERVER_FILE_INTERFACE__ */
