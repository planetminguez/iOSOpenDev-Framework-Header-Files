/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/XXUnknownSuperclass.h>

@protocol IMDaemonMIGInterfaceDelegate;

@interface IMDaemonMIGInterface : XXUnknownSuperclass {
	unsigned _port;	// 4 = 0x4
	dispatch_source_s *_source;	// 8 = 0x8
	unsigned _activePort;	// 12 = 0xc
	dispatch_source_s *_activeSource;	// 16 = 0x10
	id _delegate;	// 20 = 0x14
	BOOL _shuttingDown;	// 24 = 0x18
}
@property(assign) id<IMDaemonMIGInterfaceDelegate> delegate;	// G=0x27d49; S=0x27d59; @synthesize=_delegate
+ (id)sharedInstance;	// 0x27981
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x27d59
// declared property getter: - (id)delegate;	// 0x27d49
- (void)denyIncomingGrantRequests;	// 0x27ce5
- (void)acceptIncomingGrantRequests;	// 0x27c61
- (void)__setupServer;	// 0x27a35
- (BOOL)retainWeakReference;	// 0x27a31
- (BOOL)allowsWeakReference;	// 0x27a2d
@end
