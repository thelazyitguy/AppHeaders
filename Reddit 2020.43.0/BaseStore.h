//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableDictionary, NSPointerArray, NSString, UnfairLock;

@interface BaseStore : NSObject
{
    _Bool _shouldPersist;
    Class _modelClass;
    NSMutableDictionary *_inMemStorage;
    NSString *_baseURLString;
    UnfairLock *_lock;
    NSFileManager *_fileManager;
    NSPointerArray *_observations;
}

+ (id)ephemeralStoreWithModelClass:(Class)arg1;
+ (id)persistentStoreWithModelClass:(Class)arg1 baseURLString:(id)arg2 fileManager:(id)arg3;
+ (id)serialQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *observations; // @synthesize observations=_observations;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) UnfairLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) NSString *baseURLString; // @synthesize baseURLString=_baseURLString;
@property(readonly, nonatomic) NSMutableDictionary *inMemStorage; // @synthesize inMemStorage=_inMemStorage;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(readonly, nonatomic) _Bool shouldPersist; // @synthesize shouldPersist=_shouldPersist;
- (void)addObservation:(id)arg1;
- (id)observeKeyPaths:(id)arg1 ofModel:(id)arg2 didChange:(CDUnknownBlockType)arg3;
- (id)observeKeyPath:(id)arg1 ofModel:(id)arg2 didChange:(CDUnknownBlockType)arg3;
- (id)observeStateWithIdentifier:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 stateDidChange:(CDUnknownBlockType)arg4;
- (id)observeModel:(id)arg1 didChange:(CDUnknownBlockType)arg2;
- (void)removeAllObjects;
- (void)enumerateObjects:(CDUnknownBlockType)arg1;
- (void)fetchObjectsWithPks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerObservationsAfterAcquiringLockForObject:(id)arg1;
- (id)createObjectWithPk:(id)arg1;
- (id)objectWithPk:(id)arg1;
- (id)createOrGetObjectWithPK:(id)arg1;
- (_Bool)deleteObjectWithPK:(id)arg1;
- (void)insertObject:(id)arg1;
- (_Bool)isValidPk:(id)arg1;
- (void)createDirectoryIfNeeded;
- (id)initWithBaseURLString:(id)arg1 modelClass:(Class)arg2 shouldPersist:(_Bool)arg3 fileManager:(id)arg4;

@end
