/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */



@class NSDictionary;

@interface DataClassMigrator : NSObject {
	NSDictionary *_context;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *context;	// G=0xc9c; S=0xe7c; @synthesize=_context
@property(readonly, assign, nonatomic) BOOL wasPasscodeSetInBackup;	// G=0xdd0; 
@property(readonly, assign, nonatomic) BOOL shouldPreserveSettingsAfterRestore;	// G=0xd88; 
@property(readonly, assign, nonatomic) BOOL didRestoreFromCloudBackup;	// G=0xd40; 
@property(readonly, assign, nonatomic) BOOL didMigrateBackupFromDifferentDevice;	// G=0xcf8; 
@property(readonly, assign, nonatomic) BOOL didRestoreFromBackup;	// G=0xcb0; 
- (void)dealloc;	// 0xe18
// declared property getter: - (BOOL)didRestoreFromBackup;	// 0xcb0
// declared property getter: - (BOOL)didMigrateBackupFromDifferentDevice;	// 0xcf8
// declared property getter: - (BOOL)didRestoreFromCloudBackup;	// 0xd40
// declared property getter: - (BOOL)shouldPreserveSettingsAfterRestore;	// 0xd88
// declared property getter: - (BOOL)wasPasscodeSetInBackup;	// 0xdd0
- (id)dataClassName;	// 0xc78
- (BOOL)performMigration;	// 0xc80
- (float)estimatedDuration;	// 0xc88
- (float)migrationProgress;	// 0xc90
// declared property getter: - (id)context;	// 0xc9c
// declared property setter: - (void)setContext:(id)context;	// 0xe7c
@end