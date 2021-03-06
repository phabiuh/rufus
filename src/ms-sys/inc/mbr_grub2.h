/*
 * First 432 bytes of MBR from Grub2 (boot.img), with 2 bytes NOPed @0x66
 * as per grub2's setup.c comments:
 *   If DEST_DRIVE is a hard disk, enable the workaround, which is
 *   for buggy BIOSes which don't pass boot drive correctly. Instead,
 *   they pass 0x00 or 0x01 even when booted from 0x80.
 */

unsigned char mbr_grub2_0x0[] = {
	0xEB, 0x63, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFA, 0x90, 0x90, 0xF6, 0xC2, 0x80, 0x74,
	0x05, 0xF6, 0xC2, 0x70, 0x74, 0x02, 0xB2, 0x80, 0xEA, 0x79, 0x7C, 0x00,
	0x00, 0x31, 0xC0, 0x8E, 0xD8, 0x8E, 0xD0, 0xBC, 0x00, 0x20, 0xFB, 0xA0,
	0x64, 0x7C, 0x3C, 0xFF, 0x74, 0x02, 0x88, 0xC2, 0x52, 0xBE, 0x80, 0x7D,
	0xE8, 0x17, 0x01, 0xBE, 0x05, 0x7C, 0xB4, 0x41, 0xBB, 0xAA, 0x55, 0xCD,
	0x13, 0x5A, 0x52, 0x72, 0x3D, 0x81, 0xFB, 0x55, 0xAA, 0x75, 0x37, 0x83,
	0xE1, 0x01, 0x74, 0x32, 0x31, 0xC0, 0x89, 0x44, 0x04, 0x40, 0x88, 0x44,
	0xFF, 0x89, 0x44, 0x02, 0xC7, 0x04, 0x10, 0x00, 0x66, 0x8B, 0x1E, 0x5C,
	0x7C, 0x66, 0x89, 0x5C, 0x08, 0x66, 0x8B, 0x1E, 0x60, 0x7C, 0x66, 0x89,
	0x5C, 0x0C, 0xC7, 0x44, 0x06, 0x00, 0x70, 0xB4, 0x42, 0xCD, 0x13, 0x72,
	0x05, 0xBB, 0x00, 0x70, 0xEB, 0x76, 0xB4, 0x08, 0xCD, 0x13, 0x73, 0x0D,
	0x5A, 0x84, 0xD2, 0x0F, 0x83, 0xD8, 0x00, 0xBE, 0x8B, 0x7D, 0xE9, 0x82,
	0x00, 0x66, 0x0F, 0xB6, 0xC6, 0x88, 0x64, 0xFF, 0x40, 0x66, 0x89, 0x44,
	0x04, 0x0F, 0xB6, 0xD1, 0xC1, 0xE2, 0x02, 0x88, 0xE8, 0x88, 0xF4, 0x40,
	0x89, 0x44, 0x08, 0x0F, 0xB6, 0xC2, 0xC0, 0xE8, 0x02, 0x66, 0x89, 0x04,
	0x66, 0xA1, 0x60, 0x7C, 0x66, 0x09, 0xC0, 0x75, 0x4E, 0x66, 0xA1, 0x5C,
	0x7C, 0x66, 0x31, 0xD2, 0x66, 0xF7, 0x34, 0x88, 0xD1, 0x31, 0xD2, 0x66,
	0xF7, 0x74, 0x04, 0x3B, 0x44, 0x08, 0x7D, 0x37, 0xFE, 0xC1, 0x88, 0xC5,
	0x30, 0xC0, 0xC1, 0xE8, 0x02, 0x08, 0xC1, 0x88, 0xD0, 0x5A, 0x88, 0xC6,
	0xBB, 0x00, 0x70, 0x8E, 0xC3, 0x31, 0xDB, 0xB8, 0x01, 0x02, 0xCD, 0x13,
	0x72, 0x1E, 0x8C, 0xC3, 0x60, 0x1E, 0xB9, 0x00, 0x01, 0x8E, 0xDB, 0x31,
	0xF6, 0xBF, 0x00, 0x80, 0x8E, 0xC6, 0xFC, 0xF3, 0xA5, 0x1F, 0x61, 0xFF,
	0x26, 0x5A, 0x7C, 0xBE, 0x86, 0x7D, 0xEB, 0x03, 0xBE, 0x95, 0x7D, 0xE8,
	0x34, 0x00, 0xBE, 0x9A, 0x7D, 0xE8, 0x2E, 0x00, 0xCD, 0x18, 0xEB, 0xFE,
	0x47, 0x52, 0x55, 0x42, 0x20, 0x00, 0x47, 0x65, 0x6F, 0x6D, 0x00, 0x48,
	0x61, 0x72, 0x64, 0x20, 0x44, 0x69, 0x73, 0x6B, 0x00, 0x52, 0x65, 0x61,
	0x64, 0x00, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x0D, 0x0A, 0x00, 0xBB,
	0x01, 0x00, 0xB4, 0x0E, 0xCD, 0x10, 0xAC, 0x3C, 0x00, 0x75, 0xF4, 0xC3
};
