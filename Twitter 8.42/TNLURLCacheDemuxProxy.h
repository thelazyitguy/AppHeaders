//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLSharedURLCacheProxy.h>

@interface TNLURLCacheDemuxProxy : TNLSharedURLCacheProxy
{
}

- (void)removeCachedResponseForDataTask:(id)arg1;
- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;

@end
