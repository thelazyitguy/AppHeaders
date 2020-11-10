//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerQueue-Protocol.h"

@class NSString;
@protocol SPTPlayer;

@interface SPTPlayerQueueImpl : NSObject <SPTPlayerQueue>
{
    id <SPTPlayer> _player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (id)queueMultipleTracks:(id)arg1;
- (id)queueTrack:(id)arg1;
- (id)queueTrackPlayNext:(id)arg1;
- (id)queueTracksInternal:(id)arg1;
- (id)fetchQueueInternal;
- (id)fetchQueue;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
