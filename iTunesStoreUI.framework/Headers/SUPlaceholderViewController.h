/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SULoadingView;

@interface SUPlaceholderViewController : SUViewController {
	SUGradient *_backgroundGradient;	// 212 = 0xd4
	SUGradient *_defaultBackgroundGradient;	// 216 = 0xd8
	BOOL _hideLoadingView;	// 220 = 0xdc
	SULoadingView *_loadingView;	// 224 = 0xe0
@private
	BOOL _shouldShowLoadingView;	// 228 = 0xe4
}
@property(assign, nonatomic) BOOL shouldShowLoadingView;	// G=0x342b9; S=0x33e59; @synthesize=_shouldShowLoadingView
@property(readonly, assign, nonatomic) SULoadingView *loadingView;	// G=0x33d21; 
@property(copy, nonatomic) SUGradient *defaultBackgroundGradient;	// G=0x342a9; S=0x33e01; @synthesize=_defaultBackgroundGradient
@property(copy, nonatomic) SUGradient *backgroundGradient;	// G=0x34299; S=0x33da9; @synthesize=_backgroundGradient
// declared property getter: - (BOOL)shouldShowLoadingView;	// 0x342b9
// declared property getter: - (id)defaultBackgroundGradient;	// 0x342a9
// declared property getter: - (id)backgroundGradient;	// 0x34299
- (id)_newURLBagBackgroundGradient;	// 0x3413d
- (void)_reloadBackgroundGradient;	// 0x34095
- (void)_bagDidLoadNotification:(id)_bag;	// 0x34085
- (void)setLoading:(BOOL)loading;	// 0x33fc9
- (void)parentViewControllerHierarchyDidChange;	// 0x33f89
- (void)loadView;	// 0x33eb1
- (id)copyArchivableContext;	// 0x33ead
// declared property setter: - (void)setShouldShowLoadingView:(BOOL)showLoadingView;	// 0x33e59
// declared property setter: - (void)setDefaultBackgroundGradient:(id)gradient;	// 0x33e01
// declared property setter: - (void)setBackgroundGradient:(id)gradient;	// 0x33da9
// declared property getter: - (id)loadingView;	// 0x33d21
- (void)dealloc;	// 0x33c6d
- (id)init;	// 0x33bed
@end