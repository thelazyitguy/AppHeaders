//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PHTPhenotypeFlagsProtocol-Protocol.h>

@class NSCondition, NSHashTable, NSString, PHTPhenotypeExperimentTokens, PHTPhenotypeFlagsSnapshot;
@protocol PHTHermeticOverridesService, PHTPhenotype;

@interface PHTPhenotypeFlags : NSObject <PHTPhenotypeFlagsProtocol>
{
    NSString *_packageName;
    id <PHTHermeticOverridesService> _hermeticOverridesService;
    _Bool _configsLoaded;
    _Bool _startedLoading;
    id <PHTPhenotype> _phenotype;
    NSCondition *_configsLoadedCondition;
    NSString *_startingUserID;
    NSHashTable *_listeners;
    PHTPhenotypeFlagsSnapshot *_atomicSnapshot;
}

- (void).cxx_destruct;
@property(retain) PHTPhenotypeFlagsSnapshot *atomicSnapshot; // @synthesize atomicSnapshot=_atomicSnapshot;
@property(readonly, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(readonly, nonatomic) NSString *startingUserID; // @synthesize startingUserID=_startingUserID;
@property(nonatomic) _Bool startedLoading; // @synthesize startedLoading=_startedLoading;
@property(nonatomic) _Bool configsLoaded; // @synthesize configsLoaded=_configsLoaded;
@property(readonly, nonatomic) NSCondition *configsLoadedCondition; // @synthesize configsLoadedCondition=_configsLoadedCondition;
@property(readonly, nonatomic) id <PHTPhenotype> phenotype; // @synthesize phenotype=_phenotype;
@property(readonly, copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
- (_Bool)updateWithConfiguration:(id)arg1 userID:(id)arg2 error:(id)arg3;
- (id)snapshot;
- (id)numberArrayForFlagName:(id)arg1 withDefault:(id)arg2;
- (id)stringArrayForFlagName:(id)arg1 withDefault:(id)arg2;
- (id)dataForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)numberForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)stringForFlagName:(id)arg1 defaultValue:(id)arg2;
- (id)valueForFlagName:(id)arg1 withDefault:(id)arg2;
- (void)callListeners:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)commitConfigurationForUserID:(id)arg1;
- (void)update;
@property(copy, nonatomic) NSString *userID;
@property(readonly, nonatomic) long long configurationVersion;
@property(readonly, nonatomic) PHTPhenotypeExperimentTokens *tokens;
@property(readonly, copy, nonatomic) NSString *serverToken;
- (void)configsFinishedLoading;
- (void)waitForConfigsToLoad;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)startLoading;
- (void)dealloc;
- (id)initWithPackageName:(id)arg1;
- (id)initWithPackageName:(id)arg1 userID:(id)arg2;
- (id)initWithPackageName:(id)arg1 userID:(id)arg2 phenotype:(id)arg3 autoUpdate:(_Bool)arg4;
- (id)initWithPackageName:(id)arg1 userID:(id)arg2 phenotype:(id)arg3 autoUpdate:(_Bool)arg4 startLoading:(_Bool)arg5;

@end

