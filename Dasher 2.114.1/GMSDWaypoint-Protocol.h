//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSCopying-Protocol.h>
#import <NavigationFramework/NSMutableCopying-Protocol.h>
#import <NavigationFramework/NSObject-Protocol.h>
#import <NavigationFramework/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@protocol GMSDWaypoint <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) int source;
@property(readonly, copy, nonatomic) NSString *singleLineAddress;
@property(readonly, copy, nonatomic) NSString *shortDescription;
@property(readonly, copy, nonatomic) NSString *query;
@property(readonly, copy, nonatomic) NSString *placeID;
@property(readonly, nonatomic) _Bool isSourceMyLocation;
@property(readonly, copy, nonatomic) NSArray *indoorLevelRefs;
@property(readonly, copy, nonatomic) NSString *featureIDString;
@property(readonly, nonatomic) _Bool featureIDIsValid;
@property(readonly, nonatomic) struct GMSFeatureID featureID;
@property(readonly, nonatomic, getter=isCoordinateValid) _Bool coordinateValid;
@property(readonly, nonatomic) struct GMSCoordinate coordinate;
- (id)copy;
- (id)mutableCopy;
@end

