//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTPlayerOverlayAutoHideController;

@protocol YTPlayerOverlayAutoHideControllerObserver <NSObject>
- (void)autoHideController:(YTPlayerOverlayAutoHideController *)arg1 shouldShowOverlayWithAnimationDuration:(double)arg2;
- (void)autoHideController:(YTPlayerOverlayAutoHideController *)arg1 shouldHideOverlayWithAnimationDuration:(double)arg2;
@end

