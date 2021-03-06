//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALXQueuePlayerDelegate-Protocol.h"

@class ALXAudioChannel, NSDictionary, NSHashTable, NSString;

@interface ALXAudioChannelManager : NSObject <ALXQueuePlayerDelegate>
{
    NSDictionary *_audioChannelPlayers;
    ALXAudioChannel *_previouslyPlayingChannel;
    NSHashTable *_delegates;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) ALXAudioChannel *previouslyPlayingChannel; // @synthesize previouslyPlayingChannel=_previouslyPlayingChannel;
@property(retain, nonatomic) NSDictionary *audioChannelPlayers; // @synthesize audioChannelPlayers=_audioChannelPlayers;
- (void).cxx_destruct;
- (_Bool)isPlayingContentChannelAudio;
- (void)playerReachedEndOfQueue:(id)arg1;
- (void)player:(id)arg1 playbackFinishedStallingOnTrack:(id)arg2;
- (void)player:(id)arg1 playbackStartedStallingOnTrack:(id)arg2;
- (void)player:(id)arg1 failedToPlayToEndOfTrack:(id)arg2 withError:(id)arg3;
- (void)player:(id)arg1 didQueueTrack:(id)arg2;
- (void)player:(id)arg1 wasInterruptedWhilePlayingTrack:(id)arg2 atSnapshot:(id)arg3;
- (void)player:(id)arg1 didStopTrack:(id)arg2 atSnapshot:(id)arg3;
- (void)player:(id)arg1 didResumePlayingTrack:(id)arg2;
- (void)player:(id)arg1 didPauseTrack:(id)arg2;
- (void)player:(id)arg1 nearlyFinishedPlayingTrack:(id)arg2;
- (void)player:(id)arg1 didFinishPlayingTrack:(id)arg2 atSnapshot:(id)arg3;
- (void)player:(id)arg1 didStartPlayingTrack:(id)arg2;
- (void)play:(id)arg1 onChannel:(id)arg2;
- (void)callbackForEachDelegateUsingBlock:(CDUnknownBlockType)arg1;
- (void)playTrack:(id)arg1 onChannel:(id)arg2 withPlayBehavior:(unsigned long long)arg3;
- (id)audioChannelForPlayer:(id)arg1;
- (id)playerForChannelType:(unsigned long long)arg1;
- (id)audioChannelForType:(unsigned long long)arg1;
- (id)highestPriorityChannelInChannels:(id)arg1;
- (id)currentlyPlayingChannel;
- (unsigned long long)currentOffsetInMillisOnChannelOfType:(unsigned long long)arg1;
- (void)clearOnChannelOfType:(unsigned long long)arg1 withClearBehavior:(unsigned long long)arg2;
- (void)stopPlaybackOnAllChannels;
- (void)resumePreviouslyInterruptedChannel;
- (void)interruptCurrentlyPlayingChannel;
- (void)stopOnChannelOfType:(unsigned long long)arg1;
- (void)resumeOnChannelOfType:(unsigned long long)arg1;
- (void)pauseOnChannelOfType:(unsigned long long)arg1;
- (void)playAudioTrack:(id)arg1 withPlayBehavior:(unsigned long long)arg2 onChannelWithType:(unsigned long long)arg3;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (id)initWithChannelPlayers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

