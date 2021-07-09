#ifndef NT_HTTP_SERVER_GUEST_INTERFACE__
#define NT_HTTP_SERVER_GUEST_INTERFACE__

#include <typeinfo>

namespace nt { namespace http { namespace interfaces {

template<typename H>
class Guest
{
public:
    virtual void visit(H* host) = 0;
};

}}}

#endif /* NT_HTTP_SERVER_GUEST_INTERFACE__ */
