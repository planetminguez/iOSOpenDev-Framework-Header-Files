/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class NSString;

@interface CalDAVCompItem : XXUnknownSuperclass {
	NSString *_nameAttribute;	// 24 = 0x18
}
@property(retain) NSString *nameAttribute;	// G=0x2b89; S=0x2b65; @synthesize=_nameAttribute
- (id)init;	// 0x2add
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x2b19
- (void)dealloc;	// 0x2d39
- (void)parserFoundAttributes:(id)attributes;	// 0x2c51
- (void)write:(id)write;	// 0x2ba1
// declared property getter: - (id)nameAttribute;	// 0x2b89
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x2b65
@end
