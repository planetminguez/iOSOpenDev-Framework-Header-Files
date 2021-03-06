/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <SportsVoices/GrammarPart.h>

@class NSArray, NSDictionary;

@interface Directory : GrammarPart {
	NSDictionary *_subparts;	// 16 = 0x10
	NSArray *_orderedSubparts;	// 20 = 0x14
}
@property(readonly, assign) NSArray *orderedSubparts;	// G=0x3709; @synthesize=_orderedSubparts
+ (id)instanceFromPlist:(id)plist;	// 0x341d
// declared property getter: - (id)orderedSubparts;	// 0x3709
- (id)appliedTo:(id)to;	// 0x35bd
- (id)description;	// 0x34c5
- (void)dealloc;	// 0x3465
- (id)initFromPlist:(id)plist;	// 0x2fb1
@end
