/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/Symbolication-Structs.h>

#import <Symbolication/VMUMemoryView.h>


@interface VMUMemoryView_Native : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(assign) unsigned long long cursor;	// G=0xe098; S=0x10480; converted property
@property(readonly, assign) VMURange addressRange;	// G=0xe074; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0xe0c8
// converted property getter: - (VMURange)addressRange;	// 0xe074
// converted property getter: - (unsigned long long)cursor;	// 0xe098
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x10480
- (void)advanceCursor:(unsigned long long)cursor;	// 0x10378
- (void)rewindCursor:(unsigned long long)cursor;	// 0x10274
- (BOOL)isCursorPointerAligned;	// 0x10228
- (void)pointerAlignCursor;	// 0x101dc
- (BOOL)int8;	// 0x1009c
- (short)int16;	// 0xff5c
- (int)int32;	// 0xfe20
- (long long)int64;	// 0xfce0
- (unsigned char)uint8;	// 0xfba4
- (unsigned short)uint16;	// 0xfa64
- (unsigned)uint32;	// 0xf928
- (unsigned long long)uint64;	// 0xf7e8
- (id)readBytes:(unsigned long)bytes;	// 0xf70c
- (id)arrayOfInt8:(unsigned long)int8;	// 0xf610
- (id)arrayOfInt16:(unsigned long)int16;	// 0xf50c
- (id)arrayOfInt32:(unsigned long)int32;	// 0xf408
- (id)arrayOfInt64:(unsigned long)int64;	// 0xf304
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0xf208
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0xf104
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0xf000
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0xeefc
- (unsigned long long)ULEB128;	// 0xed84
- (long long)LEB128;	// 0xecf0
- (nlist_64)nlist;	// 0xeb88
- (nlist_64)nlist_64;	// 0xea3c
- (dyld_image_info_64)dyldImageInfo;	// 0xe8c8
- (dyld_image_info_64)dyldImageInfo64;	// 0xe750
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0xe64c
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0xe62c
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0xe3fc
- (id)stringWithEncoding:(unsigned)encoding;	// 0xe22c
- (id)description;	// 0xe178
@end