//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTChipCloudCell, YTChipCloudChipView, YTQTMButton;

@protocol YTChipCloudTapDelegate <NSObject>
- (void)chipCloudCell:(YTChipCloudCell *)arg1 didTapButton:(YTQTMButton *)arg2;
- (void)chipCloudCell:(YTChipCloudCell *)arg1 didTapChip:(YTChipCloudChipView *)arg2;

@optional
- (_Bool)chipCloudCell:(YTChipCloudCell *)arg1 canTapButton:(YTQTMButton *)arg2;
- (_Bool)chipCloudCell:(YTChipCloudCell *)arg1 canUnselectChip:(YTChipCloudChipView *)arg2;
- (_Bool)chipCloudCell:(YTChipCloudCell *)arg1 canTapChip:(YTChipCloudChipView *)arg2;
@end
