/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaEntityCellConfiguration.h>
#import <iPodUI/iPodUI-Structs.h>


@interface IUAlbumCellConfiguration : IUMediaEntityCellConfiguration {
@private
	BOOL _artistSpecified;	// 97 = 0x61
	BOOL _isCloud;	// 98 = 0x62
}
+ (float)rowHeightForGlobalContext:(id)globalContext;	// 0x1d9d1
- (void)reloadStrings;	// 0x1df61
- (void)reloadImages;	// 0x1de15
- (void)reloadLayoutInformation;	// 0x1dc45
- (id)newImageRequestWithMediaEntity:(id)mediaEntity;	// 0x1db99
- (void)configureForEntity:(id)entity query:(id)query entityIndex:(unsigned)index entityCount:(unsigned)count;	// 0x1dad1
- (id)fontForLabelAtIndex:(unsigned)index;	// 0x1da6d
- (id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;	// 0x1d9e5
- (CGSize)artworkSize;	// 0x1d9d9
- (id)init;	// 0x1d9a1
@end