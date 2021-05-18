#ifndef BASE64_H_
#define BASE64_H_

#include <glog/logging.h>
#include <cstring>
#include <string>

namespace adas_dds {

class Base64 {
 public:

  static void Encode(const char *in_buf, const size_t in_buf_sz, char* out_buf, size_t &out_buf_sz) {
    static constexpr char sEncodingTable[] = {
      'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
      'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
      'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
      'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
      'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
      'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
      'w', 'x', 'y', 'z', '0', '1', '2', '3',
      '4', '5', '6', '7', '8', '9', '+', '/'
    };

    size_t in_len = in_buf_sz;
    size_t out_len = 4 * ((in_len + 2) / 3);
    out_buf_sz = out_len;
    if (out_buf == nullptr)
        return;

    //out_buf = new char[out_len];
    memset(out_buf, 0, out_len);
    size_t i;
    char *p = out_buf;

    for (i = 0; i < in_len - 2; i += 3) {
      *p++ = sEncodingTable[(in_buf[i] >> 2) & 0x3F];
      *p++ = sEncodingTable[((in_buf[i] & 0x3) << 4) | ((int) (in_buf[i + 1] & 0xF0) >> 4)];
      *p++ = sEncodingTable[((in_buf[i + 1] & 0xF) << 2) | ((int) (in_buf[i + 2] & 0xC0) >> 6)];
      *p++ = sEncodingTable[in_buf[i + 2] & 0x3F];
    }
    if (i < in_len) {
      *p++ = sEncodingTable[(in_buf[i] >> 2) & 0x3F];
      if (i == (in_len - 1)) {
        *p++ = sEncodingTable[((in_buf[i] & 0x3) << 4)];
        *p++ = '=';
      }
      else {
        *p++ = sEncodingTable[((in_buf[i] & 0x3) << 4) | ((int) (in_buf[i + 1] & 0xF0) >> 4)];
        *p++ = sEncodingTable[((in_buf[i + 1] & 0xF) << 2)];
      }
      *p++ = '=';
    }
  }

  static void Encode(const unsigned char *in_buf, const size_t in_buf_sz, char* out_buf, size_t &out_buf_sz) {
    static constexpr char sEncodingTable[] = {
      'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
      'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
      'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
      'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
      'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
      'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
      'w', 'x', 'y', 'z', '0', '1', '2', '3',
      '4', '5', '6', '7', '8', '9', '+', '/'
    };

    size_t in_len = in_buf_sz;
    size_t out_len = 4 * ((in_len + 2) / 3);
    out_buf_sz = out_len;
    if (out_buf == nullptr)
        return;

    //out_buf = new char[out_len];
    memset(out_buf, 0, out_len);
    size_t i;
    char *p = out_buf;

    for (i = 0; i < in_len - 2; i += 3) {
      *p++ = sEncodingTable[(in_buf[i] >> 2) & 0x3F];
      *p++ = sEncodingTable[((in_buf[i] & 0x3) << 4) | ((int) (in_buf[i + 1] & 0xF0) >> 4)];
      *p++ = sEncodingTable[((in_buf[i + 1] & 0xF) << 2) | ((int) (in_buf[i + 2] & 0xC0) >> 6)];
      *p++ = sEncodingTable[in_buf[i + 2] & 0x3F];
    }
    if (i < in_len) {
      *p++ = sEncodingTable[(in_buf[i] >> 2) & 0x3F];
      if (i == (in_len - 1)) {
        *p++ = sEncodingTable[((in_buf[i] & 0x3) << 4)];
        *p++ = '=';
      }
      else {
        *p++ = sEncodingTable[((in_buf[i] & 0x3) << 4) | ((int) (in_buf[i + 1] & 0xF0) >> 4)];
        *p++ = sEncodingTable[((in_buf[i + 1] & 0xF) << 2)];
      }
      *p++ = '=';
    }
  }

  static void Decode(const char *in_buf, const size_t in_buf_sz, char* out_buf, size_t &out_buf_sz) {
    static constexpr unsigned char kDecodingTable[] = {
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 62, 64, 64, 64, 63,
      52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 64, 64, 64, 64, 64, 64,
      64,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 64, 64, 64, 64, 64,
      64, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
      41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64
    };

    size_t in_len = in_buf_sz;
    if (in_len % 4 != 0) {
        LOG(ERROR) << "Input array's size " << in_len << " is not multiply of 4";
    }

    size_t out_len = in_len / 4 * 3;

    if (in_buf[in_len - 1] == '=') out_len--;
    if (in_buf[in_len - 2] == '=') out_len--;

    out_buf_sz = out_len;

    if (out_buf == nullptr)
        return;

    //out_buf = new char[out_len];

    for (size_t i = 0, j = 0; i < in_len;) {
      uint32_t a = in_buf[i] == '=' ? 0 & i++ : kDecodingTable[static_cast<int>(in_buf[i++])];
      uint32_t b = in_buf[i] == '=' ? 0 & i++ : kDecodingTable[static_cast<int>(in_buf[i++])];
      uint32_t c = in_buf[i] == '=' ? 0 & i++ : kDecodingTable[static_cast<int>(in_buf[i++])];
      uint32_t d = in_buf[i] == '=' ? 0 & i++ : kDecodingTable[static_cast<int>(in_buf[i++])];

      uint32_t triple = (a << 3 * 6) + (b << 2 * 6) + (c << 1 * 6) + (d << 0 * 6);

      if (j < out_len) out_buf[j++] = (triple >> 2 * 8) & 0xFF;
      if (j < out_len) out_buf[j++] = (triple >> 1 * 8) & 0xFF;
      if (j < out_len) out_buf[j++] = (triple >> 0 * 8) & 0xFF;
    }
  }

};

}

#endif // BASE64_H_
