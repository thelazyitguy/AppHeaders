//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class UIPanGestureRecognizer, UIView;

@protocol IFFeedPanelDelegate <NSObject>
- (void)innerPanelHorizontalScrollRecognizerAction:(UIPanGestureRecognizer *)arg1;
- (void)innerPanelVerticalScrollDidScrollAtTranslation:(struct CGPoint)arg1;
- (void)innerPanelVerticalScrollEndScrollingWithVelocity:(struct CGPoint)arg1;
- (void)innerPanelVerticalScrollBeginScrolling;
- (void)panelDidTapClose:(UIView *)arg1;
- (void)panelHeightDidChange:(UIView *)arg1;
@end

