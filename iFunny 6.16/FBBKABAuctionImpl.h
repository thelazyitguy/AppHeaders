//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBBKABAuction-Protocol.h>
#import <Funny/FBBKAuctionDelegate-Protocol.h>

@class NSDictionary, NSString;
@protocol FBBKABAuctionDelegate, FBBKAuctionInternal, FBBKLogger;

@interface FBBKABAuctionImpl : NSObject <FBBKAuctionDelegate, FBBKABAuction>
{
    _Bool _auctionCalled;
    id <FBBKABAuctionDelegate> _delegate;
    long long _abAuctionId;
    NSDictionary *_biddersMap;
    id <FBBKLogger> _logger;
    NSString *_currentSegment;
    id <FBBKAuctionInternal> _auction;
    CDUnknownBlockType _auctionFactory;
}

@property(readonly, nonatomic) CDUnknownBlockType auctionFactory; // @synthesize auctionFactory=_auctionFactory;
@property(readonly, nonatomic) id <FBBKAuctionInternal> auction; // @synthesize auction=_auction;
@property(readonly, nonatomic) NSString *currentSegment; // @synthesize currentSegment=_currentSegment;
@property(readonly, nonatomic) id <FBBKLogger> logger; // @synthesize logger=_logger;
@property(readonly, copy, nonatomic) NSDictionary *biddersMap; // @synthesize biddersMap=_biddersMap;
@property(readonly, nonatomic) _Bool auctionCalled; // @synthesize auctionCalled=_auctionCalled;
@property(readonly, nonatomic) long long abAuctionId; // @synthesize abAuctionId=_abAuctionId;
@property(nonatomic) __weak id <FBBKABAuctionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fbbkAuction:(id)arg1 didCompleteWithWaterfall:(id)arg2;
- (void)notifyAboutFailingUsingWaterfall:(id)arg1;
- (void)notifyDisplayWinner:(id)arg1;
- (void)startWithABTest:(id)arg1 waterfall:(id)arg2;
- (id)initWithAssembly:(id)arg1 bidders:(id)arg2;
- (id)initWithBidders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

