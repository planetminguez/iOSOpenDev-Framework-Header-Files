/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/NSURLConnectionDelegate.h>
#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/XXUnknownSuperclass.h>

@class NSURL, NSURLConnection, GEOTileKeyList, NSString, GEONetworkDataReader;
@protocol GEOVoltaireTileDownloaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOVoltaireTileDownloader : XXUnknownSuperclass <NSURLConnectionDelegate> {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	NSURL *_requestURL;	// 8 = 0x8
	int _zAdjust;	// 12 = 0xc
	NSURLConnection *_connection;	// 16 = 0x10
	GEONetworkDataReader *_reader;	// 20 = 0x14
	int _numTilesLoaded;	// 24 = 0x18
	NSString *_sharedPrefix;	// 28 = 0x1c
	NSString *_userAgent;	// 32 = 0x20
	id<GEOVoltaireTileDownloaderDelegate> _delegate;	// 36 = 0x24
	unsigned short _providerID;	// 40 = 0x28
}
@property(assign, nonatomic) id<GEOVoltaireTileDownloaderDelegate> delegate;	// G=0x2731d; S=0x2732d; @synthesize=_delegate
@property(retain, nonatomic) NSString *userAgent;	// G=0x2733d; S=0x2734d; @synthesize=_userAgent
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x2734d
// declared property getter: - (id)userAgent;	// 0x2733d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2732d
// declared property getter: - (id)delegate;	// 0x2731d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x272c5
- (void)connectionDidFinishLoading:(id)connection;	// 0x2721d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x271a9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x270d5
- (void)_tryParseTiles;	// 0x26f29
- (GEOTileKey)_tileKeyForURL:(id)url edition:(unsigned *)edition;	// 0x26be9
- (id)_urlForTileKey:(GEOTileKey *)tileKey;	// 0x269dd
- (void)_cancelWithErrorCode:(int)errorCode;	// 0x26985
- (void)_failWithErrorCode:(int)errorCode;	// 0x26911
- (void)_failWithError:(id)error;	// 0x268dd
- (void)_cleanupConnection;	// 0x26865
- (void)cancel;	// 0x26829
- (void)start;	// 0x26425
- (void)addTileKey:(GEOTileKey *)key;	// 0x263d1
- (void)dealloc;	// 0x26349
- (id)initWithURL:(id)url;	// 0x262c1
@end
