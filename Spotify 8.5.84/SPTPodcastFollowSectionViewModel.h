//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastViewModelSection-Protocol.h"

@class NSString;
@protocol SPTPodcast, SPTPodcastFollowSectionViewModelDelegate, SPTPodcastTestManager;

@interface SPTPodcastFollowSectionViewModel : NSObject <SPTPodcastViewModelSection>
{
    _Bool _playing;
    double _headerHeight;
    id <SPTPodcastFollowSectionViewModelDelegate> _delegate;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTPodcast> _podcast;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPodcast> podcast; // @synthesize podcast=_podcast;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) __weak id <SPTPodcastFollowSectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (long long)identifier;
- (void)updateWithPodcast:(id)arg1;
@property(readonly, nonatomic, getter=isFollowingPodcast) _Bool followingPodcast;
- (void)updateWithPodcastPlayer:(id)arg1;
- (void)contextMenuButtonSelected:(id)arg1;
- (void)playbackButtonSelected;
- (id)header;
- (unsigned long long)numberOfRows;
- (id)initWithPodcastTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
