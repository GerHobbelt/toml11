#if defined(BUILD_MONOLITHIC)
#define UNITTEST_FRAMEWORK_LIBRARY_EXIST     1
#define BOOST_ALL_NO_LIB                     1
#define BOOST_TEST_NO_LIB                    1
#define BOOST_UNIT_TEST_FRAMEWORK_NO_LIB     1
//#define BOOST_TEST_SOURCE
//#define BOOST_TEST_INCLUDED

#define BOOST_TEST_NO_MAIN                   1
#define BOOST_TEST_MODULE  toml11
#endif

#ifndef BOOST_TEST_MODULE
#    error "Please #define BOOST_TEST_MODULE before you #include <unit_test.hpp>"
#endif

#ifdef UNITTEST_FRAMEWORK_LIBRARY_EXIST
#    include <boost/test/unit_test.hpp>
#else
#    include <boost/test/included/unit_test.hpp>
#endif

#include <cstdlib>
#include <string>

static inline auto testinput(const std::string& basename) -> std::string
{
    const auto this_or_that = [](const char *const s, const char *const t) { return s ? s : t; };
    std::string directory = this_or_that(std::getenv("TOMLDIR"), "toml");
    if (!directory.empty() && directory.back() != '/')
    {
        directory.push_back('/');
    }
    return directory.append("tests/").append(basename);
}
