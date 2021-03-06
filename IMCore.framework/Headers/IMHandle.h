/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMHandle.h>
#import <IMCore/NSCoding.h>
#import <IMCore/IMCore-Structs.h>


@class NSDate, NSAttributedString, NSMutableArray, IMPerson, NSSet, IMServiceImpl, IMAccount, NSURL, NSString, NSDictionary, NSData, NSArray;

@interface IMHandle : NSObject <NSCoding> {
	NSString *_guid;	// 4 = 0x4
	IMAccount *_account;	// 8 = 0x8
	NSString *_id;	// 12 = 0xc
	NSDictionary *_otherServiceIDs;	// 16 = 0x10
	NSDate *_idleSince;	// 20 = 0x14
	NSDate *_feedUpdatedDate;	// 24 = 0x18
	NSDictionary *_presenceProps;	// 28 = 0x1c
	NSDictionary *_extraProps;	// 32 = 0x20
	NSDictionary *_certs;	// 36 = 0x24
	NSSet *_groups;	// 40 = 0x28
	IMPerson *_person;	// 44 = 0x2c
	NSString *_abFirstName;	// 48 = 0x30
	NSString *_abLastName;	// 52 = 0x34
	NSString *_abFullName;	// 56 = 0x38
	NSString *_abNickname;	// 60 = 0x3c
	NSArray *_abEmails;	// 64 = 0x40
	NSString *_displayID;	// 68 = 0x44
	NSString *_firstName;	// 72 = 0x48
	NSString *_lastName;	// 76 = 0x4c
	NSString *_fullName;	// 80 = 0x50
	NSString *_nickname;	// 84 = 0x54
	NSArray *_emails;	// 88 = 0x58
	NSString *_normalizedFormOfID;	// 92 = 0x5c
	NSString *_IDWithoutResource;	// 96 = 0x60
	NSString *_IDWithTrimmedServer;	// 100 = 0x64
	NSString *_uniqueName;	// 104 = 0x68
	NSData *_pictureData;	// 108 = 0x6c
	NSString *_statusMsg;	// 112 = 0x70
	NSString *_processedStatusMsg;	// 116 = 0x74
	NSAttributedString *_richStatusMsg;	// 120 = 0x78
	NSDate *_whenWentOffline;	// 124 = 0x7c
	NSDate *_whenStatusChanged;	// 128 = 0x80
	NSString *_prevStatusMsg;	// 132 = 0x84
	NSMutableArray *_notificationNameQueue;	// 136 = 0x88
	NSMutableArray *_notificationQueue;	// 140 = 0x8c
	NSURL *_statusURL;	// 144 = 0x90
	CFPhoneNumberRef _phoneNumberRef;	// 148 = 0x94
	NSString *_formattedNumber;	// 152 = 0x98
	BOOL _hasCheckedPhoneNumber;	// 156 = 0x9c
	unsigned _status;	// 160 = 0xa0
	unsigned _prevStatus;	// 164 = 0xa4
	unsigned long long _capabilities;	// 168 = 0xa8
	unsigned _authRequestStatus;	// 176 = 0xb0
	unsigned _resourceIndex;	// 180 = 0xb4
	int _IDStatus;	// 184 = 0xb8
	BOOL _isRetainingAccount;	// 188 = 0xbc
	BOOL _blockNotifications;	// 189 = 0xbd
	BOOL _hasTemporaryWatch;	// 190 = 0xbe
	BOOL _isMobile;	// 191 = 0xbf
	BOOL _isBot;	// 192 = 0xc0
	BOOL _isAnonymous;	// 193 = 0xc1
	BOOL _beingTornDown;	// 194 = 0xc2
	BOOL _willUpdateIdleTime;	// 195 = 0xc3
	BOOL _hasCheckedCardMap;	// 196 = 0xc4
	int _priority;	// 200 = 0xc8
	int _addressBookIdentifier;	// 204 = 0xcc
	int _notificationQueueCount;	// 208 = 0xd0
	NSURL *_statusMessageURL;	// 212 = 0xd4
}
@property(retain, nonatomic) NSData *customPictureData;	// G=0x31449; S=0x31459; 
@property(readonly, assign, nonatomic) BOOL areABPropertiesRecent;	// G=0xb0f1; 
@property(readonly, assign, nonatomic) NSArray *dependentIMHandles;	// G=0x304a1; 
@property(readonly, assign, nonatomic) IMPerson *_cachedPerson;	// G=0x2f5a5; 
@property(readonly, assign, nonatomic) BOOL hasServer;	// G=0x1647d; 
@property(readonly, assign, nonatomic) id existingIMHandleWithoutResource;	// G=0x30445; 
@property(readonly, assign, nonatomic) id imHandleWithoutResource;	// G=0x303e9; 
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x2fcad; 
@property(readonly, assign, nonatomic) NSString *guid;	// G=0xa1ed; @synthesize=_guid
@property(readonly, assign, nonatomic) NSString *accountTypeName;	// G=0x302f5; 
@property(readonly, assign, nonatomic) NSString *server;	// G=0x2fce1; 
@property(readonly, assign, nonatomic) NSString *IDWithoutResource;	// G=0x3035d; 
@property(readonly, assign, nonatomic) NSString *resource;	// G=0x3031d; 
@property(readonly, assign, nonatomic) BOOL hasResource;	// G=0x2fcc5; 
@property(readonly, assign, nonatomic) BOOL supportsARDMuxing;	// G=0x30f39; 
@property(readonly, assign, nonatomic) BOOL hasMultiwayAudio;	// G=0x31069; 
@property(readonly, assign, nonatomic) BOOL hasAudio;	// G=0x30ff5; 
@property(readonly, assign, nonatomic) BOOL hasMultiwayVideo;	// G=0x30fb1; 
@property(readonly, assign, nonatomic) BOOL hasVideo;	// G=0x30f95; 
@property(readonly, assign, nonatomic) BOOL hasConferencing;	// G=0x30f55; 
@property(readonly, assign, nonatomic) BOOL isConferenceAvailable;	// G=0x30f79; 
@property(readonly, assign, nonatomic) id bestAccountSibling;	// G=0x13605; 
@property(readonly, assign, nonatomic) id bestSibling;	// G=0x30079; 
@property(readonly, assign, nonatomic) NSArray *existingAccountSiblingsArray;	// G=0x1363d; 
@property(readonly, assign, nonatomic) NSArray *accountSiblingsArray;	// G=0x13599; 
@property(readonly, assign, nonatomic) NSArray *siblingsArray;	// G=0x30c29; 
@property(readonly, assign, nonatomic) NSSet *siblings;	// G=0x12bc5; 
@property(readonly, assign, nonatomic) BOOL hasOtherSiblings;	// G=0x30bf9; 
@property(readonly, assign, nonatomic) NSSet *groups;	// G=0x2f11d; 
@property(readonly, assign, nonatomic) NSArray *groupsArray;	// G=0x111fd; 
@property(readonly, assign, nonatomic) int addressBookIdentifier;	// G=0x31695; @synthesize=_addressBookIdentifier
@property(retain, nonatomic, setter=setIMPerson:) IMPerson *person;	// G=0xd88d; S=0xbafd; @synthesize=_person
@property(readonly, assign, nonatomic) NSArray *emails;	// G=0x18039; 
@property(readonly, assign, nonatomic) NSString *email;	// G=0x17ff1; 
@property(readonly, assign, nonatomic) NSString *nickname;	// G=0x2f689; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x14ee9; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x14fad; 
@property(readonly, assign, nonatomic) NSString *nameAndEmail;	// G=0x2f349; 
@property(readonly, assign, nonatomic) NSString *nameAndID;	// G=0x13b29; 
@property(readonly, assign, nonatomic) NSString *uniqueName;	// G=0x14ed9; @synthesize=_uniqueName
@property(readonly, assign, nonatomic) NSString *fullName;	// G=0x17121; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x11db9; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x13c11; 
@property(readonly, assign, nonatomic) NSString *normalizedID;	// G=0x2f5d9; 
@property(readonly, assign, nonatomic) NSString *displayID;	// G=0x2f5b5; 
@property(readonly, assign, nonatomic) NSDictionary *extraProperties;	// G=0x315d1; @synthesize=_extraProps
@property(readonly, assign, nonatomic) NSDictionary *presenceProperties;	// G=0x315e1; @synthesize=_presenceProps
@property(retain, nonatomic) NSDictionary *otherServiceIDs;	// G=0x17c21; S=0x1042d; @synthesize=_otherServiceIDs
@property(readonly, assign, nonatomic) NSData *pictureData;	// G=0x31631; @synthesize=_pictureData
@property(readonly, assign, nonatomic) BOOL watchingIMHandle;	// G=0x12735; 
@property(readonly, assign, nonatomic) NSString *mobileDeviceName;	// G=0x2fc75; 
@property(readonly, assign, nonatomic) BOOL isLoginIMHandleForAnyAccount;	// G=0x2fdad; 
@property(readonly, assign, nonatomic) BOOL isMobile;	// G=0x12289; @synthesize=_isMobile
@property(readonly, assign, nonatomic) BOOL isSystemUser;	// G=0x13a79; 
@property(readonly, assign, nonatomic) BOOL isAnonymous;	// G=0xd7cd; 
@property(readonly, assign, nonatomic) BOOL isBlocked;	// G=0x122b9; 
@property(readonly, assign, nonatomic) BOOL isVisiblyBlocked;	// G=0x1224d; 
@property(readonly, assign, nonatomic) BOOL isLoginIMHandle;	// G=0xd7dd; 
@property(readonly, assign, nonatomic) BOOL isBuddy;	// G=0x11191; 
@property(readonly, assign, nonatomic) BOOL isBot;	// G=0x12299; @synthesize=_isBot
@property(readonly, assign, nonatomic) unsigned long long capabilities;	// G=0x121e9; 
@property(readonly, assign, nonatomic) BOOL canBeDeleted;	// G=0x2efc9; 
@property(readonly, assign, nonatomic) BOOL canBeAdded;	// G=0x2fb21; 
@property(readonly, assign, nonatomic) double timeSinceStatusChanged;	// G=0x30af5; 
@property(readonly, assign, nonatomic) double timeSinceWentOffline;	// G=0x30abd; 
@property(assign, nonatomic) int priority;	// G=0x31641; S=0x1646d; @synthesize=_priority
@property(readonly, assign, nonatomic) NSDate *feedUpdatedDate;	// G=0x31601; @synthesize=_feedUpdatedDate
@property(readonly, assign, nonatomic) NSString *idleString;	// G=0x171e9; 
@property(readonly, assign, nonatomic) double idleTime;	// G=0x10a99; 
@property(readonly, assign, nonatomic) NSString *previousStatusMessage;	// G=0x31611; @synthesize=_prevStatusMsg
@property(readonly, assign, nonatomic) unsigned previousStatus;	// G=0x10d41; @synthesize=_prevStatus
@property(readonly, assign, nonatomic) NSString *offlineString;	// G=0x17751; 
@property(readonly, assign, nonatomic) NSAttributedString *richStatusMessage;	// G=0x31621; @synthesize=_richStatusMsg
@property(readonly, assign, nonatomic) NSString *nameOfStatus;	// G=0x30895; 
@property(readonly, assign, nonatomic) NSString *statusMessage;	// G=0x11c31; 
@property(readonly, assign, nonatomic) unsigned status;	// G=0x1112d; 
@property(retain, nonatomic) NSURL *statusMessageAsURL;	// G=0x31661; S=0x31671; @synthesize=_statusMessageURL
@property(readonly, assign, nonatomic) NSURL *statusURL;	// G=0x122a9; @synthesize=_statusURL
@property(readonly, assign, nonatomic) unsigned authRequestStatus;	// G=0x315f1; @synthesize=_authRequestStatus
@property(assign, nonatomic) int IDStatus;	// G=0x31651; S=0x30a11; @synthesize=_IDStatus
@property(readonly, assign, nonatomic) IMServiceImpl *service;	// G=0x1184d; 
@property(readonly, assign, nonatomic) IMAccount *account;	// G=0xa2dd; @synthesize=_account
@property(readonly, assign, nonatomic) NSString *ID;	// G=0xa435; @synthesize=_id
@property(readonly, assign) CFPhoneNumberRef phoneNumberRef;	// G=0x2fedd; converted property
+ (id)filterIMHandlesForBestAccountSiblings:(id)bestAccountSiblings;	// 0x17019
+ (id)filterIMHandlesForAccountSiblings:(id)accountSiblings onAccount:(id)account;	// 0x30c51
+ (id)bestIMHandleInArray:(id)array;	// 0x13675
+ (id)imHandlesForIMPerson:(id)imperson;	// 0x12edd
+ (id)nameOfStatus:(unsigned)status;	// 0x3595
+ (void)_loadStatusNames;	// 0x35d1
+ (BOOL)notificationsEnabled;	// 0x2e4b9
+ (void)setNotificationsEnabled:(BOOL)enabled;	// 0xcf61
// declared property getter: - (int)addressBookIdentifier;	// 0x31695
// declared property setter: - (void)setStatusMessageAsURL:(id)url;	// 0x31671
// declared property getter: - (id)statusMessageAsURL;	// 0x31661
// declared property getter: - (int)IDStatus;	// 0x31651
// declared property getter: - (BOOL)isBot;	// 0x12299
// declared property getter: - (BOOL)isMobile;	// 0x12289
// declared property setter: - (void)setOtherServiceIDs:(id)ids;	// 0x1042d
// declared property getter: - (id)otherServiceIDs;	// 0x17c21
// declared property setter: - (void)setPriority:(int)priority;	// 0x1646d
// declared property getter: - (int)priority;	// 0x31641
// declared property getter: - (id)guid;	// 0xa1ed
// declared property getter: - (id)account;	// 0xa2dd
// declared property getter: - (id)uniqueName;	// 0x14ed9
// declared property getter: - (id)ID;	// 0xa435
// declared property getter: - (id)pictureData;	// 0x31631
// declared property getter: - (id)richStatusMessage;	// 0x31621
// declared property getter: - (id)previousStatusMessage;	// 0x31611
// declared property getter: - (id)feedUpdatedDate;	// 0x31601
// declared property getter: - (unsigned)previousStatus;	// 0x10d41
// declared property getter: - (unsigned)authRequestStatus;	// 0x315f1
// declared property getter: - (id)presenceProperties;	// 0x315e1
// declared property getter: - (id)extraProperties;	// 0x315d1
// declared property getter: - (id)statusURL;	// 0x122a9
- (void)sendNotificationABPersonChanged;	// 0x31599
- (id)description;	// 0x314d1
- (void)setCustomPictureData:(id)data key:(id)key;	// 0x117cd
// declared property setter: - (void)setCustomPictureData:(id)data;	// 0x31459
// declared property getter: - (id)customPictureData;	// 0x31449
- (void)customPictureDataChanged:(id)changed key:(id)key;	// 0x31445
- (void)_imPersonPictureChanged:(id)changed;	// 0x31429
- (void)_sendCommand:(id)command properties:(id)properties;	// 0x312c5
- (void)_sendAutomationData:(id)data properties:(id)properties;	// 0x3111d
- (void)_sendData:(id)data;	// 0x310ad
// declared property getter: - (BOOL)hasMultiwayAudio;	// 0x31069
// declared property getter: - (BOOL)hasAudio;	// 0x30ff5
// declared property getter: - (BOOL)hasMultiwayVideo;	// 0x30fb1
// declared property getter: - (BOOL)hasVideo;	// 0x30f95
// declared property getter: - (BOOL)isConferenceAvailable;	// 0x30f79
// declared property getter: - (BOOL)hasConferencing;	// 0x30f55
// declared property getter: - (BOOL)supportsARDMuxing;	// 0x30f39
- (BOOL)hasCapability:(unsigned long long)capability;	// 0x12179
- (BOOL)_setCapabilities:(unsigned long long)capabilities;	// 0x30efd
- (void)setCapabilities:(unsigned long long)capabilities;	// 0x10ad9
// declared property getter: - (unsigned long long)capabilities;	// 0x121e9
- (id)_bestChatSibling;	// 0x30ec5
- (id)_chatSiblings;	// 0x30e71
- (BOOL)_isChatSiblingOf:(id)of;	// 0x30e45
- (BOOL)isSiblingOf:(id)of;	// 0x30df1
- (BOOL)isAccountSiblingOf:(id)of;	// 0x30dc5
// declared property getter: - (id)siblings;	// 0x12bc5
// declared property getter: - (id)accountSiblingsArray;	// 0x13599
// declared property getter: - (id)existingAccountSiblingsArray;	// 0x1363d
// declared property getter: - (id)siblingsArray;	// 0x30c29
// declared property getter: - (BOOL)hasOtherSiblings;	// 0x30bf9
- (BOOL)matchesIMHandle:(id)handle;	// 0x1429d
- (int)compareAccountNames:(id)names;	// 0x1664d
- (int)compareNormalizedIDs:(id)ids;	// 0x30bc1
- (int)compareIDs:(id)ids;	// 0x13a31
- (int)compareStatus:(id)status;	// 0x30b71
- (int)compareLastNames:(id)names;	// 0x14de5
- (int)compareFirstNames:(id)names;	// 0x30b35
- (id)_nameForComparisonPreferFirst:(BOOL)comparisonPreferFirst;	// 0x14e21
// declared property getter: - (double)timeSinceStatusChanged;	// 0x30af5
// declared property getter: - (double)timeSinceWentOffline;	// 0x30abd
- (void)setStatus:(unsigned)status message:(id)message richMessage:(id)message3;	// 0x10495
- (void)_updateIdleTimer;	// 0x10a95
- (void)_updateIdleTime;	// 0x14609
- (void)_scheduleIdleTimeUpdate;	// 0x143b9
- (void)_clearStatusMessageURLCache;	// 0x108d5
// declared property getter: - (id)statusMessage;	// 0x11c31
- (void)_filterStatusMessage;	// 0x11c65
// declared property getter: - (id)idleString;	// 0x171e9
// declared property getter: - (id)offlineString;	// 0x17751
- (void)setStatusURLFromString:(id)string;	// 0x10b99
- (void)setFeedUpdatedDate:(id)date;	// 0x11369
- (void)setIdleSince:(id)since;	// 0x10451
// declared property setter: - (void)setIDStatus:(int)status;	// 0x30a11
- (void)requestIDStatus;	// 0x30945
// declared property getter: - (double)idleTime;	// 0x10a99
// declared property getter: - (id)nameOfStatus;	// 0x30895
- (void)statusChanged:(unsigned)changed;	// 0x11171
- (void)statusMessageChanged:(id)changed;	// 0x30859
- (void)statusChanged:(unsigned)changed message:(id)message;	// 0x30835
- (void)setPersonStatus:(unsigned)status;	// 0x30825
// declared property getter: - (unsigned)status;	// 0x1112d
- (void)setAuthRequestStatus:(unsigned)status;	// 0x307d9
- (void)_updateStatusBasedOnAuthRequestStatus;	// 0x3072d
- (void)_stopRetainingAccount:(id)account;	// 0x30649
- (void)_removeAccountReference:(id)reference;	// 0x305ad
// declared property getter: - (id)dependentIMHandles;	// 0x304a1
// declared property getter: - (id)existingIMHandleWithoutResource;	// 0x30445
// declared property getter: - (id)imHandleWithoutResource;	// 0x303e9
// declared property getter: - (id)IDWithoutResource;	// 0x3035d
// declared property getter: - (id)resource;	// 0x3031d
// declared property getter: - (id)accountTypeName;	// 0x302f5
- (unsigned)sortOrderInGroup:(id)group;	// 0x302a9
- (void)setBlocked:(BOOL)blocked;	// 0x3024d
// declared property getter: - (BOOL)isBlocked;	// 0x122b9
// declared property getter: - (BOOL)isVisiblyBlocked;	// 0x1224d
- (BOOL)_isMyIDInList:(id)list;	// 0x301c9
- (void)propertiesChanged:(id)changed;	// 0xfbfd
- (void)_persistentPropertiesChanged:(id)changed;	// 0x30125
- (void)_setExtraProperties:(id)properties;	// 0x10c59
- (void)setPresenceProperties:(id)properties;	// 0x3008d
// declared property getter: - (id)bestSibling;	// 0x30079
- (id)bestSiblingInGroup:(id)group;	// 0x30065
- (id)bestSiblingInGroup:(id)group otherThan:(id)than;	// 0x30035
- (id)bestIMHandleForAccount:(id)account onService:(id)service inGroup:(id)group otherThan:(id)than;	// 0x13849
// declared property getter: - (id)bestAccountSibling;	// 0x13605
- (id)bestIMHandleForAccount:(id)account;	// 0x13825
- (id)bestIMHandleForService:(id)service;	// 0x30011
- (BOOL)isBetterThanIMHandle:(id)handle;	// 0x1186d
- (void)setHasTemporaryWatch:(BOOL)watch;	// 0x11051
// declared property getter: - (BOOL)watchingIMHandle;	// 0x12735
- (void)setValue:(id)value ofExtraProperty:(id)extraProperty;	// 0x2ffcd
- (void)requestValueOfProperty:(id)property;	// 0x2ff9d
- (id)_formattedPhoneNumber;	// 0x2ff05
// converted property getter: - (CFPhoneNumberRef)phoneNumberRef;	// 0x2fedd
- (void)_createPhoneNumberRefIfNeeded;	// 0x2fe79
// declared property getter: - (BOOL)isLoginIMHandle;	// 0xd7dd
// declared property getter: - (BOOL)isLoginIMHandleForAnyAccount;	// 0x2fdad
// declared property getter: - (BOOL)isBuddy;	// 0x11191
// declared property getter: - (id)server;	// 0x2fce1
// declared property getter: - (BOOL)hasResource;	// 0x2fcc5
// declared property getter: - (BOOL)hasLocation;	// 0x2fcad
// declared property getter: - (BOOL)hasServer;	// 0x1647d
// declared property getter: - (id)mobileDeviceName;	// 0x2fc75
- (void)setIsBot:(BOOL)bot;	// 0x1141d
- (void)setIsMobile:(BOOL)mobile;	// 0x113e1
// declared property getter: - (BOOL)isSystemUser;	// 0x13a79
// declared property getter: - (BOOL)canBeAdded;	// 0x2fb21
- (void)setEmails:(id)emails;	// 0x2fb0d
- (void)setEmail:(id)email;	// 0x2faf9
- (void)setFirstName:(id)name lastName:(id)name2;	// 0x2fad5
// declared property getter: - (id)emails;	// 0x18039
- (void)setEmails:(id)emails andUpdateABPerson:(BOOL)person;	// 0x10325
// declared property getter: - (id)email;	// 0x17ff1
- (void)setEmail:(id)email andUpdateABPerson:(BOOL)person;	// 0x102e1
- (void)setFirstName:(id)name lastName:(id)name2 fullName:(id)name3 andUpdateABPerson:(BOOL)person;	// 0x2fa9d
- (void)setLocalNickname:(id)nickname;	// 0x2f9dd
- (void)setImageData:(id)data;	// 0x2f95d
- (void)_setBaseFirstName:(id)name lastName:(id)name2 fullName:(id)name3;	// 0x2f7d1
- (void)_setABPersonFirstName:(id)name lastName:(id)name2;	// 0x2f729
// declared property getter: - (id)lastName;	// 0x14ee9
// declared property getter: - (id)firstName;	// 0x14fad
// declared property getter: - (id)nickname;	// 0x2f689
// declared property getter: - (BOOL)hasName;	// 0x13c11
- (void)resetUniqueName;	// 0xb345
// declared property getter: - (id)nameAndID;	// 0x13b29
// declared property getter: - (id)fullName;	// 0x17121
// declared property getter: - (id)name;	// 0x11db9
// declared property getter: - (id)normalizedID;	// 0x2f5d9
// declared property getter: - (id)displayID;	// 0x2f5b5
- (id)_nameUsingUnique:(BOOL)unique;	// 0x11dcd
- (BOOL)_hasABName;	// 0x11301
- (BOOL)_hasServiceNameProperties;	// 0x14d3d
- (id)_IDWithTrimmedServer;	// 0x164cd
// declared property getter: - (id)person;	// 0xd88d
// declared property getter: - (id)_cachedPerson;	// 0x2f5a5
- (void)_clearABPersonLookup;	// 0x2f591
// declared property setter: - (void)setIMPerson:(id)person;	// 0xbafd
- (void)resetABProperties;	// 0xb035
- (void)_clearABProperties;	// 0x2f455
// declared property getter: - (BOOL)areABPropertiesRecent;	// 0xb0f1
- (id)_abPersonCreateIfNeeded;	// 0x2f3e1
- (BOOL)resetABPerson;	// 0xbcb9
- (void)clearABPerson;	// 0x2f3cd
- (unsigned)hash;	// 0x10d55
// declared property getter: - (id)service;	// 0x1184d
// declared property getter: - (id)nameAndEmail;	// 0x2f349
- (void)setUniqueName:(id)name;	// 0xb9f5
- (void)postNotificationName:(id)name;	// 0xbb9d
- (void)_postNotificationName:(id)name userInfo:(id)info;	// 0xbbb1
- (void)_postNotification:(id)notification;	// 0x2f169
- (void)_registerForNotifications;	// 0x2f165
// declared property getter: - (BOOL)isAnonymous;	// 0xd7cd
- (void)setAnonymous:(BOOL)anonymous;	// 0x2f155
// declared property getter: - (id)groups;	// 0x2f11d
// declared property getter: - (id)groupsArray;	// 0x111fd
- (id)imHandleForOtherAccount:(id)otherAccount;	// 0x13725
// declared property getter: - (BOOL)canBeDeleted;	// 0x2efc9
- (id)copyWithZone:(NSZone *)zone;	// 0x2efb9
- (void)encodeWithCoder:(id)coder;	// 0x2ede1
- (id)initWithCoder:(id)coder;	// 0x2e951
- (void)dealloc;	// 0x15f8d
- (void)finalize;	// 0x2e71d
- (oneway void)release;	// 0xbf01
- (id)initWithAccount:(id)account ID:(id)anId;	// 0x9ea9
- (id)initWithAccount:(id)account ID:(id)anId alreadyCanonical:(BOOL)canonical;	// 0x2e581
- (id)init;	// 0x9ecd
- (void)_registerForIMPerson;	// 0x2e515
- (void)_unregisterFromIMPerson;	// 0x2e4c9
@end

@interface IMHandle (QueueNotifications)
- (void)releaseNotificationQueue;	// 0xf4c9
- (void)beginNotificationQueue;	// 0xf4b5
- (BOOL)shouldQueueNotifications;	// 0xbc69
@end

@interface IMHandle (PublicAPIMethods)
- (id)publicAPIPropertiesDictionary;	// 0x316a5
@end

@interface IMHandle (IMHandleRegistrarAdditions)
- (id)imHandleRegistrarGUID;	// 0x15f7d
@end
