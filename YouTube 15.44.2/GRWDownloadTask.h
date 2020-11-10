//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcher, NSURL;

@interface GRWDownloadTask : NSObject
{
    NSURL *_URL;
    CDUnknownBlockType _completion;
    GTMSessionFetcher *_fetcher;
}

+ (void)setFetcherService:(id)arg1;
+ (id)fetcherService;
+ (void)setCacheProvider:(id)arg1;
+ (id)cacheProvider;
+ (id)cacheKeyForURL:(id)arg1;
+ (_Bool)cacheContainsDataWithURL:(id)arg1;
+ (id)secureURLForURL:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GTMSessionFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)cache;
- (id)fetcherWithURLRequest:(id)arg1;
- (void)fetchDidFinish:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)stopFetching;
- (_Bool)fetch;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

