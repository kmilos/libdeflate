/*
 * crc32_multipliers.h - constants for CRC-32 folding
 *
 * THIS FILE WAS GENERATED BY gen_crc32_multipliers.c.  DO NOT EDIT.
 */

#define CRC32_1VECS_MULT_1 0xae689191 /* x^159 mod G(x) */
#define CRC32_1VECS_MULT_2 0xccaa009e /* x^95 mod G(x) */
#define CRC32_1VECS_MULTS { CRC32_1VECS_MULT_1, CRC32_1VECS_MULT_2 }

#define CRC32_2VECS_MULT_1 0xf1da05aa /* x^287 mod G(x) */
#define CRC32_2VECS_MULT_2 0x81256527 /* x^223 mod G(x) */
#define CRC32_2VECS_MULTS { CRC32_2VECS_MULT_1, CRC32_2VECS_MULT_2 }

#define CRC32_3VECS_MULT_1 0x3db1ecdc /* x^415 mod G(x) */
#define CRC32_3VECS_MULT_2 0xaf449247 /* x^351 mod G(x) */
#define CRC32_3VECS_MULTS { CRC32_3VECS_MULT_1, CRC32_3VECS_MULT_2 }

#define CRC32_4VECS_MULT_1 0x8f352d95 /* x^543 mod G(x) */
#define CRC32_4VECS_MULT_2 0x1d9513d7 /* x^479 mod G(x) */
#define CRC32_4VECS_MULTS { CRC32_4VECS_MULT_1, CRC32_4VECS_MULT_2 }

#define CRC32_5VECS_MULT_1 0x1c279815 /* x^671 mod G(x) */
#define CRC32_5VECS_MULT_2 0xae0b5394 /* x^607 mod G(x) */
#define CRC32_5VECS_MULTS { CRC32_5VECS_MULT_1, CRC32_5VECS_MULT_2 }

#define CRC32_6VECS_MULT_1 0xdf068dc2 /* x^799 mod G(x) */
#define CRC32_6VECS_MULT_2 0x57c54819 /* x^735 mod G(x) */
#define CRC32_6VECS_MULTS { CRC32_6VECS_MULT_1, CRC32_6VECS_MULT_2 }

#define CRC32_7VECS_MULT_1 0x31f8303f /* x^927 mod G(x) */
#define CRC32_7VECS_MULT_2 0x0cbec0ed /* x^863 mod G(x) */
#define CRC32_7VECS_MULTS { CRC32_7VECS_MULT_1, CRC32_7VECS_MULT_2 }

#define CRC32_8VECS_MULT_1 0x33fff533 /* x^1055 mod G(x) */
#define CRC32_8VECS_MULT_2 0x910eeec1 /* x^991 mod G(x) */
#define CRC32_8VECS_MULTS { CRC32_8VECS_MULT_1, CRC32_8VECS_MULT_2 }

#define CRC32_9VECS_MULT_1 0x26b70c3d /* x^1183 mod G(x) */
#define CRC32_9VECS_MULT_2 0x3f41287a /* x^1119 mod G(x) */
#define CRC32_9VECS_MULTS { CRC32_9VECS_MULT_1, CRC32_9VECS_MULT_2 }

#define CRC32_10VECS_MULT_1 0xe3543be0 /* x^1311 mod G(x) */
#define CRC32_10VECS_MULT_2 0x9026d5b1 /* x^1247 mod G(x) */
#define CRC32_10VECS_MULTS { CRC32_10VECS_MULT_1, CRC32_10VECS_MULT_2 }

#define CRC32_11VECS_MULT_1 0x5a1bb05d /* x^1439 mod G(x) */
#define CRC32_11VECS_MULT_2 0xd1df2327 /* x^1375 mod G(x) */
#define CRC32_11VECS_MULTS { CRC32_11VECS_MULT_1, CRC32_11VECS_MULT_2 }

#define CRC32_12VECS_MULT_1 0x596c8d81 /* x^1567 mod G(x) */
#define CRC32_12VECS_MULT_2 0xf5e48c85 /* x^1503 mod G(x) */
#define CRC32_12VECS_MULTS { CRC32_12VECS_MULT_1, CRC32_12VECS_MULT_2 }

