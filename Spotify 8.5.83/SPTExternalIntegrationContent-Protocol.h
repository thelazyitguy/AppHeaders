//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, SPTSkipToTrack;
@protocol SPTExternalIntegrationContentRequestOptions;

@protocol SPTExternalIntegrationContent <NSObject>
- (_Bool)isExplicitContent;
- (_Bool)isAvailableOffline;
@property(nonatomic, readonly) id <SPTExternalIntegrationContentRequestOptions> requestOptions;
- (_Bool)isShufflePlayItem;
@property(nonatomic, readonly) SPTSkipToTrack *skipToTrack;
@property(nonatomic, readonly) NSURL *contextURI;
@property(nonatomic, readonly) NSArray *children;
@property(nonatomic, readonly) NSString *emptyContainerDescription;
- (_Bool)isContainer;
@property(nonatomic, readonly) NSString *backgroundHexColor;
@property(nonatomic, readonly) NSString *source;
@property(nonatomic, readonly) NSString *uniqueId;
- (_Bool)isEpisodePlayed;
@property(nonatomic, readonly) double episodeTimeLeft;
@property(nonatomic, readonly) double duration;
@property(nonatomic, readonly) float playbackProgress;
@property(nonatomic, readonly) long long placeholderIcon;
@property(nonatomic, readonly) NSURL *imageURI;
@property(nonatomic, readonly) NSURL *viewURI;
@property(nonatomic, readonly) NSURL *URI;
@property(nonatomic, readonly) NSString *contentDescription;
@property(nonatomic, readonly) NSString *subtitle;
@property(nonatomic, readonly) NSString *title;

// Remaining properties
@property(nonatomic, readonly) _Bool availableOffline;
@property(nonatomic, readonly) _Bool container;
@property(nonatomic, readonly) _Bool episodePlayed;
@property(nonatomic, readonly) _Bool explicitContent;
@property(nonatomic, readonly) _Bool shufflePlayItem;
@end

