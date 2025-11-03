/*
 * Polish keycodes for ZMK
 * To use: #include "keys_pl.h"
 * Then use e.g. &kp PL_AOGON for ą
 */

#pragma once

// Right Alt (AltGr) combinations for Polish letters
#define PL_AOGON  RA(A)   // ą
#define PL_CACUTE RA(C)   // ć
#define PL_EOGON  RA(E)   // ę
#define PL_LSTROKE RA(L)  // ł
#define PL_NACUTE RA(N)   // ń
#define PL_OACUTE RA(O)   // ó
#define PL_SACUTE RA(S)   // ś
#define PL_ZACUTE RA(Z)   // ź
#define PL_ZDOT   RA(X)   // ż (AltGr + X on PL keyboard)
