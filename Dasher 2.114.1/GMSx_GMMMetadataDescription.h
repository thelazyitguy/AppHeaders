//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class NSMutableArray, NSString;

@interface GMSx_GMMMetadataDescription : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addressLineArray; // @dynamic addressLineArray;
@property(readonly, nonatomic) unsigned long long addressLineArray_Count; // @dynamic addressLineArray_Count;
@property(copy, nonatomic) NSString *derivedTitle; // @dynamic derivedTitle;
@property(copy, nonatomic) NSString *explicitTitle; // @dynamic explicitTitle;
@property(nonatomic) _Bool hasDerivedTitle; // @dynamic hasDerivedTitle;
@property(nonatomic) _Bool hasExplicitTitle; // @dynamic hasExplicitTitle;
@property(nonatomic) _Bool hasPlaceName; // @dynamic hasPlaceName;
@property(nonatomic) _Bool hasTypeSubtitle; // @dynamic hasTypeSubtitle;
@property(copy, nonatomic) NSString *placeName; // @dynamic placeName;
@property(copy, nonatomic) NSString *typeSubtitle; // @dynamic typeSubtitle;

@end
