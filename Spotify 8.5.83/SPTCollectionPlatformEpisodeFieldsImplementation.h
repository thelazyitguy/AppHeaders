//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformEpisodeFields-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface SPTCollectionPlatformEpisodeFieldsImplementation : NSObject <SPTCollectionPlatformEpisodeFields>
{
    _Bool _isExplicit;
    _Bool _isPlayed;
    _Bool _isMusicAndTalk;
    _Bool _isBackgroundable;
    _Bool _isInYourEpisodes;
    NSString *_name;
    NSURL *_URL;
    NSString *_showName;
    NSString *_publisherName;
    NSString *_previewID;
    NSDate *_publishDate;
    double _length;
    double _timeLeft;
    unsigned long long _playStateRestriction;
    NSArray *_musicAndTalkArtists;
    NSDictionary *_covers;
    NSDictionary *_freezeFrames;
    NSString *_mediaType;
    NSString *_freeformDescription;
    NSString *_manifestID;
    unsigned long long _offlineState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInYourEpisodes; // @synthesize isInYourEpisodes=_isInYourEpisodes;
@property(nonatomic) unsigned long long offlineState; // @synthesize offlineState=_offlineState;
@property(nonatomic) _Bool isBackgroundable; // @synthesize isBackgroundable=_isBackgroundable;
@property(copy, nonatomic) NSString *manifestID; // @synthesize manifestID=_manifestID;
@property(copy, nonatomic) NSString *freeformDescription; // @synthesize freeformDescription=_freeformDescription;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSDictionary *freezeFrames; // @synthesize freezeFrames=_freezeFrames;
@property(copy, nonatomic) NSDictionary *covers; // @synthesize covers=_covers;
@property(copy, nonatomic) NSArray *musicAndTalkArtists; // @synthesize musicAndTalkArtists=_musicAndTalkArtists;
@property(nonatomic) _Bool isMusicAndTalk; // @synthesize isMusicAndTalk=_isMusicAndTalk;
@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(nonatomic) unsigned long long playStateRestriction; // @synthesize playStateRestriction=_playStateRestriction;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) double timeLeft; // @synthesize timeLeft=_timeLeft;
@property(nonatomic) double length; // @synthesize length=_length;
@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSString *previewID; // @synthesize previewID=_previewID;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
