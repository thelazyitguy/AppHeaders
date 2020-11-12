//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlaybackCoordinator-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTExternalIntegrationPlaybackServiceImplementation, SPTExternalIntegrationPodcastContentFactory;
@protocol SPTExternalIntegrationTestManagerService, SPTPodcastDataLoader, SPTPodcastEntityDataLoader, SPTPodcastFeature, _TtP17PodcastDALFeature20SPTPodcastDALService_;

@interface SPTExternalIntegrationPodcastPlaybackCoordinatorService : NSObject <SPTService, SPTExternalIntegrationPlaybackCoordinator>
{
    SPTExternalIntegrationPlaybackServiceImplementation *_playbackService;
    id <SPTPodcastFeature> _podcastService;
    id <_TtP17PodcastDALFeature20SPTPodcastDALService_> _podcastDALService;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    SPTExternalIntegrationPodcastContentFactory *_contentFactory;
    id <SPTPodcastEntityDataLoader> _podcastEntityDataLoader;
    id <SPTPodcastDataLoader> _podcastDataLoader;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTPodcastDataLoader> podcastDataLoader; // @synthesize podcastDataLoader=_podcastDataLoader;
@property(readonly, nonatomic) id <SPTPodcastEntityDataLoader> podcastEntityDataLoader; // @synthesize podcastEntityDataLoader=_podcastEntityDataLoader;
@property(readonly, nonatomic) SPTExternalIntegrationPodcastContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <_TtP17PodcastDALFeature20SPTPodcastDALService_> podcastDALService; // @synthesize podcastDALService=_podcastDALService;
@property(readonly, nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(readonly, nonatomic) __weak SPTExternalIntegrationPlaybackServiceImplementation *playbackService; // @synthesize playbackService=_playbackService;
- (id)jsonParsingError:(id)arg1;
- (void)playEpisodes:(id)arg1 withUri:(id)arg2 origin:(id)arg3 skipToTrack:(id)arg4 loggingParams:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)getStartEpisodeUrl:(id)arg1 withEpisodes:(id)arg2;
- (struct _NSRange)getRangeParams:(unsigned long long)arg1 playOptions:(id)arg2;
- (void)playEpisodeWithURI:(id)arg1 options:(id)arg2 origin:(id)arg3 loggingParams:(id)arg4 requestOptions:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)playShowWithURI:(id)arg1 options:(id)arg2 origin:(id)arg3 loggingParams:(id)arg4 requestOptions:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)playCollectionPodcastEpisodes:(id)arg1 options:(id)arg2 origin:(id)arg3 loggingParams:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 origin:(id)arg3 loggingParams:(id)arg4 requestOptions:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (_Bool)canPlayContentWithURI:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
