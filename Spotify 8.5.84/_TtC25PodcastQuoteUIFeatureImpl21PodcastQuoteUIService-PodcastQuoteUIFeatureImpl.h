//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC25PodcastQuoteUIFeatureImpl21PodcastQuoteUIService.h"

@protocol SPTPodcastQuoteUIComponentFactory;

@interface _TtC25PodcastQuoteUIFeatureImpl21PodcastQuoteUIService (PodcastQuoteUIFeatureImpl)
+ (id)serviceIdentifier;
- (id)providePodcastQuotesViewControllerWithEpisodeURI:(id)arg1 context:(id)arg2;
@property(nonatomic, readonly) id <SPTPodcastQuoteUIComponentFactory> componentFactory;
- (void)unload;
- (void)load;
@end