#define CRC32_FINAL_MULT 0xb8bc6765 /* x^63 mod G(x) */
#define CRC32_BARRETT_CONSTANT_1 0x00000001f7011641ULL /* floor(x^64 / G(x)) */
#define CRC32_BARRETT_CONSTANT_2 0x00000001db710641ULL /* G(x) */
#define CRC32_BARRETT_CONSTANTS { CRC32_BARRETT_CONSTANT_1, CRC32_BARRETT_CONSTANT_2 }

#define CRC32_NUM_CHUNKS 4
#define CRC32_MIN_CHUNK_LEN 128

/* Multipliers for implementations that use a variable chunk length */
static const u32 crc32_mults_for_chunklen[][CRC32_NUM_CHUNKS - 1] MAYBE_UNUSED = {
	{ 0 /* unused row */ },
	/* chunk_len=128 */
	{ 0xd31343ea /* x^3039 mod G(x) */, 0xe95c1271 /* x^2015 mod G(x) */, 0x910eeec1 /* x^991 mod G(x) */, },
	/* chunk_len=256 */
	{ 0x1d6708a0 /* x^6111 mod G(x) */, 0x0c30f51d /* x^4063 mod G(x) */, 0xe95c1271 /* x^2015 mod G(x) */, },
	/* chunk_len=384 */
	{ 0xdb3839f3 /* x^9183 mod G(x) */, 0x1d6708a0 /* x^6111 mod G(x) */, 0xd31343ea /* x^3039 mod G(x) */, },
	/* chunk_len=512 */
	{ 0x1753ab84 /* x^12255 mod G(x) */, 0xbbf2f6d6 /* x^8159 mod G(x) */, 0x0c30f51d /* x^4063 mod G(x) */, },
	/* chunk_len=640 */
	{ 0x3796455c /* x^15327 mod G(x) */, 0xb8e0e4a8 /* x^10207 mod G(x) */, 0xc352f6de /* x^5087 mod G(x) */, },
	/* chunk_len=768 */
	{ 0x3954de39 /* x^18399 mod G(x) */, 0x1753ab84 /* x^12255 mod G(x) */, 0x1d6708a0 /* x^6111 mod G(x) */, },
	/* chunk_len=896 */
	{ 0x632d78c5 /* x^21471 mod G(x) */, 0x3fc33de4 /* x^14303 mod G(x) */, 0x9a1b53c8 /* x^7135 mod G(x) */, },
	/* chunk_len=1024 */
	{ 0xa0decef3 /* x^24543 mod G(x) */, 0x7b4aa8b7 /* x^16351 mod G(x) */, 0xbbf2f6d6 /* x^8159 mod G(x) */, },
	/* chunk_len=1152 */
	{ 0xe9c09bb0 /* x^27615 mod G(x) */, 0x3954de39 /* x^18399 mod G(x) */, 0xdb3839f3 /* x^9183 mod G(x) */, },
	/* chunk_len=1280 */
	{ 0xd51917a4 /* x^30687 mod G(x) */, 0xcae68461 /* x^20447 mod G(x) */, 0xb8e0e4a8 /* x^10207 mod G(x) */, },
	/* chunk_len=1408 */
	{ 0x154a8a62 /* x^33759 mod G(x) */, 0x41e7589c /* x^22495 mod G(x) */, 0x3e9a43cd /* x^11231 mod G(x) */, },
	/* chunk_len=1536 */
	{ 0xf196555d /* x^36831 mod G(x) */, 0xa0decef3 /* x^24543 mod G(x) */, 0x1753ab84 /* x^12255 mod G(x) */, },
	/* chunk_len=1664 */
	{ 0x8eec2999 /* x^39903 mod G(x) */, 0xefb0a128 /* x^26591 mod G(x) */, 0x6044fbb0 /* x^13279 mod G(x) */, },
	/* chunk_len=1792 */
	{ 0x27892abf /* x^42975 mod G(x) */, 0x48d72bb1 /* x^28639 mod G(x) */, 0x3fc33de4 /* x^14303 mod G(x) */, },
	/* chunk_len=1920 */
	{ 0x77bc2419 /* x^46047 mod G(x) */, 0xd51917a4 /* x^30687 mod G(x) */, 0x3796455c /* x^15327 mod G(x) */, },
	/* chunk_len=2048 */
	{ 0xcea114a5 /* x^49119 mod G(x) */, 0x68c0a2c5 /* x^32735 mod G(x) */, 0x7b4aa8b7 /* x^16351 mod G(x) */, },
	/* chunk_len=2176 */
	{ 0xa1077e85 /* x^52191 mod G(x) */, 0x188cc628 /* x^34783 mod G(x) */, 0x0c21f835 /* x^17375 mod G(x) */, },
	/* chunk_len=2304 */
	{ 0xc5ed75e1 /* x^55263 mod G(x) */, 0xf196555d /* x^36831 mod G(x) */, 0x3954de39 /* x^18399 mod G(x) */, },
	/* chunk_len=2432 */
	{ 0xca4fba3f /* x^58335 mod G(x) */, 0x0acfa26f /* x^38879 mod G(x) */, 0x6cb21510 /* x^19423 mod G(x) */, },
	/* chunk_len=2560 */
	{ 0xcf5bcdc4 /* x^61407 mod G(x) */, 0x4fae7fc0 /* x^40927 mod G(x) */, 0xcae68461 /* x^20447 mod G(x) */, },
	/* chunk_len=2688 */
	{ 0xf36b9d16 /* x^64479 mod G(x) */, 0x27892abf /* x^42975 mod G(x) */, 0x632d78c5 /* x^21471 mod G(x) */, },
	/* chunk_len=2816 */
	{ 0xf76fd988 /* x^67551 mod G(x) */, 0xed5c39b1 /* x^45023 mod G(x) */, 0x41e7589c /* x^22495 mod G(x) */, },
	/* chunk_len=2944 */
	{ 0x6c45d92e /* x^70623 mod G(x) */, 0xff809fcd /* x^47071 mod G(x) */, 0x0c46baec /* x^23519 mod G(x) */, },
	/* chunk_len=3072 */
	{ 0x6116b82b /* x^73695 mod G(x) */, 0xcea114a5 /* x^49119 mod G(x) */, 0xa0decef3 /* x^24543 mod G(x) */, },
	/* chunk_len=3200 */
	{ 0x4d9899bb /* x^76767 mod G(x) */, 0x9f9d8d9c /* x^51167 mod G(x) */, 0x53deb236 /* x^25567 mod G(x) */, },
	/* chunk_len=3328 */
	{ 0x3e7c93b9 /* x^79839 mod G(x) */, 0x6666b805 /* x^53215 mod G(x) */, 0xefb0a128 /* x^26591 mod G(x) */, },
	/* chunk_len=3456 */
	{ 0x388b20ac /* x^82911 mod G(x) */, 0xc5ed75e1 /* x^55263 mod G(x) */, 0xe9c09bb0 /* x^27615 mod G(x) */, },
	/* chunk_len=3584 */
	{ 0x0956d953 /* x^85983 mod G(x) */, 0x97fbdb14 /* x^57311 mod G(x) */, 0x48d72bb1 /* x^28639 mod G(x) */, },
	/* chunk_len=3712 */
	{ 0x55cb4dfe /* x^89055 mod G(x) */, 0x1b37c832 /* x^59359 mod G(x) */, 0xc07331b3 /* x^29663 mod G(x) */, },
	/* chunk_len=3840 */
	{ 0x52222fea /* x^92127 mod G(x) */, 0xcf5bcdc4 /* x^61407 mod G(x) */, 0xd51917a4 /* x^30687 mod G(x) */, },
	/* chunk_len=3968 */
	{ 0x0603989b /* x^95199 mod G(x) */, 0xb03c8112 /* x^63455 mod G(x) */, 0x5e04b9a5 /* x^31711 mod G(x) */, },
	/* chunk_len=4096 */
	{ 0x4470c029 /* x^98271 mod G(x) */, 0x2339d155 /* x^65503 mod G(x) */, 0x68c0a2c5 /* x^32735 mod G(x) */, },
	/* chunk_len=4224 */
	{ 0xb6f35093 /* x^101343 mod G(x) */, 0xf76fd988 /* x^67551 mod G(x) */, 0x154a8a62 /* x^33759 mod G(x) */, },
	/* chunk_len=4352 */
	{ 0xc46805ba /* x^104415 mod G(x) */, 0x416f9449 /* x^69599 mod G(x) */, 0x188cc628 /* x^34783 mod G(x) */, },
	/* chunk_len=4480 */
	{ 0xc3876592 /* x^107487 mod G(x) */, 0x4b809189 /* x^71647 mod G(x) */, 0xc35cf6e7 /* x^35807 mod G(x) */, },
	/* chunk_len=4608 */
	{ 0x5b0c98b9 /* x^110559 mod G(x) */, 0x6116b82b /* x^73695 mod G(x) */, 0xf196555d /* x^36831 mod G(x) */, },
	/* chunk_len=4736 */
	{ 0x30d13e5f /* x^113631 mod G(x) */, 0x4c5a315a /* x^75743 mod G(x) */, 0x8c224466 /* x^37855 mod G(x) */, },
	/* chunk_len=4864 */
	{ 0x54afca53 /* x^116703 mod G(x) */, 0xbccfa2c1 /* x^77791 mod G(x) */, 0x0acfa26f /* x^38879 mod G(x) */, },
	/* chunk_len=4992 */
	{ 0x93102436 /* x^119775 mod G(x) */, 0x3e7c93b9 /* x^79839 mod G(x) */, 0x8eec2999 /* x^39903 mod G(x) */, },
	/* chunk_len=5120 */
	{ 0xbd2655a8 /* x^122847 mod G(x) */, 0x3e116c9d /* x^81887 mod G(x) */, 0x4fae7fc0 /* x^40927 mod G(x) */, },
	/* chunk_len=5248 */
	{ 0x70cd7f26 /* x^125919 mod G(x) */, 0x408e57f2 /* x^83935 mod G(x) */, 0x1691be45 /* x^41951 mod G(x) */, },
	/* chunk_len=5376 */
	{ 0x2d546c53 /* x^128991 mod G(x) */, 0x0956d953 /* x^85983 mod G(x) */, 0x27892abf /* x^42975 mod G(x) */, },
	/* chunk_len=5504 */
	{ 0xb53410a8 /* x^132063 mod G(x) */, 0x42ebf0ad /* x^88031 mod G(x) */, 0x161f3c12 /* x^43999 mod G(x) */, },
	/* chunk_len=5632 */
	{ 0x67a93f75 /* x^135135 mod G(x) */, 0xcf3233e4 /* x^90079 mod G(x) */, 0xed5c39b1 /* x^45023 mod G(x) */, },
	/* chunk_len=5760 */
	{ 0x9830ac33 /* x^138207 mod G(x) */, 0x52222fea /* x^92127 mod G(x) */, 0x77bc2419 /* x^46047 mod G(x) */, },
	/* chunk_len=5888 */
	{ 0xb0b6fc3e /* x^141279 mod G(x) */, 0x2fde73f8 /* x^94175 mod G(x) */, 0xff809fcd /* x^47071 mod G(x) */, },
	/* chunk_len=6016 */
	{ 0x84170f16 /* x^144351 mod G(x) */, 0xced90d99 /* x^96223 mod G(x) */, 0x30de0f98 /* x^48095 mod G(x) */, },
	/* chunk_len=6144 */
	{ 0xd7017a0c /* x^147423 mod G(x) */, 0x4470c029 /* x^98271 mod G(x) */, 0xcea114a5 /* x^49119 mod G(x) */, },
	/* chunk_len=6272 */
	{ 0xadb25de6 /* x^150495 mod G(x) */, 0x84f40beb /* x^100319 mod G(x) */, 0x2b7e0e1b /* x^50143 mod G(x) */, },
	/* chunk_len=6400 */
	{ 0x8282fddc /* x^153567 mod G(x) */, 0xec855937 /* x^102367 mod G(x) */, 0x9f9d8d9c /* x^51167 mod G(x) */, },
	/* chunk_len=6528 */
	{ 0x46362bee /* x^156639 mod G(x) */, 0xc46805ba /* x^104415 mod G(x) */, 0xa1077e85 /* x^52191 mod G(x) */, },
	/* chunk_len=6656 */
	{ 0xb9077a01 /* x^159711 mod G(x) */, 0xdf7a24ac /* x^106463 mod G(x) */, 0x6666b805 /* x^53215 mod G(x) */, },
	/* chunk_len=6784 */
	{ 0xf51d9bc6 /* x^162783 mod G(x) */, 0x2b52dc39 /* x^108511 mod G(x) */, 0x7e774cf6 /* x^54239 mod G(x) */, },
	/* chunk_len=6912 */
	{ 0x4ca19a29 /* x^165855 mod G(x) */, 0x5b0c98b9 /* x^110559 mod G(x) */, 0xc5ed75e1 /* x^55263 mod G(x) */, },
	/* chunk_len=7040 */
	{ 0xdc0fc3fc /* x^168927 mod G(x) */, 0xb939fcdf /* x^112607 mod G(x) */, 0x3678fed2 /* x^56287 mod G(x) */, },
	/* chunk_len=7168 */
	{ 0x63c3d167 /* x^171999 mod G(x) */, 0x70f9947d /* x^114655 mod G(x) */, 0x97fbdb14 /* x^57311 mod G(x) */, },
	/* chunk_len=7296 */
	{ 0x5851d254 /* x^175071 mod G(x) */, 0x54afca53 /* x^116703 mod G(x) */, 0xca4fba3f /* x^58335 mod G(x) */, },
	/* chunk_len=7424 */
	{ 0xfeacf2a1 /* x^178143 mod G(x) */, 0x7a3c0a6a /* x^118751 mod G(x) */, 0x1b37c832 /* x^59359 mod G(x) */, },
	/* chunk_len=7552 */
	{ 0x93b7edc8 /* x^181215 mod G(x) */, 0x1fea4d2a /* x^120799 mod G(x) */, 0x58fa96ee /* x^60383 mod G(x) */, },
	/* chunk_len=7680 */
	{ 0x5539e44a /* x^184287 mod G(x) */, 0xbd2655a8 /* x^122847 mod G(x) */, 0xcf5bcdc4 /* x^61407 mod G(x) */, },
	/* chunk_len=7808 */
	{ 0xde32a3d2 /* x^187359 mod G(x) */, 0x4ff61aa1 /* x^124895 mod G(x) */, 0x6a6a3694 /* x^62431 mod G(x) */, },
	/* chunk_len=7936 */
	{ 0xf0baeeb6 /* x^190431 mod G(x) */, 0x7ae2f6f4 /* x^126943 mod G(x) */, 0xb03c8112 /* x^63455 mod G(x) */, },
	/* chunk_len=8064 */
	{ 0xbe15887f /* x^193503 mod G(x) */, 0x2d546c53 /* x^128991 mod G(x) */, 0xf36b9d16 /* x^64479 mod G(x) */, },
	/* chunk_len=8192 */
	{ 0x64f34a05 /* x^196575 mod G(x) */, 0xe0ee5efe /* x^131039 mod G(x) */, 0x2339d155 /* x^65503 mod G(x) */, },
	/* chunk_len=8320 */
	{ 0x1b6d1aea /* x^199647 mod G(x) */, 0xfeafb67c /* x^133087 mod G(x) */, 0x4fb001a8 /* x^66527 mod G(x) */, },
	/* chunk_len=8448 */
	{ 0x82adb0b8 /* x^202719 mod G(x) */, 0x67a93f75 /* x^135135 mod G(x) */, 0xf76fd988 /* x^67551 mod G(x) */, },
	/* chunk_len=8576 */
	{ 0x694587c7 /* x^205791 mod G(x) */, 0x3b34408b /* x^137183 mod G(x) */, 0xeccb2978 /* x^68575 mod G(x) */, },
	/* chunk_len=8704 */
	{ 0xd2fc57c3 /* x^208863 mod G(x) */, 0x07fcf8c6 /* x^139231 mod G(x) */, 0x416f9449 /* x^69599 mod G(x) */, },
	/* chunk_len=8832 */
	{ 0x9dd6837c /* x^211935 mod G(x) */, 0xb0b6fc3e /* x^141279 mod G(x) */, 0x6c45d92e /* x^70623 mod G(x) */, },
	/* chunk_len=8960 */
	{ 0x3a9d1f97 /* x^215007 mod G(x) */, 0xefd033b2 /* x^143327 mod G(x) */, 0x4b809189 /* x^71647 mod G(x) */, },
	/* chunk_len=9088 */
	{ 0x1eee1d2a /* x^218079 mod G(x) */, 0xf2a6e46e /* x^145375 mod G(x) */, 0x55b4c814 /* x^72671 mod G(x) */, },
	/* chunk_len=9216 */
	{ 0xb57c7728 /* x^221151 mod G(x) */, 0xd7017a0c /* x^147423 mod G(x) */, 0x6116b82b /* x^73695 mod G(x) */, },
	/* chunk_len=9344 */
	{ 0xf2fc5d61 /* x^224223 mod G(x) */, 0x242aac86 /* x^149471 mod G(x) */, 0x05245cf0 /* x^74719 mod G(x) */, },
	/* chunk_len=9472 */
	{ 0x26387824 /* x^227295 mod G(x) */, 0xc15c4ca5 /* x^151519 mod G(x) */, 0x4c5a315a /* x^75743 mod G(x) */, },
	/* chunk_len=9600 */
	{ 0x8c151e77 /* x^230367 mod G(x) */, 0x8282fddc /* x^153567 mod G(x) */, 0x4d9899bb /* x^76767 mod G(x) */, },
	/* chunk_len=9728 */
	{ 0x8ea1f680 /* x^233439 mod G(x) */, 0xf5ff6cdd /* x^155615 mod G(x) */, 0xbccfa2c1 /* x^77791 mod G(x) */, },
	/* chunk_len=9856 */
	{ 0xe8cf3d2a /* x^236511 mod G(x) */, 0x338b1fb1 /* x^157663 mod G(x) */, 0xeda61f70 /* x^78815 mod G(x) */, },
	/* chunk_len=9984 */
	{ 0x21f15b59 /* x^239583 mod G(x) */, 0xb9077a01 /* x^159711 mod G(x) */, 0x3e7c93b9 /* x^79839 mod G(x) */, },
	/* chunk_len=10112 */
	{ 0x6f68d64a /* x^242655 mod G(x) */, 0x901b0161 /* x^161759 mod G(x) */, 0xb9fd3537 /* x^80863 mod G(x) */, },
	/* chunk_len=10240 */
	{ 0x71b74d95 /* x^245727 mod G(x) */, 0xf5ddd5ad /* x^163807 mod G(x) */, 0x3e116c9d /* x^81887 mod G(x) */, },
	/* chunk_len=10368 */
	{ 0x4c2e7261 /* x^248799 mod G(x) */, 0x4ca19a29 /* x^165855 mod G(x) */, 0x388b20ac /* x^82911 mod G(x) */, },
	/* chunk_len=10496 */
	{ 0x8a2d38e8 /* x^251871 mod G(x) */, 0xd27ee0a1 /* x^167903 mod G(x) */, 0x408e57f2 /* x^83935 mod G(x) */, },
	/* chunk_len=10624 */
	{ 0x7e58ca17 /* x^254943 mod G(x) */, 0x69dfedd2 /* x^169951 mod G(x) */, 0x3a76805e /* x^84959 mod G(x) */, },
	/* chunk_len=10752 */
	{ 0xf997967f /* x^258015 mod G(x) */, 0x63c3d167 /* x^171999 mod G(x) */, 0x0956d953 /* x^85983 mod G(x) */, },
	/* chunk_len=10880 */
	{ 0x48215963 /* x^261087 mod G(x) */, 0x71e1dfe0 /* x^174047 mod G(x) */, 0x42a6d410 /* x^87007 mod G(x) */, },
	/* chunk_len=11008 */
	{ 0xa704b94c /* x^264159 mod G(x) */, 0x679f198a /* x^176095 mod G(x) */, 0x42ebf0ad /* x^88031 mod G(x) */, },
	/* chunk_len=11136 */
	{ 0x1d699056 /* x^267231 mod G(x) */, 0xfeacf2a1 /* x^178143 mod G(x) */, 0x55cb4dfe /* x^89055 mod G(x) */, },
	/* chunk_len=11264 */
	{ 0x6800bcc5 /* x^270303 mod G(x) */, 0x16024f15 /* x^180191 mod G(x) */, 0xcf3233e4 /* x^90079 mod G(x) */, },
	/* chunk_len=11392 */
	{ 0x2d48e4ca /* x^273375 mod G(x) */, 0xbe61582f /* x^182239 mod G(x) */, 0x46026283 /* x^91103 mod G(x) */, },
	/* chunk_len=11520 */
	{ 0x4c4c2b55 /* x^276447 mod G(x) */, 0x5539e44a /* x^184287 mod G(x) */, 0x52222fea /* x^92127 mod G(x) */, },
	/* chunk_len=11648 */
	{ 0xd8ce94cb /* x^279519 mod G(x) */, 0xbc613c26 /* x^186335 mod G(x) */, 0x33776b4b /* x^93151 mod G(x) */, },
	/* chunk_len=11776 */
	{ 0xd0b5a02b /* x^282591 mod G(x) */, 0x490d3cc6 /* x^188383 mod G(x) */, 0x2fde73f8 /* x^94175 mod G(x) */, },
	/* chunk_len=11904 */
	{ 0xa223f7ec /* x^285663 mod G(x) */, 0xf0baeeb6 /* x^190431 mod G(x) */, 0x0603989b /* x^95199 mod G(x) */, },
	/* chunk_len=12032 */
	{ 0x58de337a /* x^288735 mod G(x) */, 0x3bf3d597 /* x^192479 mod G(x) */, 0xced90d99 /* x^96223 mod G(x) */, },
	/* chunk_len=12160 */
	{ 0x37f5d8f4 /* x^291807 mod G(x) */, 0x4d5b699b /* x^194527 mod G(x) */, 0xd7262e5f /* x^97247 mod G(x) */, },
	/* chunk_len=12288 */
	{ 0xfa8a435d /* x^294879 mod G(x) */, 0x64f34a05 /* x^196575 mod G(x) */, 0x4470c029 /* x^98271 mod G(x) */, },
	/* chunk_len=12416 */
	{ 0x238709fe /* x^297951 mod G(x) */, 0x52e7458f /* x^198623 mod G(x) */, 0x9a174cd3 /* x^99295 mod G(x) */, },
	/* chunk_len=12544 */
	{ 0x9e1ba6f5 /* x^301023 mod G(x) */, 0xef0272f7 /* x^200671 mod G(x) */, 0x84f40beb /* x^100319 mod G(x) */, },
	/* chunk_len=12672 */
	{ 0xcd8b57fa /* x^304095 mod G(x) */, 0x82adb0b8 /* x^202719 mod G(x) */, 0xb6f35093 /* x^101343 mod G(x) */, },
	/* chunk_len=12800 */
	{ 0x0aed142f /* x^307167 mod G(x) */, 0xb1650290 /* x^204767 mod G(x) */, 0xec855937 /* x^102367 mod G(x) */, },
	/* chunk_len=12928 */
	{ 0xd1f064db /* x^310239 mod G(x) */, 0x6e7340d3 /* x^206815 mod G(x) */, 0x5c28cb52 /* x^103391 mod G(x) */, },
	/* chunk_len=13056 */
	{ 0x464ac895 /* x^313311 mod G(x) */, 0xd2fc57c3 /* x^208863 mod G(x) */, 0xc46805ba /* x^104415 mod G(x) */, },
	/* chunk_len=13184 */
	{ 0xa0e6beea /* x^316383 mod G(x) */, 0xcfeec3d0 /* x^210911 mod G(x) */, 0x0225d214 /* x^105439 mod G(x) */, },
	/* chunk_len=13312 */
	{ 0x78703ce0 /* x^319455 mod G(x) */, 0xc60f6075 /* x^212959 mod G(x) */, 0xdf7a24ac /* x^106463 mod G(x) */, },
	/* chunk_len=13440 */
	{ 0xfea48165 /* x^322527 mod G(x) */, 0x3a9d1f97 /* x^215007 mod G(x) */, 0xc3876592 /* x^107487 mod G(x) */, },
	/* chunk_len=13568 */
	{ 0xdb89b8db /* x^325599 mod G(x) */, 0xa6172211 /* x^217055 mod G(x) */, 0x2b52dc39 /* x^108511 mod G(x) */, },
	/* chunk_len=13696 */
	{ 0x7ca03731 /* x^328671 mod G(x) */, 0x1db42849 /* x^219103 mod G(x) */, 0xc5df246e /* x^109535 mod G(x) */, },
	/* chunk_len=13824 */
	{ 0x8801d0aa /* x^331743 mod G(x) */, 0xb57c7728 /* x^221151 mod G(x) */, 0x5b0c98b9 /* x^110559 mod G(x) */, },
	/* chunk_len=13952 */
	{ 0xf89cd7f0 /* x^334815 mod G(x) */, 0xcc396a0b /* x^223199 mod G(x) */, 0xdb799c51 /* x^111583 mod G(x) */, },
	/* chunk_len=14080 */
	{ 0x1611a808 /* x^337887 mod G(x) */, 0xaeae6105 /* x^225247 mod G(x) */, 0xb939fcdf /* x^112607 mod G(x) */, },
	/* chunk_len=14208 */
	{ 0xe3cdb888 /* x^340959 mod G(x) */, 0x26387824 /* x^227295 mod G(x) */, 0x30d13e5f /* x^113631 mod G(x) */, },
	/* chunk_len=14336 */
	{ 0x552a4cf6 /* x^344031 mod G(x) */, 0xee2d04bb /* x^229343 mod G(x) */, 0x70f9947d /* x^114655 mod G(x) */, },
	/* chunk_len=14464 */
	{ 0x85e248e9 /* x^347103 mod G(x) */, 0x0a79663f /* x^231391 mod G(x) */, 0x53339cf7 /* x^115679 mod G(x) */, },
	/* chunk_len=14592 */
	{ 0x1c61c3e9 /* x^350175 mod G(x) */, 0x8ea1f680 /* x^233439 mod G(x) */, 0x54afca53 /* x^116703 mod G(x) */, },
	/* chunk_len=14720 */
	{ 0xb14cfc2b /* x^353247 mod G(x) */, 0x2e073302 /* x^235487 mod G(x) */, 0x10897992 /* x^117727 mod G(x) */, },
	/* chunk_len=14848 */
	{ 0x6ec444cc /* x^356319 mod G(x) */, 0x9e819f13 /* x^237535 mod G(x) */, 0x7a3c0a6a /* x^118751 mod G(x) */, },
	/* chunk_len=14976 */
	{ 0xe2fa5f80 /* x^359391 mod G(x) */, 0x21f15b59 /* x^239583 mod G(x) */, 0x93102436 /* x^119775 mod G(x) */, },
	/* chunk_len=15104 */
	{ 0x6d33f4c6 /* x^362463 mod G(x) */, 0x31a27455 /* x^241631 mod G(x) */, 0x1fea4d2a /* x^120799 mod G(x) */, },
	/* chunk_len=15232 */
	{ 0xb6dec609 /* x^365535 mod G(x) */, 0x4d437056 /* x^243679 mod G(x) */, 0x42eb1e2a /* x^121823 mod G(x) */, },
	/* chunk_len=15360 */
	{ 0x1846c518 /* x^368607 mod G(x) */, 0x71b74d95 /* x^245727 mod G(x) */, 0xbd2655a8 /* x^122847 mod G(x) */, },
	/* chunk_len=15488 */
	{ 0x9f947f8a /* x^371679 mod G(x) */, 0x2b501619 /* x^247775 mod G(x) */, 0xa4924b0e /* x^123871 mod G(x) */, },
	/* chunk_len=15616 */
	{ 0xb7442f4d /* x^374751 mod G(x) */, 0xba30a5d8 /* x^249823 mod G(x) */, 0x4ff61aa1 /* x^124895 mod G(x) */, },
	/* chunk_len=15744 */
	{ 0xe2c93242 /* x^377823 mod G(x) */, 0x8a2d38e8 /* x^251871 mod G(x) */, 0x70cd7f26 /* x^125919 mod G(x) */, },
	/* chunk_len=15872 */
	{ 0xcd6863df /* x^380895 mod G(x) */, 0x78fd88dc /* x^253919 mod G(x) */, 0x7ae2f6f4 /* x^126943 mod G(x) */, },
	/* chunk_len=16000 */
	{ 0xd512001d /* x^383967 mod G(x) */, 0xe6612dff /* x^255967 mod G(x) */, 0x5c4d0ca9 /* x^127967 mod G(x) */, },
	/* chunk_len=16128 */
	{ 0x4e8d6b6c /* x^387039 mod G(x) */, 0xf997967f /* x^258015 mod G(x) */, 0x2d546c53 /* x^128991 mod G(x) */, },
	/* chunk_len=16256 */
	{ 0xfa653ba1 /* x^390111 mod G(x) */, 0xc99014d4 /* x^260063 mod G(x) */, 0xa0c9fd27 /* x^130015 mod G(x) */, },
};

/* Multipliers for implementations that use a large fixed chunk length */
#define CRC32_FIXED_CHUNK_LEN 32768UL
#define CRC32_FIXED_CHUNK_MULT_1 0x29c2448b /* x^262111 mod G(x) */
#define CRC32_FIXED_CHUNK_MULT_2 0x4b912f53 /* x^524255 mod G(x) */
#define CRC32_FIXED_CHUNK_MULT_3 0x454c93be /* x^786399 mod G(x) */