//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTOfflineSyncModelDelegate;

@protocol SPTOfflineSyncModel <NSObject>
- (void)loadModel;
@property(nonatomic, readonly) double progress;
- (_Bool)isSyncing;
@property(nonatomic, readonly) long long totalTracks;
@property(nonatomic, readonly) long long syncedTracks;
@property(nonatomic) __weak id <SPTOfflineSyncModelDelegate> delegate;
- (_Bool)isLoaded;

// Remaining properties
@property(nonatomic, readonly) _Bool loaded;
@property(nonatomic, readonly) _Bool syncing;
@end
