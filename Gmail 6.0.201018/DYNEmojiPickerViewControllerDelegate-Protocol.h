//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DYNEmojiPickerViewController, GKBEmojiObject, GKBResultSet, NSIndexPath;

@protocol DYNEmojiPickerViewControllerDelegate <NSObject>
- (void)emojiViewControllerLoadedEmojis:(DYNEmojiPickerViewController *)arg1;
- (void)emojiViewControllerDidTapDismiss:(DYNEmojiPickerViewController *)arg1;
- (void)emojiViewController:(DYNEmojiPickerViewController *)arg1 didSelectEmojiObject:(GKBEmojiObject *)arg2 atIndexPath:(NSIndexPath *)arg3 fromResultSet:(GKBResultSet *)arg4;
- (void)emojiViewControllerDidDismissSearch:(DYNEmojiPickerViewController *)arg1;
@end
