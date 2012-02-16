/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaListDataSource.h>

@class NSArray, MPMediaQuery, MPMediaItem;

@interface IUBackOfAlbumDataSource : IUMediaListDataSource {
	NSArray *_chapters;	// 56 = 0x38
	unsigned _currentIndex;	// 60 = 0x3c
	MPMediaQuery *_query;	// 64 = 0x40
	MPMediaItem *_representativeItem;	// 68 = 0x44
	BOOL _shouldStripCommonPrefixes;	// 72 = 0x48
	BOOL _queryWasGroupedByGenre;	// 73 = 0x49
	int _style;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x3bbb5; @synthesize=_representativeItem
@property(readonly, assign, nonatomic) unsigned currentIndex;	// G=0x3bb95; @synthesize=_currentIndex
@property(assign, nonatomic) int style;	// G=0x3bbc5; S=0x3bbd5; @synthesize=_style
@property(retain, nonatomic) MPMediaQuery *query;	// G=0x3bba5; S=0x3b7ad; @synthesize=_query
@property(retain, nonatomic) id chapters;	// G=0x3bb85; S=0x3b755; @synthesize=_chapters
// declared property setter: - (void)setStyle:(int)style;	// 0x3bbd5
// declared property getter: - (int)style;	// 0x3bbc5
// declared property getter: - (id)representativeItem;	// 0x3bbb5
// declared property getter: - (id)query;	// 0x3bba5
// declared property getter: - (unsigned)currentIndex;	// 0x3bb95
// declared property getter: - (id)chapters;	// 0x3bb85
- (BOOL)_shouldReloadQueryForChangeToItem:(id)item;	// 0x3ba65
- (unsigned)_indexOfItem:(id)item;	// 0x3ba29
- (double)_durationInSecondsForIndex:(unsigned)index;	// 0x3b971
- (unsigned)_currentChapterIndex;	// 0x3b895
- (void)_crossedTimeMarkerNotification:(id)notification;	// 0x3b845
// declared property setter: - (void)setQuery:(id)query;	// 0x3b7ad
// declared property setter: - (void)setChapters:(id)chapters;	// 0x3b755
- (BOOL)shouldShowGlobalSectionHeader;	// 0x3b751
- (float)rowHeight;	// 0x3b731
- (BOOL)indexIsActionRow:(unsigned)row;	// 0x3b6fd
- (void)createGlobalContexts;	// 0x3b5a9
- (unsigned)count;	// 0x3b541
- (id)cellConfigurationForIndex:(unsigned)index artworkLoadingCompletionHandler:(id)handler;	// 0x3b2f5
- (unsigned)localEntityIndex:(unsigned)index;	// 0x3b2c9
- (id)entityAtIndex:(unsigned)index;	// 0x3b275
- (BOOL)reloadFromItem:(id)item query:(id)query;	// 0x3b01d
- (void)dealloc;	// 0x3af49
- (id)init;	// 0x3ae85
@end