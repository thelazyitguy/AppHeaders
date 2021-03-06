//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/BDMAdEventProducer-Protocol.h>
#import <Funny/BDMDisplayAdDelegate-Protocol.h>
#import <Funny/BDMRequestDelegate-Protocol.h>

@class BDMAuctionInfo, BDMEventMiddleware, BDMRewardedRequest, NSString, UIView;
@protocol BDMAdEventProducerDelegate, BDMDisplayAd, BDMRewardedDelegate;

@interface BDMRewarded : NSObject <BDMRequestDelegate, BDMDisplayAdDelegate, BDMAdEventProducer>
{
    id <BDMAdEventProducerDelegate> _producerDelegate;
    id <BDMRewardedDelegate> _delegate;
    BDMEventMiddleware *_middleware;
    id <BDMDisplayAd> _displayAd;
    BDMRewardedRequest *_currentRequest;
}

@property(retain, nonatomic) BDMRewardedRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) id <BDMDisplayAd> displayAd; // @synthesize displayAd=_displayAd;
@property(retain, nonatomic) BDMEventMiddleware *middleware; // @synthesize middleware=_middleware;
@property(nonatomic) __weak id <BDMRewardedDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <BDMAdEventProducerDelegate> producerDelegate; // @synthesize producerDelegate=_producerDelegate;
- (void).cxx_destruct;
- (void)displayAdCompleteRewardAction:(id)arg1;
- (void)displayAd:(id)arg1 failedToPresent:(id)arg2;
- (void)displayAdLogFinishView:(id)arg1;
- (void)displayAdLogStartView:(id)arg1;
- (void)displayAdLogUserInteraction:(id)arg1;
- (void)displayAdLogImpression:(id)arg1;
- (void)displayAd:(id)arg1 failedWithError:(id)arg2;
- (void)displayAdReady:(id)arg1;
- (void)requestDidExpire:(id)arg1;
- (void)request:(id)arg1 failedWithError:(id)arg2;
- (void)request:(id)arg1 completeWithInfo:(id)arg2;
- (void)invalidate;
- (void)prepareDisplayAd;
- (void)presentFromRootViewController:(id)arg1;
@property(readonly, nonatomic) UIView *adView;
@property(readonly, copy, nonatomic) BDMAuctionInfo *auctionInfo;
@property(readonly, nonatomic) _Bool canShow;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)populateWithRequest:(id)arg1;
- (void)makeRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

