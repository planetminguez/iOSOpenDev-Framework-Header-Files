/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellConfiguration.h>


@interface SUMediaItemCellConfiguration : SUItemCellConfiguration {
}
@property(readonly, assign, nonatomic) BOOL showContentRating;	// G=0xaf8e9; 
@property(readonly, assign, nonatomic) int mediaIconType;	// G=0xaf85d; 
@property(readonly, assign, nonatomic) CGSize artworkSize;	// G=0xaf741; 
+ (id)copyDefaultContext;	// 0xaf971
- (UIEdgeInsets)_ratingBorderInsets;	// 0xaffdd
- (void)reloadStrings;	// 0xaff35
- (void)reloadLayoutInformation;	// 0xafe09
- (void)reloadImages;	// 0xafaad
- (id)fontForLabelAtIndex:(unsigned)index;	// 0xafa7d
- (void)drawWithModifiers:(unsigned)modifiers;	// 0xaf9a5
- (float)alphaForImageAtIndex:(unsigned)index fromAlpha:(float *)alpha withModifiers:(unsigned)modifiers;	// 0xaf945
- (float)alphaForLabelAtIndex:(unsigned)index fromAlpha:(float *)alpha withModifiers:(unsigned)modifiers;	// 0xaf919
// declared property getter: - (BOOL)showContentRating;	// 0xaf8e9
// declared property getter: - (int)mediaIconType;	// 0xaf85d
- (id)copyImageDataProvider;	// 0xaf7e9
// declared property getter: - (CGSize)artworkSize;	// 0xaf741
- (id)initWithStringCount:(unsigned)stringCount imageCount:(unsigned)count;	// 0xaf70d
@end