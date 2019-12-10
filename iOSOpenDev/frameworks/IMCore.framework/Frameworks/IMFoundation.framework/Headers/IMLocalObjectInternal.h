/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/XXUnknownSuperclass.h>
#import <IMFoundation/IMFoundation-Structs.h>

@class NSRecursiveLock, NSString, NSMutableArray, NSLock, NSProtocolChecker;

__attribute__((visibility("hidden")))
@interface IMLocalObjectInternal : XXUnknownSuperclass {
	NSRecursiveLock *_lock;	// 4 = 0x4
	id _target;	// 8 = 0x8
	unsigned _port;	// 12 = 0xc
	dispatch_source_s *_source;	// 16 = 0x10
	dispatch_queue_s *_queue;	// 20 = 0x14
	dispatch_semaphore_s *_deathLock;	// 24 = 0x18
	NSString *_portName;	// 28 = 0x1c
	NSProtocolChecker *_protocolChecker;	// 32 = 0x20
	int _pid;	// 36 = 0x24
	NSMutableArray *_componentQueue;	// 40 = 0x28
	NSLock *_componentQueueLock;	// 44 = 0x2c
	NSRecursiveLock *_componentQueueProcessingLock;	// 48 = 0x30
	BOOL _pendingComponentQueueProcessing;	// 52 = 0x34
	BOOL _busyForwarding;	// 53 = 0x35
}
- (void)dealloc;	// 0x1c221
@end