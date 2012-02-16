/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaItemCellGlobalContext.h>

@class NSMutableSet;

@interface IUSongCellGlobalContext : IUMediaItemCellGlobalContext {
	NSMutableSet *_displayedStringProperties;	// 4 = 0x4
	BOOL _hasIndexBar;	// 8 = 0x8
	unsigned _showAlbum : 1;	// 9 = 0x9
	unsigned _showAlbumSubtitle : 1;	// 9 = 0x9
	unsigned _showArtistSubtitle : 1;	// 9 = 0x9
	BOOL _showDuration;	// 10 = 0xa
	int _interfaceOrientation;	// 12 = 0xc
	id _aggregateProperties;	// 16 = 0x10
}
@property(assign, nonatomic) int interfaceOrientation;	// G=0x2b469; S=0x2b479; @synthesize=_interfaceOrientation
@property(retain, nonatomic) id aggregateProperties;	// G=0x2b415; S=0x2b425; @synthesize=_aggregateProperties
@property(assign, nonatomic) BOOL showDuration;	// G=0x2b3e9; S=0x2b3f9; @synthesize=_showDuration
@property(assign, nonatomic) BOOL showAlbum;	// G=0x2b3b1; S=0x2b3c5; 
@property(assign, nonatomic) BOOL showArtistSubtitle;	// G=0x2b35d; S=0x2b389; 
@property(assign, nonatomic) BOOL showAlbumSubtitle;	// G=0x2b309; S=0x2b335; 
@property(assign, nonatomic) BOOL hasIndexBar;	// G=0x2b449; S=0x2b459; @synthesize=_hasIndexBar
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x2b479
// declared property getter: - (int)interfaceOrientation;	// 0x2b469
// declared property setter: - (void)setHasIndexBar:(BOOL)bar;	// 0x2b459
// declared property getter: - (BOOL)hasIndexBar;	// 0x2b449
// declared property setter: - (void)setAggregateProperties:(id)properties;	// 0x2b425
// declared property getter: - (id)aggregateProperties;	// 0x2b415
// declared property setter: - (void)setShowDuration:(BOOL)duration;	// 0x2b3f9
// declared property getter: - (BOOL)showDuration;	// 0x2b3e9
// declared property setter: - (void)setShowAlbum:(BOOL)album;	// 0x2b3c5
// declared property getter: - (BOOL)showAlbum;	// 0x2b3b1
// declared property setter: - (void)setShowArtistSubtitle:(BOOL)subtitle;	// 0x2b389
// declared property getter: - (BOOL)showArtistSubtitle;	// 0x2b35d
// declared property setter: - (void)setShowAlbumSubtitle:(BOOL)subtitle;	// 0x2b335
// declared property getter: - (BOOL)showAlbumSubtitle;	// 0x2b309
- (BOOL)showsValueForProperty:(id)property;	// 0x2b275
- (void)setShowsValue:(BOOL)value forProperty:(id)property;	// 0x2b1ed
- (void)dealloc;	// 0x2b175
- (id)initWithPropertiesFromDataSource:(id)dataSource cellConfigurationClass:(Class)aClass;	// 0x2add9
- (id)init;	// 0x2ad45
@end