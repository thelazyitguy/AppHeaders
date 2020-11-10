//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import "YTDonationEngagementCellDelegate-Protocol.h"
#import "YTUpdatedMetadataServiceObserver-Protocol.h"

@class NSString, YTDonationEngagementCell;

@interface YTDonationEngagementCellController : YTInnerTubeCellController <YTDonationEngagementCellDelegate, YTUpdatedMetadataServiceObserver>
{
    YTDonationEngagementCell *_cell;
}

- (void).cxx_destruct;
- (void)didUpdateDonationProgress:(float)arg1 donatedAmount:(id)arg2 forVideoID:(id)arg3;
- (void)didUpdateExtraShortVideoViewCount:(id)arg1 forVideoID:(id)arg2;
- (void)didTapPrivacyCheckbox:(_Bool)arg1;
- (void)didSelectDonationAmount:(unsigned long long)arg1;
- (id)donationShelfRenderer;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)setCell:(id)arg1;
- (void)willBecomeVisible;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

