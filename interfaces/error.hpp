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
public:
    const char*
    what() noexcept
    {
        stream.str();
    }

    template<typename Type>
    E& operator<<(const Type& value)
    {
        stream << value;

        return *dynamic_cast<E*>(this);
    }

private:
    std::stringstream stream;
};

}}

#endif /* NT_HTTP_SERVER_FILE_INTERFACE__ */
