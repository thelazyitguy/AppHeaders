//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppAndExtensionsFramework/PHTInternalPhenotypeFlagsProtocol-Protocol.h>

@class NSCondition, NSString, PHTPhenotypeExperimentTokens, PHTPhenotypeFlagsSnapshot;
@protocol OS_dispatch_queue;

@interface PHTInternalPhenotypeFlags : NSObject <PHTInternalPhenotypeFlagsProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_packageName;
    _Bool _configsLoaded;
    _Bool _startedLoading;
    NSCondition *_configsLoadedCondition;
    PHTPhenotypeFlagsSnapshot *_atomicSnapshot;
}

+ (_Bool)areEnabled;
+ (void)disable;
+ (void)enable;
+ (id)resetSharedInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) PHTPhenotypeFlagsSnapshot *atomicSnapshot; // @synthesize atomicSnapshot=_atomicSnapshot;
@property(nonatomic) _Bool startedLoading; // @synthesize startedLoading=_startedLoading;
@property(nonatomic) _Bool configsLoaded; // @synthesize configsLoaded=_configsLoaded;
@property(readonly, nonatomic) NSCondition *configsLoadedCondition; // @synthesize configsLoadedCondition=_configsLoadedCondition;
@property(readonly, copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
- (void)prepareForCommit;
- (void)updateWithConfiguration:(id)arg1 error:(id)arg2;
- (id)snapshot;
- (id)numberArrayForFlagName:(id)arg1 withDefault:(id)arg2;
- (id)stringArrayForFlagName:(id)arg1 withDefault:(id)arg2;
- (id)dataForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)numberForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)stringForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)valueForFlagName:(id)arg1 withDefault:(id)arg2;
@property(readonly, nonatomic) long long configurationVersion;
@property(readonly, nonatomic) PHTPhenotypeExperimentTokens *tokens;
@property(readonly, copy, nonatomic) NSString *serverToken;
- (void)configsFinishedLoading;
- (void)waitForConfigsToLoad;
- (void)committedConfiguration:(CDUnknownBlockType)arg1;
- (void)startLoading;
- (id)initWithEmptySnapshot;
- (id)init;
- (id)initWithStartLoading:(_Bool)arg1;

@end
