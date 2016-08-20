#ifndef EXTMRB_HELPERS_NUMERIC_H
#define EXTMRB_HELPERS_NUMERIC_H

inline static unsigned char
extmrb_clamp_ubyte(int num)
{
  return num < 0 ? 0 : (num > 255 ? 255 : num);
}

inline static signed char
extmrb_clamp_sbyte(int num)
{
  return num < -128 ? -128 : (num > 127 ? 127 : num);
}

inline static unsigned short
extmrb_clamp_ushort(int num)
{
  return num < 0 ? 0 : (num > 0xFFFF ? 0xFFFF : num);
}

inline static signed short
extmrb_clamp_sshort(int num)
{
  return num < -0x8000 ? -0x8000 : (num > 0x7FFF ? 0x7FFF : num);
}

#endif
