//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSURL, SPTLoggingParams;
@protocol _TtP23YourEpisodesFeatureImpl26YourEpisodesPlayerDelegate_;

@protocol _TtP23YourEpisodesFeatureImpl18YourEpisodesPlayer_
@property(nonatomic) __weak id <_TtP23YourEpisodesFeatureImpl26YourEpisodesPlayerDelegate_> delegate;
@property(nonatomic, readonly) _Bool isPlayingYourEpisodes;
- (void)togglePlayWithLoggingParams:(SPTLoggingParams *)arg1 itemsProvider:(NSArray * (^)(void))arg2;
- (_Bool)isPlayingWithEpisodeURL:(NSURL *)arg1;
- (_Bool)isActiveWithEpisodeURL:(NSURL *)arg1;
@end
