//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAViewabilityWebViewTracking-Protocol.h>

@class NSString, OMIDSmaatoAdSession, OMIDSmaatoPartner;

@interface SMAOmViewabilityWebViewTracker : NSObject <SMAViewabilityWebViewTracking>
{
    OMIDSmaatoPartner *_partner;
    OMIDSmaatoAdSession *_session;
    NSString *_omScript;
}

@property(copy, nonatomic) NSString *omScript; // @synthesize omScript=_omScript;
@property(retain, nonatomic) OMIDSmaatoAdSession *session; // @synthesize session=_session;
@property(retain, nonatomic) OMIDSmaatoPartner *partner; // @synthesize partner=_partner;
- (void).cxx_destruct;
- (void)createOmSessionForWebView:(id)arg1;
- (void)stopTrackingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)startTracking;
- (void)removeFriendlyObstruction:(id)arg1;
- (void)registerFriendlyObstruction:(id)arg1;
- (void)fireImpression;
- (void)updateTrackedView:(id)arg1;
- (void)registerAdView:(id)arg1;
- (id)injectTrackingScriptInHTML:(id)arg1;
- (id)initWithPartner:(id)arg1 omScript:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

