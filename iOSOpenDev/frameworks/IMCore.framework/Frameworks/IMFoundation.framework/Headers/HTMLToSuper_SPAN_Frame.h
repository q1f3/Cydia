/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/HTMLToSuper_Default_Frame.h>


__attribute__((visibility("hidden")))
@interface HTMLToSuper_SPAN_Frame : HTMLToSuper_Default_Frame {
	BOOL _shouldPopBackgroundColor;	// 4 = 0x4
	BOOL _shouldPopForegroundColor;	// 5 = 0x5
	BOOL _shouldPopFontFamily;	// 6 = 0x6
	BOOL _shouldPopFontSize;	// 7 = 0x7
	BOOL _shouldDecrementBoldCount;	// 8 = 0x8
	BOOL _shouldDecrementItalicCount;	// 9 = 0x9
	BOOL _shouldDecrementUnderlineCount;	// 10 = 0xa
	BOOL _shouldDecrementStrikeCount;	// 11 = 0xb
}
- (void)parser:(id)parser context:(id)context didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x1bc3d
- (void)parser:(id)parser context:(id)context didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x1b8a9
@end