//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GTLRObject.h>

@class GTLRGrowthService_AdditionalUsers, GTLRGrowthService_GrowthRequestHeader, NSArray, NSNumber;

@interface GTLRGrowthService_GetPromosRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRGrowthService_AdditionalUsers *additionalUsers; // @dynamic additionalUsers;
@property(retain, nonatomic) NSArray *application; // @dynamic application;
@property(retain, nonatomic) GTLRGrowthService_GrowthRequestHeader *header; // @dynamic header;
@property(retain, nonatomic) NSArray *presentedPromo; // @dynamic presentedPromo;
@property(retain, nonatomic) NSNumber *writeDebugInfo; // @dynamic writeDebugInfo;

@end

