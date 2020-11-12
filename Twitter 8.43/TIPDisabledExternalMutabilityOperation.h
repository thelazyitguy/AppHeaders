//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/TIPSafeOperation.h>

#import <TwitterImagePipeline/TIPDependencyOperation-Protocol.h>

@class NSString;

@interface TIPDisabledExternalMutabilityOperation : TIPSafeOperation <TIPDependencyOperation>
{
}

- (void)setQualityOfService:(long long)arg1;
- (void)setThreadPriority:(double)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setQueuePriority:(long long)arg1;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)cancel;
- (void)makeDependencyOfTargetOperation:(id)arg1;
- (void)_tip_addDependency:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
