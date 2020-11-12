//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBAdSyncDelegate-Protocol.h>
#import <Funny/FBAdSyncMediator-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol FBAdSync;

@interface FBAdSyncMediatorImpl : NSObject <FBAdSyncDelegate, FBAdSyncMediator>
{
    id <FBAdSync> _sync;
    id <FBAdSync> _noPIISync;
    NSMutableDictionary *_blocks;
    NSMutableDictionary *_noPIIBlocks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *noPIIBlocks; // @synthesize noPIIBlocks=_noPIIBlocks;
@property(readonly, nonatomic) NSMutableDictionary *blocks; // @synthesize blocks=_blocks;
@property(readonly, nonatomic) id <FBAdSync> noPIISync; // @synthesize noPIISync=_noPIISync;
@property(readonly, nonatomic) id <FBAdSync> sync; // @synthesize sync=_sync;
- (void)sync:(id)arg1 didFailSynchronizationWithError:(id)arg2;
- (void)syncDidCompleteSynchronization:(id)arg1;
- (void)notifyAboutSynchronizationFinishedNoPII:(_Bool)arg1;
- (void)addHandler:(CDUnknownBlockType)arg1 noPII:(_Bool)arg2 forBundle:(id)arg3 identifier:(id)arg4;
- (void)createBundleWithBundleId:(id)arg1 noPII:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithSync:(id)arg1 noPIISync:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
