/*
 * TMCField.h
 *
 *  Created on: 09.05.2021
 *      Author: AB
 */

#ifndef TMCFIELD_H_
#define TMCFIELD_H_

#include<stdint.h>

class TMCField
{
    public:
        /* Class constructor, initializes private attributes. */
        TMCField(uint32_t address, uint32_t mask, uint32_t shift)
            : _mask(mask), _address(address), _shift(shift) {}

        /* Sets fieldValue inside registerValue. */
        inline uint32_t setField(uint32_t fieldValue, uint32_t registerValue)
        {
            return (registerValue & (~_mask)) | ((fieldValue << _shift) & _mask);
        }

        /* Extracts the value of the field from registerValue. */
        inline uint32_t getField(uint32_t registerValue)
        {
            return (registerValue & _mask) >> _shift;
        }

        /* Gets address of register that contains this field. */
        inline uint32_t address()
        {
            return _address;
        }

    private:
        const uint32_t _mask, _address;
        const uint8_t _shift;
};

#endif /* TMCFIELD_H_ */