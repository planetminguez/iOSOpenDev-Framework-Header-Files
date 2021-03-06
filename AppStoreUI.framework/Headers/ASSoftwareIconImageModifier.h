/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>


@interface ASSoftwareIconImageModifier : XXUnknownSuperclass {
	int _iconOptions;	// 4 = 0x4
	BOOL _isNewsstandIcon;	// 8 = 0x8
}
@property(assign, nonatomic, getter=isNewsstandIcon) BOOL newsstandIcon;	// G=0xa441; S=0xa451; @synthesize=_isNewsstandIcon
@property(assign, nonatomic) int iconOptions;	// G=0xa421; S=0xa431; @synthesize=_iconOptions
// declared property setter: - (void)setNewsstandIcon:(BOOL)icon;	// 0xa451
// declared property getter: - (BOOL)isNewsstandIcon;	// 0xa441
// declared property setter: - (void)setIconOptions:(int)options;	// 0xa431
// declared property getter: - (int)iconOptions;	// 0xa421
- (int)_iconVariantForImage:(id)image;	// 0xa36d
- (id)newImageForImage:(id)image;	// 0xa1e5
- (BOOL)isEqual:(id)equal;	// 0xa17d
@end
