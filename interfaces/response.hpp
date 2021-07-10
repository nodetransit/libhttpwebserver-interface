#ifndef NT_HTTP_SERVER_RESPONSE_INTERFACE__
#define NT_HTTP_SERVER_RESPONSE_INTERFACE__

#include <sstream>
#include <unordered_map>
#include <algorithm>

namespace nt { namespace http { namespace interfaces {


class Response
{
public:
    std::unordered_map<std::string, std::string> headers;
    std::unordered_map<std::string, std::string> cookies;
    std::string                                  body;

public:
    Response() = default;
    virtual ~Response() noexcept = 0;

};

}}}

#endif /* NT_HTTP_SERVER_REQUEST_INTERFACE__ */
