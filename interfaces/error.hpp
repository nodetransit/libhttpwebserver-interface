#ifndef NT_HTTP_SERVER_ERROR_INTERFACE__
#define NT_HTTP_SERVER_ERROR_INTERFACE__

#include <string>
#include <sstream>
#include <exception>

namespace nt { namespace interfaces {

template<class E>
class Error :
      public std::exception
{
protected:
    std::string message;

public:
    const char*
    what() noexcept
    {
        return message.c_str();
    }

    template<typename Type>
    E& operator<<(const Type& value)
    {
        std::stringstream stream;

        stream << value;

        message += stream.str();

        return *dynamic_cast<E*>(this);
    }
};

}}

#endif /* NT_HTTP_SERVER_FILE_INTERFACE__ */
