/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */




@protocol AFSyncHandler <NSObject>
@optional
- (void)syncDidEnd;
- (void)getChangeAfterAnchor:(id)anchor changeInfo:(id)info;
- (void)beginSyncWithAnchor:(id)anchor validity:(id)validity forKey:(id)key beginInfo:(id)info;
@end
