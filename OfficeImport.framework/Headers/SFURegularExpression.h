/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/NSCoding.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFURegularExpression : XXUnknownSuperclass <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x2e22b5; converted property
+ (void)initialize;	// 0x2e2431
+ (id)regularExpressionWithString:(id)string;	// 0x2e23f5
- (void)dealloc;	// 0x2e28ed
- (id)initWithExpressionString:(id)expressionString;	// 0x2e22c5
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x2e2771
- (unsigned)numberOfSubexpressions;	// 0x2e22a1
- (id)init;	// 0x2e22d9
- (id)copyWithZone:(NSZone *)zone;	// 0x2e22f5
- (BOOL)isEqual:(id)equal;	// 0x2e2369
- (unsigned)hash;	// 0x2e2751
// converted property getter: - (id)expressionString;	// 0x2e22b5
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x2e25f9
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x2e2585
- (id)initWithCoder:(id)coder;	// 0x2e24e9
- (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x2e2499
- (void)encodeWithCoder:(id)coder;	// 0x2e2471
@end
