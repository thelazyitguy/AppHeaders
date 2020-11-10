//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/NSMutableCopying-Protocol.h>
#import <Module_Framework/YTEntity-Protocol.h>

@class NSData, NSDictionary, NSString, YTIEpgRowStateEntity;
@protocol YTEntityStore;

@interface YTEpgRowStateEntityModel : NSObject <YTEntity, NSCopying, NSMutableCopying>
{
    NSString *_key;
    _Bool _parseAndExtractFieldsFromProtoData;
    _Bool _generateData;
    NSData *_data;
    NSDictionary *_entityMetadata;
    id <YTEntityStore> _entityStore;
    YTIEpgRowStateEntity *_protoBuf;
}

- (void).cxx_destruct;
@property(copy, nonatomic) YTIEpgRowStateEntity *protoBuf; // @synthesize protoBuf=_protoBuf;
@property(nonatomic) _Bool generateData; // @synthesize generateData=_generateData;
@property(nonatomic) _Bool parseAndExtractFieldsFromProtoData; // @synthesize parseAndExtractFieldsFromProtoData=_parseAndExtractFieldsFromProtoData;
@property(readonly, nonatomic) id <YTEntityStore> entityStore; // @synthesize entityStore=_entityStore;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @synthesize entityMetadata=_entityMetadata;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (_Bool)isEqualEntityValue:(id)arg1;
- (void)generateDataIfNecessary;
- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)allAssociationKeys;
- (_Bool)isEqualToEntity:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) float stationSectionWidth;
@property(readonly, nonatomic) _Bool hasStationSectionWidth;
@property(readonly, nonatomic) long long currentTimeSeconds;
@property(readonly, nonatomic) _Bool hasCurrentTimeSeconds;
@property(readonly, nonatomic) float itemHeight;
@property(readonly, nonatomic) _Bool hasItemHeight;
@property(readonly, nonatomic) _Bool disableParallax;
@property(readonly, nonatomic) _Bool hasDisableParallax;
@property(readonly, nonatomic) float itemExpandedHeight;
@property(readonly, nonatomic) _Bool hasItemExpandedHeight;
@property(readonly, nonatomic) float itemCollapsedHeight;
@property(readonly, nonatomic) _Bool hasItemCollapsedHeight;
@property(readonly, nonatomic) float itemWidth;
@property(readonly, nonatomic) _Bool hasItemWidth;
@property(readonly, nonatomic) int rowIndex;
@property(readonly, nonatomic) _Bool hasRowIndex;
@property(readonly, nonatomic) float expansionHeight;
@property(readonly, nonatomic) _Bool hasExpansionHeight;
@property(readonly, nonatomic) float expansion;
@property(readonly, nonatomic) _Bool hasExpansion;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly, copy, nonatomic) NSString *entityKey;
- (id)init;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBuf:(id)arg3 protoBufData:(id)arg4 entityMetadata:(id)arg5;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBufData:(id)arg3 entityMetadata:(id)arg4;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBufData:(id)arg3;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2 entityMetadata:(id)arg3;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

