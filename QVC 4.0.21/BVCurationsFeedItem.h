//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BVCurationsCoordinates, BVCurationsPostAuthor, NSArray, NSDictionary, NSNumber, NSString;

@interface BVCurationsFeedItem : NSObject
{
    _Bool _hasSentImpressionEvent;
    NSString *_channel;
    NSString *_contentId;
    NSNumber *_rating;
    NSString *_classification;
    NSString *_text;
    NSNumber *_identifier;
    NSNumber *_praises;
    NSString *_explicitPermissionStatus;
    BVCurationsPostAuthor *_author;
    NSArray *_links;
    BVCurationsCoordinates *_coordinates;
    NSArray *_featuredGroups;
    NSArray *_tags;
    NSNumber *_timestamp;
    NSArray *_photos;
    NSArray *_videos;
    NSArray *_referencedProducts;
    NSDictionary *_productDetails;
    NSString *_teaser;
    NSArray *_groups;
    NSString *_permalink;
    NSString *_productId;
    NSString *_language;
    NSString *_token;
    NSString *_place;
    NSString *_replyTo;
    NSString *_sourceClient;
    NSString *_externalId;
}

@property _Bool hasSentImpressionEvent; // @synthesize hasSentImpressionEvent=_hasSentImpressionEvent;
@property(retain) NSString *externalId; // @synthesize externalId=_externalId;
@property(retain) NSString *sourceClient; // @synthesize sourceClient=_sourceClient;
@property(retain) NSString *replyTo; // @synthesize replyTo=_replyTo;
@property(retain) NSString *place; // @synthesize place=_place;
@property(retain) NSString *token; // @synthesize token=_token;
@property(retain) NSString *language; // @synthesize language=_language;
@property(retain) NSString *productId; // @synthesize productId=_productId;
@property(retain) NSString *permalink; // @synthesize permalink=_permalink;
@property(retain) NSArray *groups; // @synthesize groups=_groups;
@property(retain) NSString *teaser; // @synthesize teaser=_teaser;
@property(retain) NSDictionary *productDetails; // @synthesize productDetails=_productDetails;
@property(retain) NSArray *referencedProducts; // @synthesize referencedProducts=_referencedProducts;
@property(retain) NSArray *videos; // @synthesize videos=_videos;
@property(retain) NSArray *photos; // @synthesize photos=_photos;
@property(retain) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSArray *tags; // @synthesize tags=_tags;
@property(retain) NSArray *featuredGroups; // @synthesize featuredGroups=_featuredGroups;
@property(retain) BVCurationsCoordinates *coordinates; // @synthesize coordinates=_coordinates;
@property(retain) NSArray *links; // @synthesize links=_links;
@property(retain) BVCurationsPostAuthor *author; // @synthesize author=_author;
@property(retain) NSString *explicitPermissionStatus; // @synthesize explicitPermissionStatus=_explicitPermissionStatus;
@property(retain) NSNumber *praises; // @synthesize praises=_praises;
@property(retain) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSString *classification; // @synthesize classification=_classification;
@property(retain) NSNumber *rating; // @synthesize rating=_rating;
@property(retain) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)description;
- (void)recordTap;
- (void)recordImpression;
- (id)getVideos:(id)arg1;
- (id)getPhotos:(id)arg1;
- (id)initWithDict:(id)arg1 withReferencedProducts:(id)arg2;
- (id)initWithDict:(id)arg1 withReferencedProducts:(id)arg2 withExternalId:(id)arg3;

@end
