/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/XXUnknownSuperclass.h>
#import <AssistantServices/assistantd-Structs.h>

@protocol ADNetworkManagerDelegate;

__attribute__((visibility("hidden")))
@interface ADNetworkManager : XXUnknownSuperclass {
	id<ADNetworkManagerDelegate> _delegate;	// 4 = 0x4
	SCNetworkReachabilityRef _scReachability;	// 8 = 0x8
	unsigned _flags;	// 12 = 0xc
}
@property(assign, nonatomic) id<ADNetworkManagerDelegate> delegate;	// G=0x2f0b9; S=0x2f0c9; @synthesize=_delegate
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f0c9
// declared property getter: - (id)delegate;	// 0x2f0b9
- (unsigned)WWANInterfaceIndex;	// 0x2ef35
- (void)stopMonitoringNetwork;	// 0x2eef9
- (void)startMonitoringNetworkForHost:(id)host onQueue:(dispatch_queue_s *)queue;	// 0x2ee35
- (void)_setFlags:(unsigned)flags;	// 0x2ed75
- (void)dealloc;	// 0x2ed1d
@end