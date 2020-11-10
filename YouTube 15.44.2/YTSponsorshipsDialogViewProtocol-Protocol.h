//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class YTQTMButton, YTSponsorshipsDialogHeaderView;

@protocol YTSponsorshipsDialogViewProtocol <YTThumbnailMapping, YTPageStyling>
@property(readonly, nonatomic) YTQTMButton *callToActionButton;
@property(nonatomic) double maxHeight;
@property(readonly, nonatomic) YTSponsorshipsDialogHeaderView *headerView;
- (void)setDismissEndpointTarget:(id)arg1 action:(SEL)arg2;
- (void)setCallToActionEndpointTarget:(id)arg1 action:(SEL)arg2;
@end

