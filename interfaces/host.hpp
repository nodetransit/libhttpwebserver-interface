#ifndef NT_HTTP_SERVER_HOST_INTERFACE__
#define NT_HTTP_SERVER_HOST_INTERFACE__

#include "interfaces/guest.hpp"

#define HOST(serve)                  \
    template<typename Guest>         \
    inline void serve(Guest* guest)  \
    { guest->visit(this); }


#endif /* NT_HTTP_SERVER_HOST_INTERFACE__ */
