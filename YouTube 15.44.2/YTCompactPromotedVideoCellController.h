//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTActiveViewCellController.h>

@class YTAdTrackingController;

@interface YTCompactPromotedVideoCellController : YTActiveViewCellController
{
    YTAdTrackingController *_adTrackingController;
}

- (void).cxx_destruct;
- (void)handleLongPressBegan:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)sendImpressionPings;
- (void)didTapCallToAction;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

@end
