//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface VASRequestMetadataBuilder : NSObject
{
    NSDictionary *_appData;
    NSDictionary *_userData;
    NSDictionary *_placementData;
    NSDictionary *_extras;
    NSArray *_supportedOrientations;
    NSMutableDictionary *_internalAppData;
    NSMutableDictionary *_internalUserData;
    NSMutableDictionary *_internalPlacementData;
}

+ (id)if_create;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *internalPlacementData; // @synthesize internalPlacementData=_internalPlacementData;
@property(retain, nonatomic) NSMutableDictionary *internalUserData; // @synthesize internalUserData=_internalUserData;
@property(retain, nonatomic) NSMutableDictionary *internalAppData; // @synthesize internalAppData=_internalAppData;
@property(copy, nonatomic) NSArray *supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(copy, nonatomic) NSDictionary *placementData; // @synthesize placementData=_placementData;
@property(copy, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSDictionary *appData; // @synthesize appData=_appData;
- (id)description;
- (id)build;
@property(copy, nonatomic) NSString *placementImpressionGroup;
@property(copy, nonatomic) NSString *mediator;
@property(copy, nonatomic) NSArray *userKeywords;
@property(copy, nonatomic) NSString *userDMA;
@property(copy, nonatomic) NSString *userPostalCode;
@property(copy, nonatomic) NSString *userCountry;
@property(copy, nonatomic) NSString *userState;
@property(copy, nonatomic) NSDate *userDOB;
@property(copy, nonatomic) NSString *userPolitics;
@property(copy, nonatomic) NSString *userMaritalStatus;
@property(copy, nonatomic) NSString *userGender;
@property(copy, nonatomic) NSString *userEthnicity;
@property(copy, nonatomic) NSString *userEducation;
@property(copy, nonatomic) NSNumber *userIncome;
@property(copy, nonatomic) NSNumber *userChildren;
@property(copy, nonatomic) NSNumber *userAge;
- (id)initWithAppData:(id)arg1 userData:(id)arg2 placementData:(id)arg3 extras:(id)arg4 supportedOrientations:(id)arg5;
- (id)initWithRequestMetadata:(id)arg1;
- (id)init;

@end
