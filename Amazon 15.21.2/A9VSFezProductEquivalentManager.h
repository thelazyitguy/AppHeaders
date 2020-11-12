//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSFezAdjacencyList, NSMutableDictionary;
@protocol A9VSFezProductCache, OS_dispatch_queue;

@interface A9VSFezProductEquivalentManager : NSObject
{
    id <A9VSFezProductCache> _productCache;
    NSMutableDictionary *_productEquivalentsCache;
    A9VSFezAdjacencyList *_pendingCompletionHandlers;
    NSMutableDictionary *_productEquivalentsRequests;
    NSObject<OS_dispatch_queue> *_productEquivalentsLoadingSerialQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *productEquivalentsLoadingSerialQueue; // @synthesize productEquivalentsLoadingSerialQueue=_productEquivalentsLoadingSerialQueue;
@property(retain, nonatomic) NSMutableDictionary *productEquivalentsRequests; // @synthesize productEquivalentsRequests=_productEquivalentsRequests;
@property(retain, nonatomic) A9VSFezAdjacencyList *pendingCompletionHandlers; // @synthesize pendingCompletionHandlers=_pendingCompletionHandlers;
@property(retain, nonatomic) NSMutableDictionary *productEquivalentsCache; // @synthesize productEquivalentsCache=_productEquivalentsCache;
@property(nonatomic) __weak id <A9VSFezProductCache> productCache; // @synthesize productCache=_productCache;
- (void).cxx_destruct;
- (id)cacheKeyForASIN:(id)arg1 page:(unsigned long long)arg2;
- (void)callAllCompletionHandlersForEquivalents:(id)arg1 withASIN:(id)arg2 cacheKey:(id)arg3 error:(id)arg4;
- (void)safelyCacheProductEquivalents:(id)arg1 cacheKey:(id)arg2;
- (void)fetchProductEquivalentsForASIN:(id)arg1 page:(unsigned long long)arg2;
- (void)cancelProductEquivalentsRequestForASIN:(id)arg1 page:(unsigned long long)arg2;
- (void)loadProductEquivalentsForASIN:(id)arg1 page:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
