//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/_TtC13IFAppodealAds33AppodealHeaderBidderBannerService.h>

#import <Funny/BDMRequestDelegate-Protocol.h>

@interface _TtC13IFAppodealAds33AppodealHeaderBidderBannerService (IFAppodealAds) <BDMRequestDelegate>
- (void)requestDidExpire:(id)arg1;
- (void)request:(id)arg1 completeWithInfo:(id)arg2;
- (void)request:(id)arg1 failedWithError:(id)arg2;
- (void)loadBids:(CDUnknownBlockType)arg1 failureCompletion:(CDUnknownBlockType)arg2;
@end

