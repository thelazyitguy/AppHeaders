//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEpgRowStateEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface YTMutableEpgRowStateEntityModel : YTEpgRowStateEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @dynamic entityMetadata;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) float stationSectionWidth; // @dynamic stationSectionWidth;
@property(nonatomic) long long currentTimeSeconds; // @dynamic currentTimeSeconds;
@property(nonatomic) float itemHeight; // @dynamic itemHeight;
@property(nonatomic) _Bool disableParallax; // @dynamic disableParallax;
@property(nonatomic) float itemExpandedHeight; // @dynamic itemExpandedHeight;
@property(nonatomic) float itemCollapsedHeight; // @dynamic itemCollapsedHeight;
@property(nonatomic) float itemWidth; // @dynamic itemWidth;
@property(nonatomic) int rowIndex; // @dynamic rowIndex;
@property(nonatomic) float expansionHeight; // @dynamic expansionHeight;
@property(nonatomic) float expansion; // @dynamic expansion;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

