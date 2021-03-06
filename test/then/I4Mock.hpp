/*
 * file generated by gmock: I4Mock.hpp
 */
#ifndef I4MOCK_HPP
#define I4MOCK_HPP

#include <gmock/gmock.h>
#include "./given/I3I4.hpp"

namespace n1 {

class I4Mock : public I4
{
public:
    MOCK_METHOD1(f0, void(bool));
    MOCK_METHOD0(f1, void());
    MOCK_CONST_METHOD0(f2, Enum());
};

} // namespace n1

#endif // I4MOCK_HPP

