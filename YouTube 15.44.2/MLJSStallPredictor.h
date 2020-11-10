//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMStallPredictor-Protocol.h>

@class MLJSVMContext, NSString;
@protocol HAMNetworkStatsProvider;

@interface MLJSStallPredictor : NSObject <HAMStallPredictor>
{
    id <HAMNetworkStatsProvider> _networkStatsProvider;
    CDUnknownBlockType _bandwidthTweakBlock;
    MLJSVMContext *_context;
    unique_ptr_a2c3be4c _stallPredictor;
}

+ (id)createWithContext:(id)arg1 config:(id)arg2 bandwidthTweakBlock:(CDUnknownBlockType)arg3 networkStatsProvider:(id)arg4 error:(id *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isStallLikelyForTrackRenderer:(id)arg1 atTime:(CDStruct_576a8307)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 stallPredictor:(unique_ptr_a2c3be4c *)arg2 bandwidthTweakBlock:(CDUnknownBlockType)arg3 networkStatsProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
