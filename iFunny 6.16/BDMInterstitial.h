//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/BDMAdEventProducer-Protocol.h>
#import <Funny/BDMDisplayAdDelegate-Protocol.h>
#import <Funny/BDMRequestDelegate-Protocol.h>

@class BDMAuctionInfo, BDMEventMiddleware, BDMInterstitialRequest, NSString, UIView;
@protocol BDMAdEventProducerDelegate, BDMDisplayAd, BDMInterstitialDelegate;

@interface BDMInterstitial : NSObject <BDMRequestDelegate, BDMDisplayAdDelegate, BDMAdEventProducer>
{
    id <BDMAdEventProducerDelegate> _producerDelegate;
    unsigned long long _type;
    id <BDMInterstitialDelegate> _delegate;
    BDMEventMiddleware *_middleware;
    id <BDMDisplayAd> _displayAd;
    BDMInterstitialRequest *_currentRequest;
}

@property(retain, nonatomic) BDMInterstitialRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) id <BDMDisplayAd> displayAd; // @synthesize displayAd=_displayAd;
@property(retain, nonatomic) BDMEventMiddleware *middleware; // @synthesize middleware=_middleware;
@property(nonatomic) __weak id <BDMInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <BDMAdEventProducerDelegate> producerDelegate; // @synthesize producerDelegate=_producerDelegate;
- (void).cxx_destruct;
- (void)displayAd:(id)arg1 failedToPresent:(id)arg2;
- (void)displayAdLogUserInteraction:(id)arg1;
- (void)displayAdLogImpression:(id)arg1;
- (void)displayAdLogFinishView:(id)arg1;
- (void)displayAdLogStartView:(id)arg1;
- (void)displayAd:(id)arg1 failedWithError:(id)arg2;
- (void)displayAdReady:(id)arg1;
- (void)requestDidExpire:(id)arg1;
- (void)request:(id)arg1 failedWithError:(id)arg2;
- (void)request:(id)arg1 completeWithInfo:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)presentFromRootViewController:(id)arg1;
- (void)prepareDisplayAd;
@property(readonly, copy, nonatomic) BDMAuctionInfo *auctionInfo;
@property(readonly, nonatomic) UIView *adView;
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
