//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface MPMediationManager : NSObject
{
    _Bool _isInitializing;
    NSMutableDictionary *_adapters;
    NSSet *_certifiedAdapterClasses;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)certifiedAdapterInformationProviderClasses;
+ (id)adapterInformationProvidersFilePath;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isInitializing; // @synthesize isInitializing=_isInitializing;
@property(readonly, nonatomic) NSSet *certifiedAdapterClasses; // @synthesize certifiedAdapterClasses=_certifiedAdapterClasses;
@property(retain, nonatomic) NSMutableDictionary *adapters; // @synthesize adapters=_adapters;
- (id)advancedBiddingTokens;
- (void)clearCache;
- (id)cachedInitializationParametersForNetwork:(Class)arg1;
- (void)setCachedInitializationParameters:(id)arg1 forNetwork:(Class)arg2;
- (id)parametersForAdapter:(id)arg1 overrideConfiguration:(id)arg2;
@property(readonly, nonatomic) NSDictionary *adRequestPayload;
- (void)initializeWithAdditionalProviders:(id)arg1 configurations:(id)arg2 requestOptions:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (id)init;

@end
