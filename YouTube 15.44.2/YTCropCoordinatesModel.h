//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/NSMutableCopying-Protocol.h>

@class NSData, YTICropCoordinates;
@protocol YTEntityStore;

@interface YTCropCoordinatesModel : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _parseAndExtractFieldsFromProtoData;
    _Bool _generateData;
    NSData *_data;
    id <YTEntityStore> _entityStore;
    YTICropCoordinates *_protoBuf;
}

- (void).cxx_destruct;
@property(copy, nonatomic) YTICropCoordinates *protoBuf; // @synthesize protoBuf=_protoBuf;
@property(nonatomic) _Bool generateData; // @synthesize generateData=_generateData;
@property(nonatomic) _Bool parseAndExtractFieldsFromProtoData; // @synthesize parseAndExtractFieldsFromProtoData=_parseAndExtractFieldsFromProtoData;
@property(readonly, nonatomic) id <YTEntityStore> entityStore; // @synthesize entityStore=_entityStore;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (_Bool)isEqualEntityValue:(id)arg1;
- (void)generateDataIfNecessary;
- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)allAssociationKeys;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double bottom;
@property(readonly, nonatomic) _Bool hasBottom;
@property(readonly, nonatomic) double right;
@property(readonly, nonatomic) _Bool hasRight;
@property(readonly, nonatomic) double top;
@property(readonly, nonatomic) _Bool hasTop;
@property(readonly, nonatomic) double left;
@property(readonly, nonatomic) _Bool hasLeft;
- (id)entityVersion;
- (id)init;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBuf:(id)arg3 protoBufData:(id)arg4;
- (id)initWithEntityStore:(id)arg1 protoBufData:(id)arg2;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2;

@end

