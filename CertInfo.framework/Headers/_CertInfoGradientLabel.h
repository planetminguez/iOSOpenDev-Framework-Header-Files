/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */


#import <CertInfo/CertInfo-Structs.h>

@class UIFont, UIImage, NSString;

@interface _CertInfoGradientLabel : NSObject {
	NSString *_text;	// 48 = 0x30
	UIFont *_font;	// 52 = 0x34
	UIImage *_checkImage;	// 56 = 0x38
	CGColorRef _patternColor;	// 60 = 0x3c
}
- (void)drawRect:(CGRect)rect;	// 0x7445
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x7385
- (void)dealloc;	// 0x72f9
- (id)initWithTrusted:(BOOL)trusted;	// 0x703d
@end
