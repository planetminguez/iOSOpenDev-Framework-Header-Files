/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol {
@private
	MSRPCContext _context;	// 24 = 0x18
	NSArray *_assetsInFlight;	// 104 = 0x68
}
@property(assign) id delegate;	// G=0x1f3fd; S=0x1f429; converted property
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x1fb55
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x1f7f9
- (void)abort;	// 0x1f7b9
- (void)requestReauthorizationForAssets:(id)assets;	// 0x1f5c5
- (void)dealloc;	// 0x1f579
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x1f455
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x1f429
// converted property getter: - (id)delegate;	// 0x1f3fd
@end
