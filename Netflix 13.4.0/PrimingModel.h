//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSPointerArray, NSString, PrimingLoader;
@protocol OS_dispatch_queue, PrimingModelDelegate;

@interface PrimingModel : NSObject
{
    _Bool _loaded;
    PrimingLoader *_loader;
    id <PrimingModelDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_modelAccessQueue;
    NSDictionary *_model;
    NSPointerArray *_listRefreshBindings;
}

+ (void)callLolomoCompletion:(CDUnknownBlockType)arg1 withData:(id)arg2 error:(id)arg3 lolomoId:(id)arg4;
+ (id)listRefreshParamFrom:(id)arg1 forLolomoIds:(id)arg2 andListContexts:(id)arg3;
+ (id)listsToString:(id)arg1;
+ (_Bool)isValidModel:(id)arg1 forProfileGUID:(id)arg2;
+ (_Bool)hasDefaultLolomoExpired:(id)arg1;
+ (_Bool)hasLolomoFrom:(id)arg1 expiredWithId:(id)arg2;
+ (id)defaultLolomoExpiryDateFrom:(id)arg1;
+ (id)lolomoExpiryDateFrom:(id)arg1 byId:(id)arg2;
+ (id)lolomoListsFrom:(id)arg1 byId:(id)arg2;
+ (id)listsFrom:(id)arg1 byIds:(id)arg2;
+ (id)aroCategoryFrom:(id)arg1 byId:(id)arg2;
+ (id)categoryFrom:(id)arg1 byId:(id)arg2;
+ (id)listFrom:(id)arg1 byId:(id)arg2;
+ (id)listIdFromLolomo:(id)arg1 byContext:(id)arg2;
+ (id)listIndexInLolomo:(id)arg1 byContext:(id)arg2;
+ (id)listIndexByContextFromLolomo:(id)arg1;
+ (id)listIdsFromLolomo:(id)arg1;
+ (id)lolomoFrom:(id)arg1 byId:(id)arg2;
+ (id)lolomosByIdFrom:(id)arg1;
+ (id)defaultLolomoIdFrom:(id)arg1;
+ (id)lolomoIdFrom:(id)arg1 withParams:(id)arg2;
+ (id)lolomoIdFrom:(id)arg1 byKeyName:(id)arg2 keyValue:(id)arg3;
+ (id)summaryFrom:(id)arg1;
+ (_Bool)isDefaultLolomoRequestWithParams:(id)arg1;
+ (id)lolomoSubKeys;
+ (id)emptyIdLookupModel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *listRefreshBindings; // @synthesize listRefreshBindings=_listRefreshBindings;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modelAccessQueue; // @synthesize modelAccessQueue=_modelAccessQueue;
@property(nonatomic) __weak id <PrimingModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PrimingLoader *loader; // @synthesize loader=_loader;
- (_Bool)defaultLolomoListWithContext:(id)arg1 containsVideoId:(id)arg2;
- (_Bool)defaultLolomoHasListWithContext:(id)arg1;
- (id)showById:(id)arg1;
@property(readonly, nonatomic) NSArray *aroCategories;
- (id)aroCategoryById:(id)arg1;
@property(readonly, nonatomic) NSArray *categories;
- (id)categoryById:(id)arg1;
@property(readonly, nonatomic) NSArray *defaultLolomoLists;
- (id)lolomoListByListId:(id)arg1;
- (id)lolomoListsByLolomoId:(id)arg1;
- (id)listByLolomoId:(id)arg1 andContext:(id)arg2;
- (id)lolomoSummaryById:(id)arg1;
@property(readonly, nonatomic) NSString *defaultLolomoId;
- (id)lolomoIdByKeyName:(id)arg1 keyValue:(id)arg2;
@property(readonly, nonatomic) _Bool hasDefaultLolomoExpired;
- (_Bool)deserializeCache:(id)arg1 forProfileGUID:(id)arg2 error:(id *)arg3;
- (id)serializeCache:(id *)arg1;
- (id)debug_modelCopy;
- (void)clearLolomoMemory:(id)arg1;
- (void)clearMemory;
- (id)fetchListDataFromIndex:(long long)arg1 toIndex:(long long)arg2 forDataType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchShowWith:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchGallery:(id)arg1 isCategory:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchCategories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchLolomo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)refreshLolomo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shouldLogWarmerLoadWithRequest:(id)arg1;
- (void)getGallery:(id)arg1 isCategory:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCategories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getLolomoWith:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLoader:(id)arg1;
- (id)expiredVolatileListContexts:(id)arg1;
- (id)playbackRefreshListContexts;
- (void)broadcastListRefreshes:(id)arg1;
- (id)subscribeToListRefreshes:(id)arg1;
- (void)refreshListsWithExplicitContexts:(id)arg1 explicitLolomoId:(id)arg2 params:(id)arg3 priority:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)volatileListContexts:(id)arg1;
- (id)allVolatileListContexts:(id)arg1 forceExpirationCheck:(_Bool)arg2;
- (id)refreshLists:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)listRefreshParams:(id)arg1 explicitLolomoId:(id)arg2 params:(id)arg3;
- (void)unsafe_saveListContext:(id)arg1 forLaterRefresh:(id)arg2;
- (void)mergeEntitiesToDelegate:(id)arg1;
- (id)unsafe_attemptMergeRemoteDataWithModel:(id)arg1 andParams:(id)arg2 retryOnCatch:(_Bool)arg3;
- (void)mergeRemoteDataWithModel:(id)arg1 andParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mergeRemoteDataWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

