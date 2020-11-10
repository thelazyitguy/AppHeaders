//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import "YTCommuteItemCellDelegate-Protocol.h"

@class NSString, YTInteractionLoggingProxyButton;

@interface YTCommuteVideoCellController : YTInnerTubeCellController <YTCommuteItemCellDelegate>
{
    YTInteractionLoggingProxyButton *_videoCellProxyButton;
    YTInteractionLoggingProxyButton *_parentProxyButton;
}

- (void).cxx_destruct;
- (id)parentProxyButton;
- (id)videoCellProxyButton;
- (void)setCell:(id)arg1;
- (void)didTapCell:(id)arg1;
- (void)cellDidBecomeHiddenWithVisibilityEventType:(int)arg1;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

