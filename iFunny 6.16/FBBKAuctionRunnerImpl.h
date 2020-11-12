//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBBKAuctionRunner-Protocol.h>

@class NSString;

@interface FBBKAuctionRunnerImpl : NSObject <FBBKAuctionRunner>
{
    double _timeout;
    NSString *_auctionId;
}

@property(readonly, nonatomic) NSString *auctionId; // @synthesize auctionId=_auctionId;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)updateReport:(id)arg1 forBidder:(id)arg2 inReports:(id)arg3;
- (void)timeoutAllPendingBidders:(id)arg1 inReports:(id)arg2;
- (void)retrieveBidUsingBidder:(id)arg1 complete:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)runWithBidders:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAuctionId:(id)arg1 timeout:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
