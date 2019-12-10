/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLFileSystemPersistence.h>
#import <PhotoLibraryServices/XXUnknownSuperclass.h>
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>

@class NSMutableArray;

@interface PLFileSystemPersistence : XXUnknownSuperclass {
@private
	dispatch_queue_s *_isolation;	// 4 = 0x4
	dispatch_queue_s *_writerQueue;	// 8 = 0x8
	NSMutableArray *_workItems;	// 12 = 0xc
}
+ (id)persistedAttributesForFileAtURL:(id)url;	// 0x5244d
+ (void)persistData:(id)data forKey:(id)key fileURL:(id)url completion:(id)completion;	// 0x52401
+ (id)sharedInstance;	// 0x5229d
- (void)backgroundWriteData:(id)data toFileAtURL:(id)url;	// 0x52d69
- (void)persistForTime:(double)time;	// 0x52b55
- (void)persistData:(id)data forKey:(id)key fileURL:(id)url completion:(id)completion;	// 0x526f5
- (void)dealloc;	// 0x5239d
- (id)init;	// 0x52309
@end

@interface PLFileSystemPersistence (PLExtendedFileSystemPersistence)
+ (void)persistString:(id)string forKey:(id)key fileURL:(id)url completion:(id)completion;	// 0x53519
+ (void)persistMetadata:(id)metadata fileURL:(id)url;	// 0x534b5
+ (void)persistString:(id)string forKey:(id)key fileURL:(id)url;	// 0x53491
+ (void)persistUInt16:(unsigned short)a16 forKey:(id)key fileURL:(id)url;	// 0x53441
+ (void)persistUUIDString:(id)string forKey:(id)key fileURL:(id)url;	// 0x5340d
@end