//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary;
@protocol _TtP8ArgoCore15ACFSubscription_, _TtP8ArgoCore8ACFModel_;

@protocol _TtP8ArgoCore13ACFDataSource_
- (id <_TtP8ArgoCore15ACFSubscription_>)falcor:(id <_TtP8ArgoCore8ACFModel_>)arg1 callWithParams:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg3;
- (id <_TtP8ArgoCore15ACFSubscription_>)falcor:(id <_TtP8ArgoCore8ACFModel_>)arg1 getWithParams:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg3;

@optional
- (NSDictionary *)falcor:(id <_TtP8ArgoCore8ACFModel_>)arg1 prePOSTWithPQLPathSets:(NSArray *)arg2;
- (NSDictionary *)falcor:(id <_TtP8ArgoCore8ACFModel_>)arg1 preGETWithPQLPathSets:(NSArray *)arg2;
- (NSDictionary *)falcor:(id <_TtP8ArgoCore8ACFModel_>)arg1 preCallWithKeyPaths:(NSArray *)arg2;
- (NSDictionary *)falcor:(id <_TtP8ArgoCore8ACFModel_>)arg1 preGetWithKeyPaths:(NSArray *)arg2;
@end

