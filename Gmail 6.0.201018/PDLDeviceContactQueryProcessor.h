//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDLQueryProcessorBase.h"

@class GPCPromise;
@protocol PDLCacheService;

@interface PDLDeviceContactQueryProcessor : PDLQueryProcessorBase
{
    id <PDLCacheService> _cacheService;
    GPCPromise *_deviceContactCacheLoadedPromise;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPCPromise *deviceContactCacheLoadedPromise; // @synthesize deviceContactCacheLoadedPromise=_deviceContactCacheLoadedPromise;
@property(readonly, nonatomic) id <PDLCacheService> cacheService; // @synthesize cacheService=_cacheService;
- (long long)queryProcessorType;
- (void)cancel;
- (void)processQuery;
- (id)initWithDelegate:(id)arg1 context:(id)arg2 filter:(id)arg3 loadResultsQueue:(id)arg4;

@end

