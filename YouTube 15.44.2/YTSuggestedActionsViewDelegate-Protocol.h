//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTISuggestedActionRenderer, YTSuggestedActionsView;

@protocol YTSuggestedActionsViewDelegate <NSObject>
- (void)suggestedActionsView:(YTSuggestedActionsView *)arg1 didTapDismissForAction:(YTISuggestedActionRenderer *)arg2;
- (void)suggestedActionsView:(YTSuggestedActionsView *)arg1 didTapAction:(YTISuggestedActionRenderer *)arg2;
@end

