//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMMediaExtension-Protocol.h"

@class NSString;
@protocol BMChunkCache, BMConnectionModeObservable, BMDataLoader, BMPlayerConfiguration;

@interface BMDefaultMediaExtension : NSObject <BMMediaExtension>
{
    id <BMDataLoader> _dataLoader;
    id <BMChunkCache> _videoChunkCache;
    id <BMPlayerConfiguration> _playerConfiguration;
    id <BMConnectionModeObservable> _connectionModeObservable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BMConnectionModeObservable> connectionModeObservable; // @synthesize connectionModeObservable=_connectionModeObservable;
@property(retain, nonatomic) id <BMPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) id <BMChunkCache> videoChunkCache; // @synthesize videoChunkCache=_videoChunkCache;
@property(retain, nonatomic) id <BMDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (id)resourceLoaderForIdentity:(id)arg1;
- (long long)mediaExtensionPriorityForIdentity:(id)arg1;
- (id)initWithDataLoader:(id)arg1 videoChunkCache:(id)arg2 playerConfiguration:(id)arg3 connectionModeObservable:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
