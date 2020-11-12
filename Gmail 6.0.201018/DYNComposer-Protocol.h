//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol DYNComposer <NSObject>
- (_Bool)hasPendingContent;

@optional
- (struct _NSRange)selectedRange;
- (void)addSoftReturn;
- (void)commitCompose;
- (void)keyboardHeightChanged:(double)arg1;
- (_Bool)isKeyboardShowing;
- (void)setSmartReplyCustomAccessibilityActions:(NSArray *)arg1;
- (void)dismissPopups;
- (void)composerWillClose;
@end
