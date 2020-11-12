//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBBKNotifier-Protocol.h>
#import <Funny/FBBKStandaloneNotifier-Protocol.h>

@class FBBKBidReport, NSString;
@protocol FBBKContext, FBBKNetworkingService;

@interface FBBKFacebookNotifier : NSObject <FBBKNotifier, FBBKStandaloneNotifier>
{
    NSString *_lurl;
    FBBKBidReport *_report;
    id <FBBKNetworkingService> _networkingService;
    id <FBBKContext> _context;
    NSString *_auctionId;
}

@property(readonly, copy, nonatomic) NSString *auctionId; // @synthesize auctionId=_auctionId;
@property(readonly, nonatomic) id <FBBKContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) id <FBBKNetworkingService> networkingService; // @synthesize networkingService=_networkingService;
@property(retain, nonatomic) FBBKBidReport *report; // @synthesize report=_report;
@property(copy, nonatomic) NSString *lurl; // @synthesize lurl=_lurl;
- (void).cxx_destruct;
- (void)notifyUsingUrlString:(id)arg1 placementId:(id)arg2 lossCode:(long long)arg3 bidderName:(id)arg4 cpmCents:(double)arg5 segment:(id)arg6 winnerType:(id)arg7 phase:(id)arg8;
- (void)notifyLossForStandaloneBid:(id)arg1;
- (void)notifyError:(long long)arg1 forStandaloneBidWithPlacementId:(id)arg2;
- (void)notifyWinForStandaloneBid:(id)arg1;
- (long long)determineLossCodeAccordingToWinnerBid:(id)arg1;
- (void)notifyDisplayedEntry:(id)arg1 segment:(id)arg2;
- (void)notifyAuctionWinnerBid:(id)arg1 secondPrice:(id)arg2 segment:(id)arg3;
- (id)initWithAuctionId:(id)arg1 networkingService:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
