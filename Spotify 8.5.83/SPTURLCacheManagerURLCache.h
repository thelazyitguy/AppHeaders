//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLCache.h>

@interface SPTURLCacheManagerURLCache : NSURLCache
{
}

- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)addCachedHeaderToResponse:(id)arg1;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;

@end

