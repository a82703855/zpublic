#ifndef ZL_VALUE_DATA_UINT16_H
#define ZL_VALUE_DATA_UINT16_H

#include "value_data.h"

namespace zl
{
namespace DataBox
{

class UInt16Data : public ValueData
{
public:
    UInt16Data(uint16 Value = 0);
    virtual ~UInt16Data();

    virtual bool ToUInt16(OUT uint16& Value);

    void SetValue(IN uint16 Value);

private:
    DISALLOW_ASSIGN(UInt16Data);
    uint16 m_Value;
};

}// namespace DataBox
}// namespace zl

#endif