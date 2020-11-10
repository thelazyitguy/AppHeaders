//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString, YTGamingOAuthService;
@protocol YTEventLogger;

@interface YTGamingAccountLinkManager : NSObject <YTUserChangedObserver>
{
    GIMMe *_gimme;
    NSMutableDictionary *_observersPerService;
    YTGamingOAuthService *_oauthService;
    id <YTEventLogger> _eventLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) __weak YTGamingOAuthService *oauthService; // @synthesize oauthService=_oauthService;
@property(readonly, nonatomic) NSMutableDictionary *observersPerService; // @synthesize observersPerService=_observersPerService;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)logAction:(int)arg1 status:(int)arg2 serviceId:(id)arg3;
- (void)notifyObserversForService:(id)arg1 linked:(_Bool)arg2;
- (void)reset;
- (void)userDidChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forService:(id)arg2;
- (void)unlinkAccountWithServiceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)linkAccountWithServiceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

