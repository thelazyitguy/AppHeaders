//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdPersistentCacheImpl, NSBlockOperation, NSData, NSOperationQueue, NSString, NSURL;

@interface FBAdAssetPlaceholder : NSObject
{
    _Bool _fetchCompleted;
    unsigned long long _retriesRemaining;
    NSURL *_remoteURL;
    long long _type;
    NSOperationQueue *_queue;
    NSBlockOperation *_fetchOperation;
    FBAdPersistentCacheImpl *_cache;
    FBAdAssetPlaceholder *_retainedSelf;
    NSString *_key;
    NSData *_assetData;
    NSString *_context;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) FBAdAssetPlaceholder *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property(retain, nonatomic) FBAdPersistentCacheImpl *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSBlockOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(nonatomic) _Bool fetchCompleted; // @synthesize fetchCompleted=_fetchCompleted;
@property(nonatomic) unsigned long long retriesRemaining; // @synthesize retriesRemaining=_retriesRemaining;
- (void)fetchAsset;
- (void)addResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithRemoteURL:(id)arg1 key:(id)arg2 ofType:(long long)arg3 cache:(id)arg4 context:(id)arg5;

@end
