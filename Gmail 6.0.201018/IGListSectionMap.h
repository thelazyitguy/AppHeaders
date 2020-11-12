//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray;

@interface IGListSectionMap : NSObject <NSCopying>
{
    NSMapTable *_objectToSectionControllerMap;
    NSMapTable *_sectionControllerToSectionMap;
    NSMutableArray *_mObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mObjects; // @synthesize mObjects=_mObjects;
@property(readonly, nonatomic) NSMapTable *sectionControllerToSectionMap; // @synthesize sectionControllerToSectionMap=_sectionControllerToSectionMap;
@property(readonly, nonatomic) NSMapTable *objectToSectionControllerMap; // @synthesize objectToSectionControllerMap=_objectToSectionControllerMap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateObject:(id)arg1;
- (void)reset;
- (long long)sectionForObject:(id)arg1;
- (id)objectForSection:(long long)arg1;
- (id)sectionControllerForObject:(id)arg1;
- (void)updateWithObjects:(id)arg1 sectionControllers:(id)arg2;
- (id)sectionControllerForSection:(long long)arg1;
- (long long)sectionForSectionController:(id)arg1;
@property(readonly, nonatomic) NSArray *objects;
- (id)initWithMapTable:(id)arg1;
- (id)debugDescriptionLines;

@end
