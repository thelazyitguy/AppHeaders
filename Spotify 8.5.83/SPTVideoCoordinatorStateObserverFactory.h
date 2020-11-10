//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserverFactory-Protocol.h"

@class NSString, SPTVideoCoordinatorCosmosSender, SPTVideoPlaybackStateFactory;

@interface SPTVideoCoordinatorStateObserverFactory : NSObject <BMEventObserverFactory>
{
    SPTVideoCoordinatorCosmosSender *_cosmosSender;
    SPTVideoPlaybackStateFactory *_playbackStateFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTVideoPlaybackStateFactory *playbackStateFactory; // @synthesize playbackStateFactory=_playbackStateFactory;
@property(retain, nonatomic) SPTVideoCoordinatorCosmosSender *cosmosSender; // @synthesize cosmosSender=_cosmosSender;
- (id)createPlaybackEventObserverForPlaybackIdentity:(id)arg1 options:(id)arg2 timeObservable:(id)arg3;
- (id)initWithCosmosSender:(id)arg1 playbackStateFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

