//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSServerResourceManager.h"

@class GMSCoreClientParameters, GMSx_GTMSessionFetcherService;

@interface GMSCoreServerResourceManager : GMSServerResourceManager
{
    GMSCoreClientParameters *_clientParameters;
    GMSx_GTMSessionFetcherService *_fetcherService;
    _Bool _isPaintParametersFromPaint;
}

- (void).cxx_destruct;
- (void)requestResourceFromNetworkWithURLString:(id)arg1 originalURLString:(id)arg2 existingResource:(id)arg3 referer:(id)arg4 skippedCaches:(_Bool)arg5;
- (id)initWithConnection:(id)arg1 offlineResourceLoader:(id)arg2 clientParameters:(id)arg3 cacheStorageDescriptor:(id)arg4 timingClock:(id)arg5 capacity:(unsigned long long)arg6 diskCapacity:(unsigned long long)arg7;
- (id)initWithConnection:(id)arg1 offlineResourceLoader:(id)arg2 clientParameters:(id)arg3 fetcherService:(id)arg4 isPaintParametersFromPaint:(_Bool)arg5 cacheStorageDescriptor:(id)arg6 timingClock:(id)arg7 capacity:(unsigned long long)arg8 diskCapacity:(unsigned long long)arg9;

@end
