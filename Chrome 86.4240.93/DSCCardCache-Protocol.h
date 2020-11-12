//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class DSCEventID, DSCSharedCardData, NSArray, NSURL;

@protocol DSCCardCache <NSObject>
@property(readonly, nonatomic) double lastUpdateTime;
@property(readonly, nonatomic, getter=isOpen) _Bool open;
@property(readonly, nonatomic) NSURL *cacheDirectoryURL;
- (void)closeAndDelete:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchCardsWithIdentifiers:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)updateEventID:(DSCEventID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)storeCards:(NSArray *)arg1 withKeys:(NSArray *)arg2 sharedCardData:(DSCSharedCardData *)arg3 completion:(void (^)(NSError *))arg4;
- (void)updateMetadataForIdentifiers:(NSArray *)arg1 withBlock:(void (^)(DSCCardMetadata *))arg2 completion:(void (^)(NSError *))arg3;
- (void)openWithMaxAge:(double)arg1 prefetchCount:(unsigned long long)arg2 completion:(void (^)(DSCEventID *, NSArray *, NSArray *, DSCSharedCardData *, NSError *))arg3;
- (_Bool)deleteIfCorruptOrExpiredWithMaxAge:(double)arg1;
- (_Bool)isExpiredWithMaxAge:(double)arg1;
@end
