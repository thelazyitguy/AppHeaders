//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/_TtP11FalcorSwift14NFFModelLegacy_-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;
@protocol _TtP11FalcorSwift15NFFGetOperation_, _TtP11FalcorSwift15NFFSetOperation_, _TtP11FalcorSwift16NFFCallOperation_, _TtP11FalcorSwift18NFFLoggingDelegate_, _TtP11FalcorSwift21NFFHTTPClientProtocol_, _TtP11FalcorSwift8NFFModel_;

@protocol _TtP11FalcorSwift8NFFModel_ <_TtP11FalcorSwift14NFFModelLegacy_>
- (id <_TtP11FalcorSwift8NFFModel_>)withoutDataSource;
- (void)invalidateWithKeyPaths:(NSArray *)arg1;
- (void)setCache:(NSDictionary *)arg1;
- (NSDictionary *)getCacheWithKeyPaths:(NSArray *)arg1;
- (id <_TtP11FalcorSwift16NFFCallOperation_>)callFunctionWithKeyPath:(NSString *)arg1 args:(NSArray *)arg2 refKeyPathSuffixes:(NSArray *)arg3 thisKeyPaths:(NSArray *)arg4;
- (id <_TtP11FalcorSwift15NFFSetOperation_>)setWithValue:(NSDictionary *)arg1;
- (id <_TtP11FalcorSwift15NFFGetOperation_>)getWithKeyPaths:(NSArray *)arg1;
@property(nonatomic, readonly) unsigned long long version;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) NSArray *prefixes;
@property(nonatomic, readonly) id <_TtP11FalcorSwift21NFFHTTPClientProtocol_> httpClient;
@property(nonatomic) __weak id <_TtP11FalcorSwift18NFFLoggingDelegate_> loggingDelegate;
@end

