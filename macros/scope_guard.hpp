#ifndef FB_HTTP_SERVER_MACRO_FINALLY_HPP__
#define FB_HTTP_SERVER_MACRO_FINALLY_HPP__

#include <memory>

#define ______scope_guard_concat_inner(a, b) a ## b
#define ______scope_guard_concat(a, b) ______scope_guard_concat_inner(a, b)

/**
 * @brief scope guard
 */
#define ______________________________________________________________ \
    auto ______scope_guard_concat(____nt__scope__guard__closure, __LINE__) =  \
    std::shared_ptr<char>((char*)[]()->void*{return nullptr;}(),[&](char*&)noexcept{
#define _____________________________________________________________ });


#endif /* FB_HTTP_SERVER_MACRO_FINALLY_HPP__ */
