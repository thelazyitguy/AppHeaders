//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGooglePersonalizationAssistAnnotateApiAddress, ComGooglePersonalizationAssistAnnotateApiAlias_LocationType, ComGooglePersonalizationAssistAnnotateApiGeoLocation, NSString;

@protocol ComGooglePersonalizationAssistAnnotateApiAliasOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getPlaceId;
- (_Bool)hasPlaceId;
- (NSString *)getPlaceReference;
- (_Bool)hasPlaceReference;
- (ComGooglePersonalizationAssistAnnotateApiGeoLocation *)getLatlng;
- (_Bool)hasLatlng;
- (ComGooglePersonalizationAssistAnnotateApiAddress *)getAddress;
- (_Bool)hasAddress;
- (NSString *)getCategoryId;
- (_Bool)hasCategoryId;
- (NSString *)getMetadata;
- (_Bool)hasMetadata;
- (ComGooglePersonalizationAssistAnnotateApiAlias_LocationType *)getLocationType;
- (_Bool)hasLocationType;
- (NSString *)getName;
- (_Bool)hasName;
- (NSString *)getSyncId;
- (_Bool)hasSyncId;
@end
