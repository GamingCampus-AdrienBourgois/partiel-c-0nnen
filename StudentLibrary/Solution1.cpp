#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    if (_from == _to) {

        return _value;
    }

    switch (_from) {

    // CELSIUS to ...
    case TemperatureUnits::CELSIUS:
        switch (_to)
        {
        case TemperatureUnits::FAHRENHEIT:
            return (_value * 9.0f / 5.0f) + 32.0f;
        case TemperatureUnits::KELVIN:
            return _value + 273.0f;
        }
        break;

    // FAHRENHEIT to ...
    case TemperatureUnits::FAHRENHEIT:
        switch (_to)
        {
        case TemperatureUnits::CELSIUS:
            return (_value - 32.0f) * 5.0f / 9.0f;
        case TemperatureUnits::KELVIN:
            return (_value - 32.0f) * 5.0f / 9.0f + 273.0f;
        }
        break;

    // KELIVIN to ...
    case TemperatureUnits::KELVIN:
        switch (_to)
        {
        case TemperatureUnits::CELSIUS:
            return _value - 273.0f;
        case TemperatureUnits::FAHRENHEIT:
            return (_value - 273.0f) * 9.0f / 5.0f + 32.0f;
        }
        break;
    }

    return -1.0f;
};

#endif
