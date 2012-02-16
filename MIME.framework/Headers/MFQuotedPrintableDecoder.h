/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/MFBaseFilterDataConsumer.h>


@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
	unsigned char _lastEncoded;	// 9 = 0x9
	unsigned _required;	// 12 = 0xc
	BOOL _forTextPart;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL forTextPart;	// G=0x27a4d; S=0x27a5d; @synthesize=_forTextPart
- (int)appendData:(id)data;	// 0x281a1
- (void)done;	// 0x280d9
// declared property getter: - (BOOL)forTextPart;	// 0x27a4d
// declared property setter: - (void)setForTextPart:(BOOL)textPart;	// 0x27a5d
@end