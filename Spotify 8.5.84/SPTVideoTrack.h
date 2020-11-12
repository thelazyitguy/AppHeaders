//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString, SPTPlayOrigin, SPTPlayerTrack;

@interface SPTVideoTrack : SPTVideoPlayerMessage
{
    SPTPlayerTrack *_track;
    SPTPlayOrigin *_origin;
    NSString *_playbackID;
    NSString *_contextURI;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contextURI; // @synthesize contextURI=_contextURI;
@property(readonly, nonatomic) NSString *playbackID; // @synthesize playbackID=_playbackID;
@property(readonly, nonatomic) SPTPlayOrigin *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isAdvertisement;
- (_Bool)isBackgroundable;
- (id)serializedDictionary;
- (id)initWithTrack:(id)arg1 origin:(id)arg2 playbackID:(id)arg3 contextURI:(id)arg4;
- (id)initWithDictionary:(id)arg1;

@end
