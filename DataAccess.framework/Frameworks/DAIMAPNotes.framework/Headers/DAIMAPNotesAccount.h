/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
 */

#import <DAIMAPNotes/XXUnknownSuperclass.h>

@class BasicAccount;

@interface DAIMAPNotesAccount : XXUnknownSuperclass {
	BasicAccount *_parent;	// 64 = 0x40
	BasicAccount *_imapMailAccount;	// 68 = 0x44
}
@property(assign, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion;	// G=0x1635; S=0x1669; 
@property(readonly, assign) BasicAccount *imapMailAccount;	// G=0x16dd; @synthesize=_imapMailAccount
@property(readonly, assign) BasicAccount *parent;	// G=0x16cd; @synthesize=_parent
+ (id)supportedDataclasses;	// 0x1365
+ (Class)clientClass;	// 0x1349
+ (Class)accountClass;	// 0x132d
+ (id)defaultProperties;	// 0xdfd
// declared property getter: - (id)imapMailAccount;	// 0x16dd
// declared property getter: - (id)parent;	// 0x16cd
- (id)scheduleIdentifier;	// 0x16ad
// declared property setter: - (void)setIMAPNotesAccountVersion:(int)version;	// 0x1669
// declared property getter: - (int)imapNotesAccountVersion;	// 0x1635
- (BOOL)accountNeedsUpgrade;	// 0x1541
- (BOOL)upgradeAccount;	// 0x14b9
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x13bd
- (id)persistentUUID;	// 0x13ad
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x13a1
- (BOOL)isDisabled;	// 0x139d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x1391
- (void)dealloc;	// 0x12cd
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x12ad
- (id)accountPropertyForKey:(id)key;	// 0x123d
- (void)removeAccountPropertyForKey:(id)key;	// 0x11f1
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x10dd
- (BOOL)isChildAccount;	// 0x10d9
- (id)initWithParent:(id)parent imapMailAccount:(id)account childProperties:(id)properties;	// 0x1061
- (void)saveAccountProperties;	// 0xff1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0xef1
@end
