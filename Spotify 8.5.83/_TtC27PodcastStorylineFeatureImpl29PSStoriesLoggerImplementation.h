//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@interface _TtC27PodcastStorylineFeatureImpl29PSStoriesLoggerImplementation : _TtCs12_SwiftObject
{
    // Error parsing type: , name: interactionHandler
    // Error parsing type: , name: impressionHandler
    // Error parsing type: , name: ubiEventFactory
}

- (void)logStoryImpressionWithPosition:(long long)arg1 uri:(id)arg2;
- (void)logPlayAndNavigateToRecommendedEpisodeWithPosition:(long long)arg1 uri:(id)arg2 destination:(id)arg3;
- (void)logNavigateToRecommendedEpisodeWithPosition:(long long)arg1 uri:(id)arg2 destination:(id)arg3;
- (void)logInfoWithPosition:(long long)arg1 uri:(id)arg2 destination:(id)arg3;
- (void)logFollowWithPosition:(long long)arg1 uri:(id)arg2 following:(_Bool)arg3;
- (void)logShareWithPosition:(long long)arg1 uri:(id)arg2 shareId:(id)arg3;
- (void)logPodcastImageTappedWithPosition:(long long)arg1 uri:(id)arg2 destination:(id)arg3;
- (void)logSkipToNextWithPosition:(long long)arg1 uri:(id)arg2;
- (void)logSkipToPreviousWithPosition:(long long)arg1 uri:(id)arg2;
- (void)logSwipeRightWithPosition:(long long)arg1 uri:(id)arg2;
- (void)logSwipeLeftWithPosition:(long long)arg1 uri:(id)arg2;
- (void)logSwipeNavigateBackWithPosition:(long long)arg1 uri:(id)arg2;
- (void)logTitleRevealWithPosition:(long long)arg1 uri:(id)arg2;
- (void)logCloseButtonTapped;

@end

