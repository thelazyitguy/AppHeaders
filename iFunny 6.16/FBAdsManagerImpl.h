//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBAdsManager-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface FBAdsManagerImpl : NSObject <FBAdsManager>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cachedAdControllers;
    NSMutableSet *_adObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *adObjects; // @synthesize adObjects=_adObjects;
@property(retain, nonatomic) NSMutableDictionary *cachedAdControllers; // @synthesize cachedAdControllers=_cachedAdControllers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)releaseAdObject:(id)arg1;
- (void)retainAdObject:(id)arg1;
- (id)keyFromPlacementID:(id)arg1 placementType:(long long)arg2;
- (id)cachedAdControllerForPlacementID:(id)arg1 placementType:(long long)arg2;
- (void)cacheAdController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
