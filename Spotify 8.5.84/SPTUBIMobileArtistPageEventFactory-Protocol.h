//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileArtistPage_AppearsOnEventFactory, SPTUBIMobileArtistPage_ArtistFanFundingEventFactory, SPTUBIMobileArtistPage_ArtistPickEventFactory, SPTUBIMobileArtistPage_ArtistsPlaylistEventFactory, SPTUBIMobileArtistPage_BiographyEventFactory, SPTUBIMobileArtistPage_ConcertsEventFactory, SPTUBIMobileArtistPage_FansAlsoLikeEventFactory, SPTUBIMobileArtistPage_FeaturingEventFactory, SPTUBIMobileArtistPage_HeaderEventFactory, SPTUBIMobileArtistPage_LikedTracksEventFactory, SPTUBIMobileArtistPage_MerchEventFactory, SPTUBIMobileArtistPage_PopularReleasesEventFactory, SPTUBIMobileArtistPage_TopTracksEventFactory, SPTUBIMobileArtistPage_TrackCloudEventFactory, SPTUBIMobileArtistPage_UnknownComponentEventFactory;

@protocol SPTUBIMobileArtistPageEventFactory <NSObject>
- (id <SPTUBIMobileArtistPage_UnknownComponentEventFactory>)unknownComponentFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileArtistPage_BiographyEventFactory>)biographyFactory;
- (id <SPTUBIMobileArtistPage_ConcertsEventFactory>)concertsFactory;
- (id <SPTUBIMobileArtistPage_MerchEventFactory>)merchFactory;
- (id <SPTUBIMobileArtistPage_ArtistFanFundingEventFactory>)artistFanFundingFactory;
- (id <SPTUBIMobileArtistPage_ArtistsPlaylistEventFactory>)artistsPlaylistFactory;
- (id <SPTUBIMobileArtistPage_FansAlsoLikeEventFactory>)fansAlsoLikeFactory;
- (id <SPTUBIMobileArtistPage_AppearsOnEventFactory>)appearsOnFactory;
- (id <SPTUBIMobileArtistPage_FeaturingEventFactory>)featuringFactory;
- (id <SPTUBIMobileArtistPage_PopularReleasesEventFactory>)popularReleasesFactory;
- (id <SPTUBIMobileArtistPage_ArtistPickEventFactory>)artistPickFactory;
- (id <SPTUBIMobileArtistPage_TrackCloudEventFactory>)trackCloudFactory;
- (id <SPTUBIMobileArtistPage_TopTracksEventFactory>)topTracksFactory;
- (id <SPTUBIMobileArtistPage_LikedTracksEventFactory>)likedTracksFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileArtistPage_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end
