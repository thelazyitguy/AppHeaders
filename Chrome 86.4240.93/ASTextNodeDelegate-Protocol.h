//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class ASTextNode, NSString;

@protocol ASTextNodeDelegate <NSObject>

@optional
- (_Bool)textNode:(ASTextNode *)arg1 shouldLongPressLinkAttribute:(NSString *)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4;
- (_Bool)textNode:(ASTextNode *)arg1 shouldHighlightLinkAttribute:(NSString *)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)textNodeTappedTruncationToken:(ASTextNode *)arg1;
- (void)textNode:(ASTextNode *)arg1 longPressedLinkAttribute:(NSString *)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (void)textNode:(ASTextNode *)arg1 tappedLinkAttribute:(NSString *)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
@end
