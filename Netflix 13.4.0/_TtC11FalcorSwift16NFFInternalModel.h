//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <ArgoCore/_TtP11FalcorSwift8NFFModel_-Protocol.h>

@class NSArray, NSURL;
@protocol _TtP11FalcorSwift18NFFLoggingDelegate_, _TtP11FalcorSwift21NFFHTTPClientProtocol_;

@interface _TtC11FalcorSwift16NFFInternalModel : _TtCs12_SwiftObject <_TtP11FalcorSwift8NFFModel_>
{
    // Error parsing type: , name: $__lazy_storage_$_internalModel
    // Error parsing type: , name: $__lazy_storage_$_dataSource
    // Error parsing type: , name: cache
    // Error parsing type: , name: loggingDelegate
    // Error parsing type: , name: httpClient
    // Error parsing type: , name: url
    // Error parsing type: , name: maxRetries
}

- (id)withoutDataSource;
- (void)invalidateWithKeyPaths:(id)arg1;
- (void)setCache:(id)arg1;
- (id)getCacheWithKeyPaths:(id)arg1;
- (id)callFunctionWithKeyPath:(id)arg1 args:(id)arg2 refKeyPathSuffixes:(id)arg3 thisKeyPaths:(id)arg4;
- (id)setWithValue:(id)arg1;
- (id)getWithKeyPaths:(id)arg1;
@property(nonatomic, readonly) unsigned long long version;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic) __weak id <_TtP11FalcorSwift21NFFHTTPClientProtocol_> httpClient; // @synthesize httpClient;
@property(nonatomic) __weak id <_TtP11FalcorSwift18NFFLoggingDelegate_> loggingDelegate; // @synthesize loggingDelegate;
@property(nonatomic, readonly) NSArray *prefixes;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valuesForKeyPaths:(id)arg1 optimizedKeyPaths:(id)arg2 fillEmptyWithNull:(_Bool)arg3;
- (id)valuesForKeyPaths:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)mergeJSONDictionaryIntoModel:(id)arg1;
- (_Bool)deserializeCache:(id)arg1 error:(id *)arg2;
- (id)serializeCacheWithKeyPaths:(id)arg1 error:(id *)arg2;
- (id)callFunction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)callFunction:(id)arg1 fetchKeyPaths:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getKeyPath:(id)arg1 option:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getKeyPaths:(id)arg1 option:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
