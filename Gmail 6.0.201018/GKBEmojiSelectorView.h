//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GKBEmoji, NSMutableArray;

@interface GKBEmojiSelectorView : UIView
{
    NSMutableArray *_items;
    UIView *_backgroundView;
    GKBEmoji *_selectedEmoji;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GKBEmoji *selectedEmoji; // @synthesize selectedEmoji=_selectedEmoji;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)highlightClosestOptionToPoint:(struct CGPoint)arg1;
- (id)initWithEmojis:(id)arg1 selectedEmoji:(id)arg2;

@end
