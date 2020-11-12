//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CDVContact : NSObject
{
    void *record;
    NSDictionary *returnFields;
}

+ (id)calcReturnFields:(id)arg1;
+ (_Bool)isValidW3ContactType:(id)arg1;
+ (id)convertPropertyLabelToContactType:(id)arg1;
+ (struct __CFString *)convertContactTypeToPropertyLabel:(id)arg1;
+ (_Bool)needsConversion:(id)arg1;
+ (id)defaultFields;
+ (id)defaultObjectAndProperties;
+ (id)defaultW3CtoNull;
+ (id)defaultW3CtoAB;
+ (id)defaultABtoW3C;
@property(retain, nonatomic) NSDictionary *returnFields; // @synthesize returnFields;
- (void).cxx_destruct;
- (_Bool)searchContactFields:(id)arg1 forMVDictionaryProperty:(int)arg2 withValue:(id)arg3;
- (id)labelsForProperty:(int)arg1 inRecord:(void *)arg2;
- (id)valuesForProperty:(int)arg1 inRecord:(void *)arg2;
- (_Bool)testMultiValueStrings:(id)arg1 forProperty:(int)arg2 ofType:(id)arg3;
- (_Bool)searchContactFields:(id)arg1 forMVStringProperty:(int)arg2 withValue:(id)arg3;
- (_Bool)testDateValue:(id)arg1 forW3CProperty:(id)arg2;
- (_Bool)testStringValue:(id)arg1 forW3CProperty:(id)arg2;
- (_Bool)foundValue:(id)arg1 inFields:(id)arg2;
- (id)extractPhotos;
- (id)extractOrganizations;
- (id)extractIms;
- (id)extractAddresses;
- (id)extractMultiValue:(id)arg1;
- (id)extractName;
- (id)getDateAsNumber:(int)arg1;
- (id)toDictionary:(id)arg1;
- (_Bool)setMultiValueDictionary:(id)arg1 forProperty:(int)arg2 inRecord:(void *)arg3 asUpdate:(_Bool)arg4;
- (id)translateW3Dict:(id)arg1 forProperty:(int)arg2;
- (void *)allocDictMultiValueFromArray:(id)arg1 forProperty:(int)arg2;
- (_Bool)setMultiValueStrings:(id)arg1 forProperty:(int)arg2 inRecord:(void *)arg3 asUpdate:(_Bool)arg4;
- (_Bool)setValue:(void *)arg1 forProperty:(int)arg2 inRecord:(void *)arg3;
- (void *)allocStringMultiValueFromArray:(id)arg1;
- (_Bool)addToMultiValue:(void *)arg1 fromDictionary:(id)arg2;
- (_Bool)removeProperty:(int)arg1 inRecord:(void *)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(int)arg2 inRecord:(void *)arg3 asUpdate:(_Bool)arg4;
- (_Bool)setFromContactDict:(id)arg1 asUpdate:(_Bool)arg2;
@property(nonatomic) void *record;
- (id)initFromABRecord:(void *)arg1;
- (id)init;

@end
