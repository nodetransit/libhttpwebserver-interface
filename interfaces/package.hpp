#ifndef NT_HTTP_SERVER_PACKAGE_INTERFACE__
#define NT_HTTP_SERVER_PACKAGE_INTERFACE__

namespace nt { namespace http { namespace interfaces {

class Package
{
public:
    Package() = default;
    virtual ~Package() = 0;
};

}}}

#endif /* NT_HTTP_SERVER_PACKAGE_INTERFACE__ */
