//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTAudioSession-Protocol.h>

@protocol MLAudioSession <YTAudioSession>
+ (id)new;
+ (id)alloc;
- (void)doneWithVoiceSearch;
- (_Bool)activateForVoiceSearch;
- (void)doneWithRecording;
- (_Bool)activateForRecording;
- (void)doneWithPlaybackForTaskID:(int)arg1;
- (int)activateForPlayback;
@end

