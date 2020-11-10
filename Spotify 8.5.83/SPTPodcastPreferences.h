//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SPTObserverManager;
@protocol SPTResolver;

@interface SPTPodcastPreferences : NSObject
{
    NSNumber *_currentPodcastPlaybackSpeed;
    id <SPTResolver> _resolver;
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) NSNumber *currentPodcastPlaybackSpeed; // @synthesize currentPodcastPlaybackSpeed=_currentPodcastPlaybackSpeed;
- (id)newPlaybackSpeed:(id)arg1 toJSON:(id *)arg2;
- (void)save:(id)arg1 oldSpeed:(id)arg2;
- (void)updateCurrentPodcastPlaybackSpeed:(id)arg1;
- (void)getCurrentPlaybackSpeed;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithResolver:(id)arg1;

@end

