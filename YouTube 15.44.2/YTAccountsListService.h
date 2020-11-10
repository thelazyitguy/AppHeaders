//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

#import <Module_Framework/YTInnerTubeUIService-Protocol.h>

@class GIMMe, NSMutableDictionary, NSString, YTApiaryResourceParser;

@interface YTAccountsListService : YTBaseInnerTubeRequestService <YTInnerTubeUIService>
{
    YTApiaryResourceParser *_resourceParser;
    NSMutableDictionary *_continuationToIdentityIDMap;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)cacheContinuationIdentityRelationForResponse:(id)arg1 withIdentityID:(id)arg2;
- (id)continuationTokenForResponse:(id)arg1;
- (id)identityIDForContinuationToken:(id)arg1;
- (void)storeIdentityID:(id)arg1 forContinuationToken:(id)arg2;
- (id)requestForAccountsListWithRequest:(id)arg1 identityID:(id)arg2;
- (id)requestForAccountsListWithIdentity:(id)arg1 personaVersion:(id)arg2 includeBrandAccounts:(_Bool)arg3 callCircumstance:(int)arg4;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)continuationRequestWithToken:(id)arg1 clickTrackingParams:(id)arg2;
- (void)clearCaches;
- (Class)responseClass;
- (void)makeRequestWithIdentity:(id)arg1 personaVersion:(id)arg2 includeBrandAccounts:(_Bool)arg3 callCircumstance:(int)arg4 innerTubeResponseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)makeRequestWithIdentity:(id)arg1 personaVersion:(id)arg2 includeBrandAccounts:(_Bool)arg3 innerTubeResponseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeRequestWithIdentity:(id)arg1 personaVersion:(id)arg2 innerTubeResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeRequestWithIdentity:(id)arg1 innerTubeResponseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)initWithServiceRegistryScope:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

