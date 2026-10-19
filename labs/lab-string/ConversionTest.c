#include <assert.h>
#include "Conversion.h"

/*
 * ConversionTest.c — Pruebas del modulo Conversion
 *
 * Mismas restricciones que StringTest.c:
 * solo assert, literales, sin salida a stdout.
 */

int main(void) {

    /* ── ToInteger — tiene un bug, estos tests ya estan activos ─────────── */
    assert(ToInteger("0") == 0);
    assert(ToInteger("1") == 1);
    assert(ToInteger("42") == 42);
    assert(ToInteger("-7") == -7);
    assert(ToInteger("100") == 100);

    /* ── ToDigitSum ─────────────────────────────────────────────────────── */
    assert(ToDigitSum("0") == 0);
    assert(ToDigitSum("7") == 7);
    assert(ToDigitSum("123") == 6);
    assert(ToDigitSum("-45") == 9);
    assert(ToDigitSum("1000") == 1);

    return 0;
}
