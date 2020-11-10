//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSIndexPath, NSString, NSURL, SPTPlayOrigin, SPTPlaybackQuality, SPTPlayerOptions, SPTPlayerRestrictions, SPTPlayerSuppressions, SPTPlayerTrack;

@interface SPTPlayerState : NSObject <NSCopying>
{
    _Bool _playing;
    _Bool _loading;
    _Bool _paused;
    _Bool _buffering;
    NSDate *_timestamp;
    NSURL *_contextURI;
    NSURL *_contextURL;
    SPTPlayOrigin *_playOrigin;
    SPTPlayerTrack *_track;
    NSString *_playbackId;
    NSIndexPath *_index;
    SPTPlaybackQuality *_playbackQuality;
    double _playbackSpeed;
    double _positionAsOfTimestamp;
    double _duration;
    SPTPlayerOptions *_options;
    SPTPlayerRestrictions *_restrictions;
    SPTPlayerSuppressions *_suppressions;
    NSArray *_future;
    NSArray *_reverse;
    NSDictionary *_contextMetadata;
    NSDictionary *_pageMetadata;
    NSDictionary *_dictionary;
}

+ (_Bool)isDailyMixContext:(id)arg1;
+ (_Bool)isCarMixContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSDictionary *pageMetadata; // @synthesize pageMetadata=_pageMetadata;
@property(readonly, nonatomic) NSDictionary *contextMetadata; // @synthesize contextMetadata=_contextMetadata;
@property(retain, nonatomic) NSArray *reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) NSArray *future; // @synthesize future=_future;
@property(readonly, nonatomic) SPTPlayerSuppressions *suppressions; // @synthesize suppressions=_suppressions;
@property(retain, nonatomic) SPTPlayerRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) SPTPlayerOptions *options; // @synthesize options=_options;
@property(nonatomic, getter=isBuffering) _Bool buffering; // @synthesize buffering=_buffering;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double positionAsOfTimestamp; // @synthesize positionAsOfTimestamp=_positionAsOfTimestamp;
@property(nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(retain, nonatomic) SPTPlaybackQuality *playbackQuality; // @synthesize playbackQuality=_playbackQuality;
@property(retain, nonatomic) NSIndexPath *index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(readonly, nonatomic) NSURL *contextURL; // @synthesize contextURL=_contextURL;
@property(retain, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic, readonly) _Bool isMusicVideo;
- (_Bool)spt_hasDifferentTrackOptionsOrContextThanState:(id)arg1;
- (id)filterEmptyRestrictions:(id)arg1;
- (id)preprocessForDisplay;
- (_Bool)spt_isPodcastAdvertisement;
@property(readonly, nonatomic) double position;

@end

