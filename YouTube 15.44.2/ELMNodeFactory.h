//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMNodeFactory : NSObject
{
    struct flat_hash_map<int, __unsafe_unretained Class<ELMDisplayNode>, absl::hash_internal::Hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __unsafe_unretained Class<ELMDisplayNode>>>> _nodeTypeToClass;
    struct flat_hash_map<int, ASDisplayNode<ELMDisplayNode>*(^)(ELMElement *, id<ELMContext>), absl::hash_internal::Hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, ASDisplayNode<ELMDisplayNode>*(^)(ELMElement *, id<ELMContext>)>>> _nodeTypeToCreationBlock;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoreTypes;
- (CDUnknownBlockType)creationBlockForElement:(id)arg1 withContext:(id)arg2;
- (Class)classForElement:(id)arg1 materializationContext:(const struct MaterializationContext *)arg2;
- (Class)classForElement:(id)arg1 withContext:(id)arg2;
- (id)fallBackType:(id)arg1 withContext:(id)arg2;
- (_Bool)canNodeBeLayerBackedForElement:(id)arg1 withContext:(id)arg2;
- (id)nodeWithElement:(id)arg1 materializationContext:(const struct MaterializationContext *)arg2;
- (void)registerNodeClass:(Class)arg1 withCreationBlock:(CDUnknownBlockType)arg2 forTypeExtension:(unsigned int)arg3;
- (void)registerNodeClass:(Class)arg1 forTypeExtension:(unsigned int)arg2;
- (_Bool)canCreateNodeForElement:(id)arg1 withContext:(id)arg2;
- (void)reset;
- (id)init;

@end

