//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileConcertsEntity_FindTicketsButtonEventFactory, SPTUBIMobileConcertsEntity_LineupCarouselEventFactory, SPTUBIMobileConcertsEntity_ListenToTheirMusicEventFactory, SPTUBIMobileConcertsEntity_RelatedConcertsListEventFactory, SPTUBIMobileConcertsEntity_SeeMoreConcertsButtonEventFactory, SPTUBIMobileConcertsEntity_ShareButtonEventFactory;

@protocol SPTUBIMobileConcertsEntityEventFactory <NSObject>
- (id <SPTUBIMobileConcertsEntity_SeeMoreConcertsButtonEventFactory>)seeMoreConcertsButtonFactory;
- (id <SPTUBIMobileConcertsEntity_RelatedConcertsListEventFactory>)relatedConcertsListFactory;
- (id <SPTUBIMobileConcertsEntity_ListenToTheirMusicEventFactory>)listenToTheirMusicFactory;
- (id <SPTUBIMobileConcertsEntity_LineupCarouselEventFactory>)lineupCarouselFactory;
- (id <SPTUBIMobileConcertsEntity_FindTicketsButtonEventFactory>)findTicketsButtonFactory;
- (id <SPTUBIMobileConcertsEntity_ShareButtonEventFactory>)shareButtonFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

