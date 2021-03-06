/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction {
	int _absoluteOrder;	// 12 = 0xc
	NSURL *_priorURL;	// 16 = 0x10
}
@property(retain) NSURL *priorURL;	// G=0x1835; S=0x1849; @synthesize=_priorURL
@property(readonly, assign) int absoluteOrder;	// G=0x1825; @synthesize=_absoluteOrder
// declared property setter: - (void)setPriorURL:(id)url;	// 0x1849
// declared property getter: - (id)priorURL;	// 0x1835
// declared property getter: - (int)absoluteOrder;	// 0x1825
- (id)description;	// 0x178d
- (void)dealloc;	// 0x1741
- (id)initWithAction:(int)action context:(id)context absoluteOrder:(int)order;	// 0x1701
@end
