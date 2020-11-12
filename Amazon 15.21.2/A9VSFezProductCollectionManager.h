//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSFezAdjacencyList, NSMutableDictionary;
@protocol A9VSFezProductCache, OS_dispatch_queue;

@interface A9VSFezProductCollectionManager : NSObject
{
    id <A9VSFezProductCache> _productCache;
    NSMutableDictionary *_productCollectionsCache;
    A9VSFezAdjacencyList *_pendingCompletionHandlers;
    NSMutableDictionary *_productCollectionsRequests;
    NSObject<OS_dispatch_queue> *_productCollectionsLoadingSerialQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *productCollectionsLoadingSerialQueue; // @synthesize productCollectionsLoadingSerialQueue=_productCollectionsLoadingSerialQueue;
@property(retain, nonatomic) NSMutableDictionary *productCollectionsRequests; // @synthesize productCollectionsRequests=_productCollectionsRequests;
@property(retain, nonatomic) A9VSFezAdjacencyList *pendingCompletionHandlers; // @synthesize pendingCompletionHandlers=_pendingCompletionHandlers;
@property(retain, nonatomic) NSMutableDictionary *productCollectionsCache; // @synthesize productCollectionsCache=_productCollectionsCache;
@property(nonatomic) __weak id <A9VSFezProductCache> productCache; // @synthesize productCache=_productCache;
- (void).cxx_destruct;
- (void)fetchCollectionsForMultipleASINs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasCollectionWithMoreThanTwoProductsForASINsGroup:(id)arg1;
- (_Bool)hasCollectionWithMoreThanTwoProductsForASIN:(id)arg1;
- (void)callAllCompletionHandlersForCollections:(id)arg1 forASIN:(id)arg2 error:(id)arg3;
- (void)safelyCacheProductCollections:(id)arg1 forASIN:(id)arg2;
- (id)collectionsForASINsGroup:(id)arg1;
- (id)collectionsForASIN:(id)arg1;
- (void)fetchProductCollectionsForASIN:(id)arg1;
- (void)cancelProductCollectionsRequestForASIN:(id)arg1;
- (void)loadProductCollectionsForASIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
