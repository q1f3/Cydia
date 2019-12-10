/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <DACardDAV/CardDAVAccount.h>

@class BasicAccount;

@interface CardDAVChildAccount : CardDAVAccount {
	BasicAccount *_parent;	// 76 = 0x4c
}
+ (id)supportedDataclasses;	// 0x3279
+ (Class)clientClass;	// 0x325d
+ (Class)accountClass;	// 0x324d
- (id)scheduleIdentifier;	// 0x32d9
- (id)persistentUUID;	// 0x32c9
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x32b9
- (BOOL)isDisabled;	// 0x32b5
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x32a5
- (void)dealloc;	// 0x3201
- (id)accountPropertyForKey:(id)key;	// 0x3191
- (void)removeAccountPropertyForKey:(id)key;	// 0x3145
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3031
- (void)saveAccountProperties;	// 0x2fc1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x2ec1
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x2de1
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x2ddd
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x2d71
- (BOOL)handlePasswordPromptDirectly;	// 0x2d6d
- (id)password;	// 0x2d4d
- (id)username;	// 0x2d15
- (BOOL)isChildAccount;	// 0x2d11
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x2cb9
@end