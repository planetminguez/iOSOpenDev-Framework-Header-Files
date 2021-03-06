/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawableProperties.h>
#import <OfficeImport/OADEffectsParent.h>

@class OADTableStyle, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
@private
	NSString *mStyleId;	// 28 = 0x1c
	OADTableStyle *mStyle;	// 32 = 0x20
	BOOL mRightToLeft;	// 36 = 0x24
	BOOL mFirstRow;	// 37 = 0x25
	BOOL mFirstColumn;	// 38 = 0x26
	BOOL mLastRow;	// 39 = 0x27
	BOOL mLastColumn;	// 40 = 0x28
	BOOL mBandRow;	// 41 = 0x29
	BOOL mBandColumn;	// 42 = 0x2a
	NSArray *mEffects;	// 44 = 0x2c
}
@property(retain) id styleId;	// G=0x2a7305; S=0x1c3645; converted property
@property(retain) id style;	// G=0x1dabad; S=0x1d9a89; converted property
@property(assign) BOOL rightToLeft;	// G=0x2a7315; S=0x1d9a39; converted property
@property(assign) BOOL firstRow;	// G=0x1db07d; S=0x1d99e9; converted property
@property(assign) BOOL firstColumn;	// G=0x2a7325; S=0x1d99d9; converted property
@property(assign) BOOL lastRow;	// G=0x2a7335; S=0x1d9a09; converted property
@property(assign) BOOL lastColumn;	// G=0x2a7345; S=0x1d99f9; converted property
@property(assign) BOOL bandRow;	// G=0x1dc299; S=0x1d9a29; converted property
@property(assign) BOOL bandColumn;	// G=0x2a7355; S=0x1d9a19; converted property
@property(retain) id effects;	// G=0x2a7781; S=0x1d9a49; converted property
+ (id)defaultProperties;	// 0x1c3419
- (id)initWithDefaults;	// 0x1c3461
- (void)dealloc;	// 0x1c45dd
// converted property getter: - (id)styleId;	// 0x2a7305
// converted property setter: - (void)setStyleId:(id)anId;	// 0x1c3645
// converted property getter: - (id)style;	// 0x1dabad
// converted property setter: - (void)setStyle:(id)style;	// 0x1d9a89
// converted property getter: - (BOOL)rightToLeft;	// 0x2a7315
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x1d9a39
// converted property getter: - (BOOL)firstRow;	// 0x1db07d
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x1d99e9
// converted property getter: - (BOOL)firstColumn;	// 0x2a7325
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x1d99d9
// converted property getter: - (BOOL)lastRow;	// 0x2a7335
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x1d9a09
// converted property getter: - (BOOL)lastColumn;	// 0x2a7345
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x1d99f9
// converted property getter: - (BOOL)bandRow;	// 0x1dc299
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x1d9a29
// converted property getter: - (BOOL)bandColumn;	// 0x2a7355
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x1d9a19
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x2a77f1
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x2a77b1
// converted property getter: - (id)effects;	// 0x2a7781
// converted property setter: - (void)setEffects:(id)effects;	// 0x1d9a49
- (BOOL)hasEffects;	// 0x2a7749
@end
