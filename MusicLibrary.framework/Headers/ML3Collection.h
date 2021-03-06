/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Entity.h>


@interface ML3Collection : ML3Entity {
}
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x2e661
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x2e2dd
+ (id)artworkCacheIDProperty;	// 0x2e2d9
+ (id)trackForeignPersistentID;	// 0x2e2d5
+ (id)propertiesForGroupingKey;	// 0x2e0e5
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0xb72d
+ (void)initialize;	// 0xb089
- (void)updateCloudStatus;	// 0x2e335
- (void)updateTrackValues:(id)values;	// 0x2e2d1
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x2e121
@end
