//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "AIRModelProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AIRModel : MTLModel <AIRModelProtocol, MTLJSONSerializing>
{
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)mapping;
+ (id)_modelMappingQueue;
+ (_Bool)hasRecursivelyMergedValue:(id)arg1 mergedValues:(id)arg2;
+ (id)mergedValueSetForValue:(id)arg1 mergedValues:(id)arg2;
+ (void)recursivelyMergeValue:(id)arg1 withOtherValue:(id)arg2 mergedValues:(id)arg3;
+ (_Bool)canRecursivelyMergeValue:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 fromModel:(id)arg4;
+ (id)recursivelyMergeableProperties;
+ (_Bool)mergeable;
+ (_Bool)cacheable;
+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONTransformerMap;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)idAttributeName;
+ (id)modelsWithJSONArray:(id)arg1 error:(id *)arg2;
+ (id)modelWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (_Bool)validateNonNull:(id *)arg1 description:(id)arg2 error:(id *)arg3;
+ (_Bool)validateCondition:(_Bool)arg1 description:(id)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)JSONRepresentation;
- (id)modelByMergingWithModel:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;
- (void)mergeValueForKey:(id)arg1 fromModel:(id)arg2 recursivelyMergedValues:(id)arg3;
- (void)mergeValuesForKeysFromModel:(id)arg1 recursivelyMergedValues:(id)arg2;
- (id)valueForIDAttribute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

