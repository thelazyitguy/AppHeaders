//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BMPlaybackRequestFactory;
@protocol BMBetamaxOfflineManager, SPTVideoCacheOptionsFactory, SPTVideoMediaURLFactory, SPTVideoPlayerFactory;

@protocol SPTVideoFeature <NSObject>
- (id <SPTVideoMediaURLFactory>)provideMediaURLFactory;
- (id <BMBetamaxOfflineManager>)provideOfflineManager;
- (BMPlaybackRequestFactory *)providePlaybackRequestFactory;
- (id <SPTVideoPlayerFactory>)providePlayerFactory;
- (id <SPTVideoCacheOptionsFactory>)provideVideoCacheOptionsFactory;
@end

