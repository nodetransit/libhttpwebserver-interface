#ifndef NT_HTTP_SERVER_KERNEL_INTERFACE__
#define NT_HTTP_SERVER_KERNEL_INTERFACE__

#include "request.hpp"
#include "response.hpp"

namespace nt { namespace http { namespace interfaces {


class Kernel
{
public:
    Kernel() = default;
    virtual ~Kernel() noexcept = 0;

    virtual Response* process(Request*) = 0;
};

}}}

#endif /* NT_HTTP_SERVER_KERNEL_INTERFACE__ */
